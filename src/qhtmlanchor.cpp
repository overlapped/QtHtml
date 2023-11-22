#include "qhtmldefines.hpp"
#include "qhtmlanchor.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

QHtmlAnchor::QHtmlAnchor() : QHtmlElement(HTML_TAG_ANCHOR, QVariant())
{

}

QHtmlAnchor::QHtmlAnchor(const QString &content, const QUrl &url) : QHtmlElement(HTML_TAG_ANCHOR, content)
{
    addAttribute(HTML_ATTR_ANCHOR_HREF, url);
}

QHtmlAnchor::QHtmlAnchor(const QString &content) : QHtmlElement(HTML_TAG_ANCHOR, content)
{

}

QHtmlAnchor& QHtmlAnchor::setDownload(const QString &value)
{
    addAttribute(HTML_ATTR_ANCHOR_DOWNLOAD, value);
    return *this;
}

QHtmlAnchor& QHtmlAnchor::setHref(const QUrl &value)
{
    addAttribute(HTML_ATTR_ANCHOR_HREF, value);
    return *this;
}

QHtmlAnchor& QHtmlAnchor::setRel(const QUrl &value)
{
    addAttribute(HTML_ATTR_ANCHOR_REL, value);
    return *this;
}

QHtmlAnchor& QHtmlAnchor::setTarget(Target value)
{
    addAttribute(HTML_ATTR_ANCHOR_TARGET, QHtmlUtils::TargetToString(value));
    return *this;
}

}
