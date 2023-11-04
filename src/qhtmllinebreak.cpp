#include "qhtmldefines.hpp"
#include "qhtmllinebreak.hpp"

QHtmlLineBreak::QHtmlLineBreak() : QHtmlElement(HTML_TAG_LINEBREAK, QVariant())
{
    selfClosed_ = true;
}

