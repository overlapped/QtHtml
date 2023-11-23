#ifndef __Q_HTML_TIME__
#define __Q_HTML_TIME__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Time class represents \c time HTML element.
 *
 * The \<time\> HTML element represents a specific period in time. It may include the datetime attribute
 * to translate dates into machine-readable format, allowing for better search engine results or custom
 * features such as reminders.
 *
 * It may represent one of the following
 *   - A time on a 24-hour clock.
 *   - A precise date in the Gregorian calendar (with optional time and timezone information).
 *   - A valid time duration
 */
class QTHTML_EXPORT Time : public Element
{
public:
    explicit Time(const QString& dateTime, const QString &content);

    /**
     * \brief Set \c datetime attribute.
     *
     * This attribute indicates the \b time and/or \b date of the element and must be in one of the formats.
     *
     * \param[in] dateTime - the valid date/time text string.
     * \return this object.
     */
    Time& setDateTime(const QString& dateTime);
};

}

#endif // #ifndef __Q_HTML_TIME__
