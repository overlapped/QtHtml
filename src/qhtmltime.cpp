#include "qhtmldefines.hpp"
#include "qhtmltime.hpp"

namespace QtHtml {

QHtmlTime::QHtmlTime(const QString &datetime, const QString &content) : QHtmlElement(HTML_TAG_TIME, content)
{
    addAttribute("datetime", datetime);
}

}
