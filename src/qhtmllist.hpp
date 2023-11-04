#ifndef __Q_HTML_LIST__
#define __Q_HTML_LIST__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlListItem : public QHtmlElement
{
public:
    QHtmlListItem();
    explicit QHtmlListItem(const QString& content);

    QHtmlListItem& operator << (const QHtmlElement& element);
};

class QTHTML_EXPORT QHtmlList : public QHtmlElement
{
public:
    explicit QHtmlList(bool isOrdered = false);
    QHtmlList(bool isOrdered, const QString& classStyle);

    QHtmlList& operator << (const QHtmlElement& element);
    QHtmlList& operator << (const QHtmlListItem& item);
};

#endif // #ifndef __Q_HTML_LIST__
