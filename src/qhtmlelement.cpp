#include <QVariantMap>
#include <QMapIterator>

#include "qhtmldefines.hpp"
#include "qhtmlelement.hpp"
#include "qhtmlbody.hpp"
#include "qhtmlhead.hpp"

QHtmlElement::QHtmlElement(const QString &name, const QVariant &content) : name_(name), content_(content), selfClosed_(false)
{

}

QHtmlElement& QHtmlElement::addAttribute(const QString &name, const QVariant &content)
{
    if (!name.isEmpty()) {
        attributes_[name] = content;
    }
    return *this;
}

QVariant QHtmlElement::attribute(const QString &name)
{
    return attributes_[name];
}

QHtmlElement& QHtmlElement::operator <<(const QHtmlElement &child)
{
    children_.append(child);
    return *this;
}

QString QHtmlElement::toString() const
{
    QString str;
    QTextStream os(&str);
    os << *this;

    return str;
}

QHtmlElement &QHtmlElement::operator <<(const QVariant &content)
{
    QString result(content_.toString());
    result += content.toString();
    content_ = result;

    return *this;
}

QHtmlElement& QHtmlElement::setAccessKey(const QString &value)
{
    return addAttribute(HTML_ATTR_ACCESS_KEY, value);
}

QHtmlElement& QHtmlElement::setAutoCapitalize(AutoCapitalize value)
{
    return *this;
}

QHtmlElement& QHtmlElement::setAutoFocus(bool value)
{
    return addAttribute(HTML_ATTR_AUTO_FOCUS, value);
}

QHtmlElement& QHtmlElement::setClass(const QString &value)
{
    return addAttribute(HTML_ATTR_CLASS, value);
}

QHtmlElement& QHtmlElement::setId(const QString &value)
{
    return addAttribute(HTML_ATTR_ID, value);
}

QHtmlElement& QHtmlElement::setLang(const QString &value)
{
    return addAttribute(HTML_ATTR_LANG, value);
}

QHtmlElement& QHtmlElement::setStyle(const QString &value)
{
    return addAttribute(HTML_ATTR_STYLE, value);
}

QHtmlElement& QHtmlElement::setTitle(const QString &value)
{
    return addAttribute(HTML_ATTR_TITLE, value);
}

QHtmlElement::QHtmlElement() : name_("html")
{
    children_.append(QHtmlHead());
    children_.append(QHtmlBody());
}


QTextStream &QHtmlElement::toString(QTextStream &ostream, const int indent) const
{
    toStringOpen(ostream, indent);
    toStringContent(ostream, indent);
    toStringClose(ostream, indent);

    return ostream;
}

QHtmlElement &QHtmlElement::removeAttribute(const QString &name)
{
    attributes_.remove(name);
    return *this;
}

void QHtmlElement::toStringOpen(QTextStream &ostream, const int indent) const
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

void QHtmlElement::toStringContent(QTextStream &ostream, const int indent) const
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

void QHtmlElement::toStringClose(QTextStream &ostream, const int indent) const
{
    if (!name_.isEmpty())
    {
        if ((!content_.isNull() && !content_.toString().isEmpty()) || !children_.isEmpty() || !selfClosed_)
        {
            ostream << "</" << name_ << ">\n";
        }
    }
}

inline QTextStream& operator << (QTextStream& ostream, const QHtmlElement& element) {
    return element.toString(ostream);
}
