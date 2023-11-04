#ifndef __Q_HTML_TIME__
#define __Q_HTML_TIME__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlTime : public QHtmlElement
{
public:
    explicit QHtmlTime(const QString& datetime, const QString &content);
};

#endif // #ifndef __Q_HTML_TIME__
