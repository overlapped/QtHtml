#include "qhtmldefines.hpp"
#include "qhtmlmeta.hpp"

namespace QtHtml {

QString HttpEquivToString(Meta::HttpEquiv value)
{
    QString result;

    switch (value) {
        case Meta::HttpEquiv::ContentSecurityPolicy: result = "content-security-policy"; break;
        case Meta::HttpEquiv::ContentType: result = "content-type"; break;
        case Meta::HttpEquiv::DefaultStyle: result = "default-style"; break;
        case Meta::HttpEquiv::Refresh: result = "refresh"; break;
        case Meta::HttpEquiv::XUACompatibility: result = "x-ua-compatibility"; break;
        default:
            break;
    }

    return result;
}

Meta::Meta() : Element(HTML_TAG_META, QVariant())
{

}

Meta::Meta(const QString &charset) : Element(HTML_TAG_META, QVariant())
{
    selfClosed_ = true;
    addAttribute("charset", charset);
}

Meta::Meta(const QString &name, const QString &content) : Element(HTML_TAG_META, QVariant())
{
    selfClosed_ = true;
    addAttribute("name", name);
    addAttribute("content", content);
}

Meta &Meta::setHttpEquiv(HttpEquiv value, const QString& content)
{
    addAttribute("http-equiv", HttpEquivToString(value));
    addAttribute("content", content);
    return *this;
}

}
