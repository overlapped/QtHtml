#include "qhtmldefines.hpp"
#include "qhtmllinebreak.hpp"

namespace QtHtml {

QHtmlLineBreak::QHtmlLineBreak() : QHtmlElement(HTML_TAG_LINEBREAK, QVariant())
{
    selfClosed_ = true;
}

}
