#include "qhtmldefines.hpp"
#include "qhtmlprogress.hpp"

namespace QtHtml {

Progress::Progress(unsigned int value, unsigned int max, const QString &content) : Element(HTML_TAG_PROGRESS, content)
{
    Q_ASSERT(value <= max);
    Q_ASSERT(max > 0);

    if (value <= max)
    {
        addAttribute("value", value);
    }
    if (max > 0)
    {
        addAttribute("max", max);
    }
}

Progress &Progress::setMax(unsigned int value)
{
    Q_ASSERT(value > 0);

    if (value > 0)
    {
        addAttribute("max", value);
    }

    return *this;
}

Progress &Progress::setValue(unsigned int value)
{
    Q_ASSERT(value > 0);

    if (value > 0)
    {
        addAttribute("value", value);
    }

    return *this;
}

}
