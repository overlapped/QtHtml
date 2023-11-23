#ifndef __Q_HTML_LINK__
#define __Q_HTML_LINK__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Link : public Element
{
public:
    enum class CrossOrigin {
        Anonymous,
        UseCredentials
    };

    explicit Link(const QString &rel, const QString& url);
    Link& setCrossOrigin(CrossOrigin value, const QString& content);
    Link& setIntegrity(const QString& content);
    Link& setType(const QString& value);
};

}

#endif // #ifndef __Q_HTML_LINK__
