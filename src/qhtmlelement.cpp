#include <QVariantMap>
#include <QMapIterator>

#include "qhtmldefines.hpp"
#include "qhtmlelement.hpp"
#include "qhtmlbody.hpp"
#include "qhtmlhead.hpp"

namespace QtHtml {

Element::Element(const QString &name, const QVariant &content) : name_(name), content_(content), selfClosed_(false)
{

}

Element& Element::addAttribute(const QString &name, const QVariant &content)
{
    if (!name.isEmpty()) {
        attributes_[name] = content;
    }
    return *this;
}

QVariant Element::attribute(const QString &name)
{
    return attributes_[name];
}

Element& Element::operator <<(const Element &child)
{
    children_.append(child);
    return *this;
}

QString Element::toString() const
{
    QString str;
    QTextStream os(&str);
    os << *this;

    return str;
}

Element &Element::operator <<(const QVariant &content)
{
    QString result(content_.toString());
    result += content.toString();
    content_ = result;

    return *this;
}

Element& Element::setAccessKey(const QString &value)
{
    return addAttribute(HTML_ATTR_ACCESS_KEY, value);
}

Element& Element::setAutoCapitalize(AutoCapitalize value)
{
    return *this;
}

Element& Element::setAutoFocus(bool value)
{
    return addAttribute(HTML_ATTR_AUTO_FOCUS, value);
}

Element& Element::setClass(const QString &value)
{
    return addAttribute(HTML_ATTR_CLASS, value);
}

Element& Element::setId(const QString &value)
{
    return addAttribute(HTML_ATTR_ID, value);
}

Element& Element::setLang(const QString &value)
{
    return addAttribute(HTML_ATTR_LANG, value);
}

Element& Element::setStyle(const QString &value)
{
    return addAttribute(HTML_ATTR_STYLE, value);
}

Element& Element::setTitle(const QString &value)
{
    return addAttribute(HTML_ATTR_TITLE, value);
}

Element::Element() : name_("html")
{
    children_.append(Head());
    children_.append(Body());
}


QTextStream &Element::toString(QTextStream &ostream, const int indent) const
{
    toStringOpen(ostream, indent);
    toStringContent(ostream, indent);
    toStringClose(ostream, indent);

    return ostream;
}

Element &Element::removeAttribute(const QString& name)
{
    attributes_.remove(name);
    return *this;
}

const QVariant &Element::content() const
{
    return content_;
}

void Element::setContent(const QVariant& content)
{
    content_ = content;
}

QString Element::name() const
{
    return name_;
}

void Element::toStringOpen(QTextStream& ostream, const int indent) const
{
    if (!name_.isEmpty())
    {
        ostream << '<' << name_;

        QMapIterator<QString, QVariant> it(attributes_);
        while (it.hasNext()) {
            it.next();
            ostream << ' ' << it.key();
            if (!it.value().toString().isEmpty())
            {
                ostream << "=" << '\"' << it.value().toString() << '\"';
            }
        }

        if (content_.isNull() || !content_.isValid() || content_.toString().isEmpty())
        {
            if (!children_.empty() || selfClosed_)
            {
                ostream << ">\n";
            }
            else
            {
                ostream << ">";
            }
        }
        else
        {
            ostream << '>';
        }
    }
}

void Element::toStringContent(QTextStream &ostream, const int indent) const
{
    if (!name_.isEmpty())
    {
        ostream << content_.toString();

        for (auto &child : children_)
        {
            child.toString(ostream, indent + 2);
        }
    }
    else
    {
        ostream << content_.toString() << "\n";
    }
}

void Element::toStringClose(QTextStream &ostream, const int indent) const
{
    if (!name_.isEmpty())
    {
        if ((!content_.isNull() && !content_.toString().isEmpty()) || !children_.isEmpty() || !selfClosed_)
        {
            ostream << "</" << name_ << ">\n";
        }
    }
}

inline QTextStream& operator << (QTextStream& ostream, const QtHtml::Element &element) {
    return element.toString(ostream);
}

}
