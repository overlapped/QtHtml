#include "qhtmldefines.hpp"
#include "qhtmldiv.hpp"

QHtmlDiv::QHtmlDiv() : QHtmlElement(HTML_TAG_DIVISION, QVariant())
{

}

QHtmlDiv::QHtmlDiv(const QString &content) : QHtmlElement(HTML_TAG_DIVISION, QVariant())
{
    setClass(content);
}
