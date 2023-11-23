#include "qhtmldefines.hpp"
#include "qhtmltime.hpp"

namespace QtHtml {

Time::Time(const QString &dateTime, const QString &content) : Element(HTML_TAG_TIME, content)
{
    addAttribute("datetime", dateTime);
}

Time &Time::setDateTime(const QString &dateTime)
{
    addAttribute("datetime", dateTime);
    return *this;
}

}
