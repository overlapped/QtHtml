#include "qhtmldefines.hpp"
#include "qhtmllabel.hpp"

QHtmlLabel::QHtmlLabel(const QString& control, const QString &content) : QHtmlElement(HTML_TAG_LABEL, content)
{
    addAttribute("for", control);
}
