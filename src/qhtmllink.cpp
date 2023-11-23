#include "qhtmldefines.hpp"
#include "qhtmllink.hpp"

namespace QtHtml {

QString CrossOriginToString(Link::CrossOrigin value)
{
    QString result;

    switch (value) {
        case Link::CrossOrigin::Anonymous: result = "anonymous"; break;
        case Link::CrossOrigin::UseCredentials: result = "use-credentials"; break;
        default:
            break;
    }

    return result;
}

Link::Link(const QString &rel, const QString &url) : Element(HTML_TAG_LINK, QVariant())
{
    selfClosed_ = true;
    addAttribute("rel", rel);
    addAttribute("href", url);
}

Link &Link::setCrossOrigin(CrossOrigin value, const QString &content)
{
    addAttribute("crossorigin", content);
    return *this;
}

Link &Link::setIntegrity(const QString &content)
{
    addAttribute("integrity", content);
    return *this;
}

Link &Link::setType(const QString &value)
{
    addAttribute("type", value);
    return *this;
}

}
