#ifndef __Q_HTML_STRONG__
#define __Q_HTML_STRONG__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlStrong : public QHtmlElement
{
public:
    explicit QHtmlStrong(const QString &content);
};

}

#endif // #ifndef __Q_HTML_STRONG__
