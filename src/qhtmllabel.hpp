#ifndef __Q_HTML_LABEL__
#define __Q_HTML_LABEL__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlLabel : public QHtmlElement
{
public:
    explicit QHtmlLabel(const QString& control, const QString &content);
};

#endif // #ifndef __Q_HTML_LABEL__
