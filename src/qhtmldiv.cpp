#include "qhtmldefines.hpp"
#include "qhtmldiv.hpp"

namespace QtHtml {

Div::Div() : Element(HTML_TAG_DIVISION, QVariant())
{

}

Div::Div(const QString &classStyle) : Element(HTML_TAG_DIVISION, QVariant())
{
    if (!classStyle.isEmpty()) {
	setClass(classStyle);
    }
}

}
