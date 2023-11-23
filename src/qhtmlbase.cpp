#include "qhtmldefines.hpp"
#include "qhtmlbase.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

Base::Base(const QString &url, Target value) : Element(HTML_TAG_BASE, QVariant())
{
    addAttribute(HTML_ATTR_BASE_HREF, url);
    addAttribute(HTML_ATTR_BASE_TARGET, Utils::TargetToString(value));
    selfClosed_ = true;
}

}
