#ifndef __Q_HTML_STYLE__
#define __Q_HTML_STYLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlStyle : public QHtmlElement
{
public:
    QHtmlStyle();
    explicit QHtmlStyle(const QString &content);
};

}

#endif // #ifndef __Q_HTML_STYLE__
