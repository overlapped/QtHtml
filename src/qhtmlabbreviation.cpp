#include "qhtmldefines.hpp"
#include "qhtmlabbreviation.hpp"

namespace QtHtml {

Abbreviation::Abbreviation() : QHtmlElement(HTML_TAG_ABBREVIATION, QVariant())
{

}

Abbreviation::Abbreviation(const QString &content) : QHtmlElement(HTML_TAG_ABBREVIATION, content)
{

}

}
