#include "qhtmldefines.hpp"
#include "qhtmlbase.hpp"
#include "qhtmlutils.hpp"

QHtmlBase::QHtmlBase(const QString &url, Target value) : QHtmlElement(HTML_TAG_BASE, QVariant())
{
    addAttribute(HTML_ATTR_BASE_HREF, url);
    addAttribute(HTML_ATTR_BASE_TARGET, QHtmlUtils::TargetToString(value));
    selfClosed_ = true;
}

