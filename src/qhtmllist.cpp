#include "qhtmldefines.hpp"
#include "qhtmllist.hpp"

namespace QtHtml {

List::List(bool isOrdered) : Element(isOrdered ? HTML_TAG_ORDERED_LIST : HTML_TAG_UNORDERED_LIST, QVariant())
{
    
}

List::List(bool isOrdered, const QString &classStyle) : Element(isOrdered ? HTML_TAG_ORDERED_LIST : HTML_TAG_UNORDERED_LIST, QVariant())
{
    setClass(classStyle);
}

List& List::operator << (const ListItem &item)
{
    children_.append(item);
    return *this;
}

List& List::operator << (const Element& element)
{
    children_.append(element);
    return *this;
}

ListItem::ListItem() : Element(HTML_TAG_LIST_ITEM, QVariant())
{

}

ListItem::ListItem(const QString &content) : Element(HTML_TAG_LIST_ITEM, content)
{

}

ListItem& ListItem::operator << (const Element& element)
{
    children_.append(element);
    return *this;
}

}
