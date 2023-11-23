#include "qhtmldefines.hpp"
#include "qhtmlheader.hpp"

namespace QtHtml {

Header::Header() : Element(HTML_TAG_HEADER, QVariant())
{

}

Header1::Header1(const QString &content) : Element(HTML_TAG_HEADER1, content)
{

}

Header2::Header2(const QString &content) : Element(HTML_TAG_HEADER2, content)
{

}

Header3::Header3(const QString &content) : Element(HTML_TAG_HEADER3, content)
{

}

Header4::Header4(const QString &content) : Element(HTML_TAG_HEADER4, content)
{

}

Header5::Header5(const QString &content) : Element(HTML_TAG_HEADER5, content)
{

}

Header6::Header6(const QString &content) : Element(HTML_TAG_HEADER6, content)
{

}

}
