#include "qhtmldefines.hpp"
#include "qhtmlnav.hpp"

namespace QtHtml {

Nav::Nav() : Element(HTML_TAG_NAVIGATION, QVariant())
{

}

Nav::Nav(const QString& content) : Element(HTML_TAG_NAVIGATION, QVariant())
{
    setClass(content);
}

}
