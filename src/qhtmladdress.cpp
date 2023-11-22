#include "qhtmldefines.hpp"
#include "qhtmladdress.hpp"

namespace QtHtml {

Address::Address() : QHtmlElement(HTML_TAG_ADDRESS, QVariant())
{

}

Address::Address(const QString &content) : QHtmlElement(HTML_TAG_ADDRESS, content)
{

}

}
