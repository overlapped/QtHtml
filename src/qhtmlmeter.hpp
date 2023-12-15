#ifndef __Q_HTML_METER__
#define __Q_HTML_METER__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Meter class represents \b meter HTML element.
 *
 * The \<meter\> HTML element represents either a scalar value within a known range or a fractional value.
 */
class QTHTML_EXPORT Meter : public Element
{
public:
    Meter(unsigned int value, unsigned int min = 0, unsigned int max = 1, const QString &content = QString());

    /**
     * \brief Set value attribute.
     *
     * The current numeric value. This must be between the minimum and maximum values
     * (min attribute and max attribute) if they are specified. If unspecified or malformed,
     * the value is 0. If specified, but not within the range given by the min attribute
     * and max attribute, the value is equal to the nearest end of the range.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setValue(unsigned int value);

    /**
     * \brief Set low attribute.
     *
     * The lower numeric bound of the measured range. This must be less than the maximum value
     * (max attribute), if specified. If unspecified, the minimum value is 0.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setLow(unsigned int value = 0);

    /**
     * \brief Set high attribute.
     *
     * The lower numeric bound of the high end of the measured range. This must be less than
     * the maximum value (max attribute), and it also must be greater than the low value and
     * minimum value (low attribute and min attribute, respectively), if any are specified.
     * If unspecified, or if greater than the maximum value, the high value is equal to the
     * maximum value.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setHigh(unsigned int value = 1);

    /**
     * \brief Set optimum attribute.
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setOptimum(unsigned int value);

    /**
     * \brief Set min attribute.
     *
     * The lower numeric bound of the measured range. This must be less than the maximum value
     * (max attribute), if specified. If unspecified, the minimum value is 0.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setMin(unsigned int value);

    /**
     * \brief Set max attribute.
     *
     * The upper numeric bound of the measured range. This must be greater than the minimum value
     * (min attribute), if specified. If unspecified, the maximum value is 1.
     *
     * \param[in] value - the value.
     * \return this object.
     */
    Meter& setMax(unsigned int value);

    Meter& setForm(const QString& formId);
};

}

#endif // #ifndef __Q_HTML_METER__
