#include "qhtmldefines.hpp"
#include "qhtmllinebreak.hpp"

namespace QtHtml {

LineBreak::LineBreak() : Element(HTML_TAG_LINEBREAK, QVariant())
{
    selfClosed_ = true;
}

}
