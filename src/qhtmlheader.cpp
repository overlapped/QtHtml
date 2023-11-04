#include "qhtmldefines.hpp"
#include "qhtmlheader.hpp"

QHtmlHeader::QHtmlHeader() : QHtmlElement(HTML_TAG_HEADER, QVariant())
{

}

QHtmlHeader1::QHtmlHeader1(const QString &content) : QHtmlElement(HTML_TAG_HEADER1, content)
{

}

QHtmlHeader2::QHtmlHeader2(const QString &content) : QHtmlElement(HTML_TAG_HEADER2, content)
{

}

QHtmlHeader3::QHtmlHeader3(const QString &content) : QHtmlElement(HTML_TAG_HEADER3, content)
{

}

QHtmlHeader4::QHtmlHeader4(const QString &content) : QHtmlElement(HTML_TAG_HEADER4, content)
{

}

QHtmlHeader5::QHtmlHeader5(const QString &content) : QHtmlElement(HTML_TAG_HEADER5, content)
{

}

QHtmlHeader6::QHtmlHeader6(const QString &content) : QHtmlElement(HTML_TAG_HEADER6, content)
{

}
