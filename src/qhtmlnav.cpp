#include "qhtmldefines.hpp"
#include "qhtmlnav.hpp"

QHtmlNav::QHtmlNav() : QHtmlElement(HTML_TAG_NAVIGATION, QVariant())
{

}

QHtmlNav::QHtmlNav(const QString& content) : QHtmlElement(HTML_TAG_NAVIGATION, QVariant())
{
    setClass(content);
}
