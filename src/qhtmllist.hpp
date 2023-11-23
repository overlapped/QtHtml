#ifndef __Q_HTML_LIST__
#define __Q_HTML_LIST__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT ListItem : public Element
{
public:
    ListItem();
    explicit ListItem(const QString& content);

    ListItem& operator << (const Element& element);
};

class QTHTML_EXPORT List : public Element
{
public:
    explicit List(bool isOrdered = false);
    List(bool isOrdered, const QString& classStyle);

    List& operator << (const Element& element);
    List& operator << (const ListItem& item);
};

}

#endif // #ifndef __Q_HTML_LIST__
