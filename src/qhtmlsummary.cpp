#include "qhtmldefines.hpp"
#include "qhtmlsummary.hpp"

namespace QtHtml {

Details::Details(const QString &content) : Element(HTML_TAG_DETAILS, content)
{
    if (!content.isEmpty())
    {
        addAttribute("open", content);
    }
}

Details &Details::setOpen(const QString &content)
{
    if (!content.isEmpty())
    {
        addAttribute("open", content);
    }

    return *this;
}

Summary::Summary(const QString &content) : Element(HTML_TAG_SUMMARY, content)
{

}

}
