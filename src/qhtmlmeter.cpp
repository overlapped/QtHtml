#include "qhtmldefines.hpp"
#include "qhtmlmeter.hpp"

namespace QtHtml {

Meter::Meter(unsigned int value, unsigned int min, unsigned int max, const QString &content) : Element(HTML_TAG_METER, content)
{
    Q_ASSERT(value >= min);
    Q_ASSERT(value <= max);
    Q_ASSERT(max > 0);

    addAttribute("value", value);
    addAttribute("min", min);
    addAttribute("max", max);
}

Meter &Meter::setLow(unsigned int value)
{
    addAttribute("low", value);
    return *this;
}

Meter &Meter::setHigh(unsigned int value)
{
    addAttribute("high", value);
    return *this;
}

Meter &Meter::setOptimum(unsigned int value)
{
    addAttribute("optimum", value);
    return *this;
}

Meter &Meter::setForm(const QString &formId)
{
    addAttribute("form", formId);
    return *this;
}

}
