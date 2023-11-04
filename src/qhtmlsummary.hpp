#ifndef __Q_HTML_SUMMARY__
#define __Q_HTML_SUMMARY__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlDetails : public QHtmlElement
{
public:
    explicit QHtmlDetails(const QString &content = QString());
    QHtmlDetails& setOpen(const QString &content);
};

class QTHTML_EXPORT QHtmlSummary : public QHtmlElement
{
public:
    explicit QHtmlSummary(const QString &content);
};

#endif // #ifndef __Q_HTML_SUMMARY__
