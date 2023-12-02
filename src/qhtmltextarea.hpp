#ifndef __Q_HTML_TEXTAREA__
#define __Q_HTML_TEXTAREA__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The TextArea class represents \b textarea HTML element.
 *
 * The \<textarea\> HTML element represents a multi-line plain-text editing control, useful when you want
 * to allow users to enter a sizeable amount of free-form text, for example a comment on a review or feedback form.
 */
class QTHTML_EXPORT TextArea : public Element
{
public:
    enum class WrapMode
    {
        Hard,
        Soft
    };

    explicit TextArea(const QString& name, const QString &content = QString(), unsigned int rows = 2, unsigned int cols = 20);

    /**
     * \brief Set \b autocomplete attribute.
     *
     * This attribute indicates whether the value of the control can be automatically completed by the browser.
     * Possible values are
     * - \b off: The user must explicitly enter a value into this field for every use, or the document provides
     *   its own auto-completion method; the browser does not automatically complete the entry.
     * - \b on: The browser can automatically complete the value based on values that the user has entered
     *   during previous uses.
     * \param[in] isOn - \b true if is \c on, otherwise \b false.
     * \return this object.
     */
    TextArea& setAutoComplete(bool value = true);

    /**
     * \brief Set autofocus attribute.
     *
     * This Boolean attribute lets you specify that a form control should have input focus when the page loads.
     * Only one form-associated element in a document can have this attribute specified.
     *
     * \param[in] isOn
     * \return this object.
     */
    TextArea& setAutoFocus(bool value = true);

    /**
     * \brief Set rows attribute.
     *
     * The number of visible text lines for the control. If it is specified, it must be a positive integer.
     * If it is not specified, the default value is 2.
     *
     * \param[in] rows - the rows value.
     * \return this object.
     */
    TextArea& setRows(unsigned int rows = 2);

    /**
     * \brief Set columns attribute.
     *
     * The visible width of the text control, in average character widths. If it is specified, it must be
     * a positive integer. If it is not specified, the default value is \c 20.
     *
     * \param[in] cols - the columns value.
     * \return this object.
     */
    TextArea& setColumns(unsigned int cols = 20);

    /**
     * \brief setDisabled
     * \param[in] value -
     * \return this object.
     */
    TextArea& setDisabled(bool value = true);

    /**
     * \brief setForm
     * \param formId
     * \return this object.
     */
    TextArea& setForm(const QString& formId);
    TextArea& setMinLength(unsigned int len = 1);
    TextArea& setMaxLength(unsigned int len = 120);
    TextArea& setPlaceHolder(const QString& value);
    TextArea& setReadOnly(bool value = true);
    TextArea& setRequired(bool value = true);
    TextArea& setWrapMode(WrapMode value);
};

}

#endif // #ifndef __Q_HTML_TEXTAREA__
