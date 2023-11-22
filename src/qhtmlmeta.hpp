#ifndef __Q_HTML_META__
#define __Q_HTML_META__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlMeta : public QHtmlElement
{
public:
    enum class HttpEquiv {
        ContentSecurityPolicy,
        ContentType,
        DefaultStyle,
        XUACompatibility,
        Refresh
    };

    QHtmlMeta();
    QHtmlMeta(const QString& charset);
    QHtmlMeta(const QString& name, const QString& content);

    QHtmlMeta& setHttpEquiv(HttpEquiv value, const QString &content);
};

}

#endif // #ifndef __Q_HTML_META__
