#ifndef __Q_HTML_BASE__
#define __Q_HTML_BASE__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlBase : public QHtmlElement
{
public:
    QHtmlBase(const QString &url, Target value);
};

#endif // #ifndef __Q_HTML_BASE__
