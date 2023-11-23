#ifndef __Q_HTML_META__
#define __Q_HTML_META__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Meta : public Element
{
public:
    enum class HttpEquiv {
        ContentSecurityPolicy,
        ContentType,
        DefaultStyle,
        XUACompatibility,
        Refresh
    };

    Meta();
    Meta(const QString& charset);
    Meta(const QString& name, const QString& content);

    Meta& setHttpEquiv(HttpEquiv value, const QString &content);
};

}

#endif // #ifndef __Q_HTML_META__
