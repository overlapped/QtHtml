#ifndef __Q_HTML_TITLE__
#define __Q_HTML_TITLE__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlTitle : public QHtmlElement
{
public:
    explicit QHtmlTitle(const QString &content);
};

}

#endif // #ifndef __Q_HTML_TITLE__
