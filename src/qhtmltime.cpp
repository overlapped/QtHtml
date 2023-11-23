#include "qhtmldefines.hpp"
#include "qhtmltime.hpp"

namespace QtHtml {

Time::Time(const QString &datetime, const QString &content) : Element(HTML_TAG_TIME, content)
{
    addAttribute("datetime", datetime);
}

}
