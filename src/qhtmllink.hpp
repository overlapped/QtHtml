#ifndef __Q_HTML_LINK__
#define __Q_HTML_LINK__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlLink : public QHtmlElement
{
public:
    enum class CrossOrigin {
        Anonymous,
        UseCredentials
    };

    explicit QHtmlLink(const QString &rel, const QString& url);
    QHtmlLink& setCrossOrigin(CrossOrigin value, const QString& content);
    QHtmlLink& setIntegrity(const QString& content);
    QHtmlLink& setType(const QString& value);
};

}

#endif // #ifndef __Q_HTML_LINK__
