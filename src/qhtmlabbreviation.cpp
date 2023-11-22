#include "qhtmldefines.hpp"
#include "qhtmlabbreviation.hpp"

namespace QtHtml {

QHtmlAbbreviation::QHtmlAbbreviation() : QHtmlElement(HTML_TAG_ABBREVIATION, QVariant())
{

}

QHtmlAbbreviation::QHtmlAbbreviation(const QString &content) : QHtmlElement(HTML_TAG_ABBREVIATION, content)
{

}

}
