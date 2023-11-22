#include "qhtmldefines.hpp"
#include "qhtmlmeta.hpp"

namespace QtHtml {

QString HttpEquivToString(QHtmlMeta::HttpEquiv value)
{
    QString result;

    switch (value) {
        case QHtmlMeta::HttpEquiv::ContentSecurityPolicy: result = "content-security-policy"; break;
        case QHtmlMeta::HttpEquiv::ContentType: result = "content-type"; break;
        case QHtmlMeta::HttpEquiv::DefaultStyle: result = "default-style"; break;
        case QHtmlMeta::HttpEquiv::Refresh: result = "refresh"; break;
        case QHtmlMeta::HttpEquiv::XUACompatibility: result = "x-ua-compatibility"; break;
        default:
            break;
    }

    return result;
}

QHtmlMeta::QHtmlMeta() : QHtmlElement(HTML_TAG_META, QVariant())
{

}

QHtmlMeta::QHtmlMeta(const QString &charset) : QHtmlElement(HTML_TAG_META, QVariant())
{
    selfClosed_ = true;
    addAttribute("charset", charset);
}

QHtmlMeta::QHtmlMeta(const QString &name, const QString &content) : QHtmlElement(HTML_TAG_META, QVariant())
{
    selfClosed_ = true;
    addAttribute("name", name);
    addAttribute("content", content);
}

QHtmlMeta &QHtmlMeta::setHttpEquiv(HttpEquiv value, const QString& content)
{
    addAttribute("http-equiv", HttpEquivToString(value));
    addAttribute("content", content);
    return *this;
}

}
