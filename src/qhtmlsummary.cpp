#include "qhtmldefines.hpp"
#include "qhtmlsummary.hpp"

namespace QtHtml {

QHtmlDetails::QHtmlDetails(const QString &content) : QHtmlElement(HTML_TAG_DETAILS, content)
{
    if (!content.isEmpty())
    {
        addAttribute("open", content);
    }
}

QHtmlDetails &QHtmlDetails::setOpen(const QString &content)
{
    if (!content.isEmpty())
    {
        addAttribute("open", content);
    }

    return *this;
}

QHtmlSummary::QHtmlSummary(const QString &content) : QHtmlElement(HTML_TAG_SUMMARY, content)
{

}

}
