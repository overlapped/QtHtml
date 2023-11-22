#include "qhtmldefines.hpp"
#include "qhtmlmeter.hpp"

namespace QtHtml {

QHtmlMeter::QHtmlMeter(unsigned int value, unsigned int min, unsigned int max, const QString &content) : QHtmlElement(HTML_TAG_METER, content)
{
    Q_ASSERT(value >= min);
    Q_ASSERT(value <= max);
    Q_ASSERT(max > 0);

    addAttribute("value", value);
    addAttribute("min", min);
    addAttribute("max", max);
}

QHtmlMeter &QHtmlMeter::setLow(unsigned int value)
{
    addAttribute("low", value);
    return *this;
}

QHtmlMeter &QHtmlMeter::setHigh(unsigned int value)
{
    addAttribute("high", value);
    return *this;
}

QHtmlMeter &QHtmlMeter::setOptimum(unsigned int value)
{
    addAttribute("optimum", value);
    return *this;
}

QHtmlMeter &QHtmlMeter::setForm(const QString &formId)
{
    addAttribute("form", formId);
    return *this;
}

}
