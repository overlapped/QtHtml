#include "qhtmldefines.hpp"
#include "qhtmlstyle.hpp"

namespace QtHtml {

Style::Style() : Element(HTML_TAG_STYLE, QVariant())
{

}

Style::Style(const QString &content) : Element(HTML_TAG_STYLE, content)
{

}

}
