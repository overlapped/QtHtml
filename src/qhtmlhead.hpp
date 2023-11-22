#ifndef __Q_HTML_HEAD__
#define __Q_HTML_HEAD__

#include "qhtmlelement.hpp"
#include "qhtmltitle.hpp"
#include "qhtmlstyle.hpp"
#include "qhtmlmeta.hpp"
#include "qhtmllink.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlHead : public QHtmlElement
{
public:
    QHtmlHead();

    QHtmlHead& operator << (QHtmlElement& element) = delete;

    QHtmlHead& operator << (const QHtmlTitle& title);
    QHtmlHead& operator << (const QHtmlStyle& style);
    QHtmlHead& operator << (const QHtmlMeta& meta);
    QHtmlHead& operator << (const QHtmlLink& link);
};

}

#endif // #ifndef __Q_HTML_HEAD__
