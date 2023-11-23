#include "qhtmldocument.hpp"
#include "qhtmltitle.hpp"
#include "qhtmlstyle.hpp"

namespace QtHtml {

QTextStream& operator<< (QTextStream& ostream, const Document& element)
{
    return element.toString(ostream);
}

Document::Document() : Element(), head_(*static_cast<Head*>(&children_[0])), body_(*static_cast<Body*>(&children_[1]))
{

}

Document::Document(const QString &title) : Element(), head_(*static_cast<Head*>(&children_[0])), body_(*static_cast<Body*>(&children_[1]))
{
    head_ << Title(title);
}

Document::Document(const QString &title, const Style &style) : Element(), head_(*static_cast<Head*>(&children_[0])), body_(*static_cast<Body*>(&children_[1]))
{
    head_ << Title(title);
    head_ << style;
}

Head& Document::head()
{
    return head_;
}

Body& Document::body()
{
    return body_;
}

QString Document::toString() const
{
    QString str;
    QTextStream ostream(&str);
    ostream << *this;

    return str;
}

void Document::setLang(const QString &value)
{
    head_.addAttribute("lang", value);
}

QTextStream& Document::toString(QTextStream &ostream) const
{
    ostream << "<!DOCTYPE html>\n";
    Element::toString(ostream);

    return ostream;
}

Document& Document::operator << (const Element &element)
{
    body_ << element;
    return *this;
}

}
