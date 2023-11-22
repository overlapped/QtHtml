#include "qhtmldocument.hpp"
#include "qhtmltitle.hpp"
#include "qhtmlstyle.hpp"

namespace QtHtml {

QTextStream& operator<< (QTextStream& ostream, const QHtmlDocument& element)
{
    return element.toString(ostream);
}

QHtmlDocument::QHtmlDocument() : QHtmlElement(), head_(*static_cast<QHtmlHead*>(&children_[0])), body_(*static_cast<QHtmlBody*>(&children_[1]))
{

}

QHtmlDocument::QHtmlDocument(const QString &title) : QHtmlElement(), head_(*static_cast<QHtmlHead*>(&children_[0])), body_(*static_cast<QHtmlBody*>(&children_[1]))
{
    head_ << QHtmlTitle(title);
}

QHtmlDocument::QHtmlDocument(const QString &title, const QHtmlStyle &style) : QHtmlElement(), head_(*static_cast<QHtmlHead*>(&children_[0])), body_(*static_cast<QHtmlBody*>(&children_[1]))
{
    head_ << QHtmlTitle(title);
    head_ << style;
}

QHtmlHead& QHtmlDocument::head()
{
    return head_;
}

QHtmlBody& QHtmlDocument::body()
{
    return body_;
}

QString QHtmlDocument::toString() const
{
    QString str;
    QTextStream ostream(&str);
    ostream << *this;

    return str;
}

void QHtmlDocument::setLang(const QString &value)
{
    head_.addAttribute("lang", value);
}

QTextStream& QHtmlDocument::toString(QTextStream &ostream) const
{
    ostream << "<!DOCTYPE html>\n";
    QHtmlElement::toString(ostream);

    return ostream;
}

QHtmlDocument& QHtmlDocument::operator << (const QHtmlElement &element)
{
    body_ << element;
    return *this;
}

}
