#include "qhtmldefines.hpp"
#include "qhtmldiv.hpp"

namespace QtHtml {

Div::Div() : Element(HTML_TAG_DIVISION, QVariant())
{

}

Div::Div(const QString &content) : Element(HTML_TAG_DIVISION, QVariant())
{
    setClass(content);
}

}
