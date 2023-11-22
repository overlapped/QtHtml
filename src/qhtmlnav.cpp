#include "qhtmldefines.hpp"
#include "qhtmlnav.hpp"

namespace QtHtml {

QHtmlNav::QHtmlNav() : QHtmlElement(HTML_TAG_NAVIGATION, QVariant())
{

}

QHtmlNav::QHtmlNav(const QString& content) : QHtmlElement(HTML_TAG_NAVIGATION, QVariant())
{
    setClass(content);
}

}
