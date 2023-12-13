#ifndef __Q_HTML_PROGRESS__
#define __Q_HTML_PROGRESS__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * @brief The Progress class
 *
 * The \<progress\> HTML element displays an indicator showing the completion progress of
 * a task, typically displayed as a progress bar.
 * \note Unlike the \<meter\> element, the minimum value is always 0, and the min attribute
 * is not allowed for the \<progress\> element.
 */
class QTHTML_EXPORT Progress : public Element
{
public:
    /**
     * \brief Construct object with \c value, \c maximum value and \c content.
     * \param[in] value - the value.
     * \param[in] max - the maximum value.
     * \param[in] content - the text string.
     */
    explicit Progress(unsigned int value, unsigned int max = 1, const QString &content = QString());

    /**
     * \brief Set the maximum value attribute.
     *
     * This attribute describes how much work the task indicated by the progress element requires.
     * The \c max attribute, if present, must have a value greater than 0 and be a valid floating
     * point number. The default value is \b 1.
     *
     * \param[in] value - the maximum value.
     * \return this object.
     */
    Progress& setMax(unsigned int value = 1);

    /**
     * \brief Set value attribute.
     *
     * This attribute specifies how much of the task that has been completed. It must be a valid
     * floating point number between 0 and max, or between 0 and 1 if max is omitted. If there is
     * no value attribute, the progress bar is indeterminate; this indicates that an activity is
     * ongoing with no indication of how long it is expected to take.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Progress& setValue(unsigned int value = 1);
};

}

#endif // #ifndef __Q_HTML_PROGRESS__
