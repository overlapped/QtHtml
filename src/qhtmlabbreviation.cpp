#include "qhtmldefines.hpp"
#include "qhtmlabbreviation.hpp"

namespace QtHtml {

Abbreviation::Abbreviation() : Element(HTML_TAG_ABBREVIATION, QVariant())
{

}

Abbreviation::Abbreviation(const QString &content) : Element(HTML_TAG_ABBREVIATION, content)
{

}

}
