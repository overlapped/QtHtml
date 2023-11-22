#ifndef __Q_HTML_MARK__
#define __Q_HTML_MARK__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlMark : public QHtmlElement
{
public:
    explicit QHtmlMark(const QString &content);
};

}

#endif // #ifndef __Q_HTML_MARK__
