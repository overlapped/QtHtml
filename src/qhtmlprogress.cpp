#include "qhtmldefines.hpp"
#include "qhtmlprogress.hpp"

QHtmlProgress::QHtmlProgress(unsigned int value, unsigned int max, const QString &content) : QHtmlElement(HTML_TAG_PROGRESS, content)
{
    Q_ASSERT(value <= max);
    Q_ASSERT(max > 0);

    addAttribute("value", value);
    addAttribute("max", max);
}

QHtmlProgress &QHtmlProgress::setMax(unsigned int value)
{
    Q_ASSERT(value > 0);

    addAttribute("max", value);
    return *this;
}
