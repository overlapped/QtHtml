#include "qhtmldefines.hpp"
#include "qhtmlanchor.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

Anchor::Anchor() : Element(HTML_TAG_ANCHOR, QVariant())
{

}

Anchor::Anchor(const QString &content, const QUrl &url) : Element(HTML_TAG_ANCHOR, content)
{
    addAttribute(HTML_ATTR_ANCHOR_HREF, url);
}

Anchor::Anchor(const QString &content) : Element(HTML_TAG_ANCHOR, content)
{

}

Anchor& Anchor::setDownload(const QString &value)
{
    addAttribute(HTML_ATTR_ANCHOR_DOWNLOAD, value);
    return *this;
}

Anchor& Anchor::setHref(const QUrl &value)
{
    addAttribute(HTML_ATTR_ANCHOR_HREF, value);
    return *this;
}

Anchor& Anchor::setRel(const QUrl &value)
{
    addAttribute(HTML_ATTR_ANCHOR_REL, value);
    return *this;
}

Anchor& Anchor::setTarget(Target value)
{
    addAttribute(HTML_ATTR_ANCHOR_TARGET, Utils::TargetToString(value));
    return *this;
}

}
