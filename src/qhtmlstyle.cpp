#include "qhtmldefines.hpp"
#include "qhtmlstyle.hpp"

namespace QtHtml {

QHtmlStyle::QHtmlStyle() : QHtmlElement(HTML_TAG_STYLE, QVariant())
{

}

QHtmlStyle::QHtmlStyle(const QString &content) : QHtmlElement(HTML_TAG_STYLE, content)
{

}

}
