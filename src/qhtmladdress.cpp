#include "qhtmldefines.hpp"
#include "qhtmladdress.hpp"

namespace QtHtml {

QHtmlAddress::QHtmlAddress() : QHtmlElement(HTML_TAG_ADDRESS, QVariant())
{

}

QHtmlAddress::QHtmlAddress(const QString &content) : QHtmlElement(HTML_TAG_ADDRESS, content)
{

}

}
