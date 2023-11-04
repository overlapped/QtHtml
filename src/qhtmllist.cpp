#include "qhtmldefines.hpp"
#include "qhtmllist.hpp"

QHtmlList::QHtmlList(bool isOrdered) : QHtmlElement(isOrdered ? HTML_TAG_ORDERED_LIST : HTML_TAG_UNORDERED_LIST, QVariant())
{
    
}

QHtmlList::QHtmlList(bool isOrdered, const QString &classStyle) : QHtmlElement(isOrdered ? HTML_TAG_ORDERED_LIST : HTML_TAG_UNORDERED_LIST, QVariant())
{
    setClass(classStyle);
}

QHtmlList& QHtmlList::operator << (const QHtmlListItem &item)
{
    children_.append(item);
    return *this;
}

QHtmlList& QHtmlList::operator << (const QHtmlElement& element)
{
    children_.append(element);
    return *this;
}

QHtmlListItem::QHtmlListItem() : QHtmlElement(HTML_TAG_LIST_ITEM, QVariant())
{

}

QHtmlListItem::QHtmlListItem(const QString &content) : QHtmlElement(HTML_TAG_LIST_ITEM, content)
{

}

QHtmlListItem& QHtmlListItem::operator << (const QHtmlElement& element)
{
    children_.append(element);
    return *this;
}
