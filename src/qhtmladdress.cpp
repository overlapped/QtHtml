#include "qhtmldefines.hpp"
#include "qhtmladdress.hpp"

namespace QtHtml {

Address::Address() : Element(HTML_TAG_ADDRESS, QVariant())
{

}

Address::Address(const QString &content) : Element(HTML_TAG_ADDRESS, content)
{

}

}
