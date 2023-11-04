#include "qhtmldefines.hpp"
#include "qhtmllink.hpp"

QString CrossOriginToString(QHtmlLink::CrossOrigin value)
{
    QString result;

    switch (value) {
        case QHtmlLink::CrossOrigin::Anonymous: result = "anonymous"; break;
        case QHtmlLink::CrossOrigin::UseCredentials: result = "use-credentials"; break;
        default:
            break;
    }

    return result;
}

QHtmlLink::QHtmlLink(const QString &rel, const QString &url) : QHtmlElement(HTML_TAG_LINK, QVariant())
{
    selfClosed_ = true;
    addAttribute("rel", rel);
    addAttribute("href", url);
}

QHtmlLink &QHtmlLink::setCrossOrigin(CrossOrigin value, const QString &content)
{
    addAttribute("crossorigin", content);
    return *this;
}

QHtmlLink &QHtmlLink::setIntegrity(const QString &content)
{
    addAttribute("integrity", content);
    return *this;
}

QHtmlLink &QHtmlLink::setType(const QString &value)
{
    addAttribute("type", value);
    return *this;
}
