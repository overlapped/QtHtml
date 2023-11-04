#ifndef __Q_HTML_DIV__
#define __Q_HTML_DIV__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlDiv : public QHtmlElement
{
public:
    QHtmlDiv();
    explicit QHtmlDiv(const QString &classStyle);
};

#endif // #ifndef __Q_HTML_DIV__
