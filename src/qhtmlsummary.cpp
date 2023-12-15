#include "qhtmldefines.hpp"
#include "qhtmlsummary.hpp"

namespace QtHtml {

Details::Details(bool isOpened, const QString &content) : Element(HTML_TAG_DETAILS, content)
{
    if (isOpened)
    {
        addAttribute("open", QVariant());
    }
}

Details &Details::setOpened(bool value)
{
    if (value)
    {
        addAttribute("open", QVariant());
    }

    return *this;
}

Summary::Summary(const QString &content) : Element(HTML_TAG_SUMMARY, content)
{

}

}
