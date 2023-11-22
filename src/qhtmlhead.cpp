#include "qhtmldefines.hpp"
#include "qhtmlhead.hpp"

namespace QtHtml {

QHtmlHead::QHtmlHead() : QHtmlElement(HTML_TAG_HEAD, QVariant())
{

}

QHtmlHead& QHtmlHead::operator << (const QHtmlTitle &title)
{
    children_.append(title);
    return *this;
}

QHtmlHead& QHtmlHead::operator << (const QHtmlStyle& style)
{
    children_.append(style);
    return *this;
}

QHtmlHead& QHtmlHead::operator << (const QHtmlMeta& meta)
{
    children_.append(meta);
    return *this;
}

QHtmlHead& QHtmlHead::operator << (const QHtmlLink& link)
{
    children_.append(link);
    return *this;
}

}
