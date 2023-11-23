#ifndef __Q_HTML_FORM__
#define __Q_HTML_FORM__

#include <QDateTime>
#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Form class represents the \<form\> HTML element represents a document section containing
 * interactive controls for submitting information.
 */
class QTHTML_EXPORT Form : public Element
{
public:
    /**
     * \brief Default constructor to create object with \c action and \c method.
     * \param[in] action - The URL that processes the form submission. This attribute is ignored when method="dialog" is set.
     * \param[in] method - The HTTP method to submit the form with.
     */
    explicit Form(const QString& action = QString(), FormMethod method = FormMethod::Get);
};

/**
 * \brief The Input class represent the \<input\> HTML element.
 *
 * The \<input\> HTML element is used to create interactive controls for web-based forms in order to accept
 * data from the user; a wide variety of types of input data and control widgets are available, depending on
 * the device and user agent. The \<input\> element is one of the most powerful and complex in all of HTML due to
 * the sheer number of combinations of input types and attributes.
 *
 * How an \<input\> works varies considerably depending on the value of its \c type attribute, hence the
 * different types are covered in their own separate reference pages. If this attribute is not specified,
 * the default type adopted is \b text.
 */
class QTHTML_EXPORT Input : public Element
{
public:
    enum class InputType
    {
        Button,
        CheckBox,
        Color,
        Date,
        DateTimeLocal,
        Email,
        File,
        Hidden,
        Image,
        Month,
        Number,
        Password,
        Radio,
        Range,
        Reset,
        Search,
        Submit,
        Telephone,
        Text,
        Time,
        Url,
        Week
    };

    /**
     * \brief Default constructor to create object with \c type, \c name and \c value.
     * \param[in] type - the type attribute.
     * \param[in] name - the name of the form control. Submitted with the form as part of a name/value pair.
     * \param[in] value - the initial value of the control.
     * \param[in] content - usually empty.
     */
    explicit Input(InputType type = InputType::Text, const QString& name = QString(), const QVariant& value = QVariant(), const QString& content = QString());

    Input& setName(const QString& name);
    Input& setValue(const QVariant& value);
    Input& setDisabled(bool value);
    Input& setForm(const QString& name);
};

class QTHTML_EXPORT InputButton : public Input
{
public:
    explicit InputButton(const QString& value = QString());
};

class QTHTML_EXPORT InputCheckBox : public Input
{
public:
    explicit InputCheckBox(const QString& value = QString(), bool isChecked = true);
    InputCheckBox& setChecked(bool value = true);
};

class QTHTML_EXPORT InputColor : public Input
{
public:
    explicit InputColor(const QString& value = QString());
};

class QTHTML_EXPORT InputDate : public Input
{
public:
    explicit InputDate(const QDate& date = QDate::currentDate(), const QDate& min = QDate::currentDate(), const QDate& max = QDate::currentDate(), unsigned int step = 1);

    InputDate& setMin(const QDate& date = QDate::currentDate());
    InputDate& setMax(const QDate& date = QDate::currentDate());
    InputDate& setStep(unsigned int step = 1);
};

class QTHTML_EXPORT InputDateTimeLocal : public Input
{
public:
    explicit InputDateTimeLocal(const QDateTime& dateTime = QDateTime::currentDateTime(),
                                     const QDateTime& min = QDateTime::currentDateTime(),
                                     const QDateTime& max = QDateTime::currentDateTime(),
                                     unsigned int step = 1);

    InputDateTimeLocal& setMin(const QDateTime& dateTime = QDateTime::currentDateTime());
    InputDateTimeLocal& setMax(const QDateTime& dateTime = QDateTime::currentDateTime());
    InputDateTimeLocal& setStep(unsigned int step = 1);
};

/**
 * \brief The QHtmlInputEmail class represents the \b \<input\> elements of type email.
 *
 * The \b \<input\> elements of type email are used to let the user enter and edit an email
 * address, or, if the multiple attribute is specified, a list of email addresses.
 */
class QTHTML_EXPORT InputEmail : public Input
{
public:
    /**
     * \brief Default constructor create the object.
     */
    explicit InputEmail();

    /**
     * \brief Set the email list.
     *
     * The values of the list attribute is the \c id of a \b \<datalist\> element located
     * in the same document. The \b \<datalist\> provides a list of predefined values to suggest
     * to the user for this input. Any values in the list that are not compatible with the type
     * are not included in the suggested options. The values provided are suggestions, not
     * requirements: users can select from this predefined list or provide a different value.
     *
     * \param[in] values - list of email addresses.
     * \return this object.
     */
    InputEmail& setList(const QString& values);

    /**
     * \brief Set the maximum string length.
     *
     * The maximum string length (measured in UTF-16 code units) that the user can enter
     * into the email input. This must be an integer value of 0 or higher. If no maxlength
     * is specified, or an invalid value is specified, the email input has no maximum length.
     * This value must also be greater than or equal to the value of minlength. The input will
     * fail constraint validation if the length of the text value of the field is greater than
     * maxlength UTF-16 code units long. Constraint validation is only applied when the value is
     * changed by the user.
     *
     * \param[in] value - maximum string length.
     * \return this object.
     */
    InputEmail& setMaxLength(unsigned int value);

    /**
     * \brief Set the minimum string length.
     *
     * The minimum string length (measured in UTF-16 code units) that the user can enter
     * into the email input. This must be a non-negative integer value smaller than or equal to
     * the value specified by maxlength. If no minlength is specified, or an invalid value is
     * specified, the email input has no minimum length. The input will fail constraint validation
     * if the length of the text entered into the field is fewer than minlength UTF-16 code units long.
     * Constraint validation is only applied when the value is changed by the user.
     *
     * \param[in] value - minimum string length.
     * \return this object.
     */
    InputEmail& setMinLength(unsigned int value);

    /**
     * \brief Set the \c multiple attribute.
     *
     * A Boolean attribute which, if present, indicates that the user can enter a list of
     * multiple email addresses, separated by commas and, optionally, whitespace characters. See
     * <a href="https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input/email#allowing_multiple_email_addresses">Allowing
     * multiple email addresses</a> for an example, or HTML attribute: \c multiple for more details.
     *
     * \param[in] value - the value.
     * \return this object.
     *
     * \note Normally, if you specify the \c required attribute, the user must enter a valid
     * email address for the field to be considered valid. However, if you add the \c multiple attribute,
     * a list of zero email addresses (an empty string, or one which is entirely whitespace) is a
     * valid value. In other words, the user does not have to enter even one email address when \c multiple
     * is specified, regardless of the value of \c required.
     */
    InputEmail& setMultiple(bool value);

    /**
     * \brief Set pattern aatribute for input value.
     *
     * The \c pattern attribute, when specified, is a regular expression that the input's value must match for
     * the value to pass constraint validation. It must be a valid JavaScript regular expression, as used by the \b RegExp
     * type, and as documented in our guide on regular expressions; the 'u' flag is specified when compiling the regular
     * expression so that the pattern is treated as a sequence of Unicode code points, instead of as ASCII.
     * No forward slashes should be specified around the pattern text.
     *
     * \param[in] pattern - the pattern string.
     * \return this object.
     *
     * \note Use the title attribute to specify text that most browsers will display as a tooltip to explain what the
     * requirements are to match the pattern. You should also include other explanatory text nearby.
     */
    InputEmail& setPattern(const QString& pattern);

    /**
     * \brief Set placeholder attribute.
     *
     * The \c placeholder attribute is a string that provides a brief hint to the user as to what kind of information
     * is expected in the field. It should be a word or short phrase that demonstrates the expected type of data,
     * rather than an explanatory message. The text must not include carriage returns or line feeds.
     *
     * \param[in] text - the text string.
     * \return this object.
     */
    InputEmail& setPlaceholder(const QString& text);

    /**
     * \brief Set readonly attribute.
     *
     * A Boolean attribute which, if present, means this field cannot be edited by the user. Its value can, however,
     * still be changed by JavaScript code directly setting the HTMLInputElement value property.
     *
     * \param[in] value - \b true if read only, otherwise \b false.
     * \return this object.
     */
    InputEmail& setReadOnly(bool value);

    /**
     * \brief Set required attribute.
     * \param value - \b true if required, otherwise \b false.
     * \return this object.
     */
    InputEmail& setRequired(bool value);

    /**
     * \brief Set size attribute.
     *
     * The \c size attribute is a numeric value indicating how many characters wide the input field should be.
     * The value must be a number greater than zero, and the default value is 20. Since character widths vary,
     * this may or may not be exact and should not be relied upon to be so; the resulting input may be narrower or
     * wider than the specified number of characters, depending on the characters and the font (font settings in use).
     *
     * \param[in] size - the size number value.
     * \return this object.
     */
    InputEmail& setSize(unsigned int size = 20);
};

class QTHTML_EXPORT InputFile : public Input
{
public:
    explicit InputFile();
};

class QTHTML_EXPORT InputHidden : public Input
{
public:
    explicit InputHidden();
};

class QTHTML_EXPORT InputImage : public Input
{
public:
    explicit InputImage();
};

class QTHTML_EXPORT InputMonth : public Input
{
public:
    explicit InputMonth();
};

class QTHTML_EXPORT InputNumber : public Input
{
public:
    explicit InputNumber();
};

class QTHTML_EXPORT InputPassword : public Input
{
public:
    explicit InputPassword();
};

class QTHTML_EXPORT InputRadio : public Input
{
public:
    explicit InputRadio();
};

class QTHTML_EXPORT InputRange : public Input
{
public:
    explicit InputRange();
};

class QTHTML_EXPORT InputReset : public Input
{
public:
    explicit InputReset();
};

class QTHTML_EXPORT InputSearch : public Input
{
public:
    explicit InputSearch();
};

class QTHTML_EXPORT InputSubmit : public Input
{
public:
    explicit InputSubmit();
};

class QTHTML_EXPORT InputTelephone : public Input
{
public:
    explicit InputTelephone();
};

class QTHTML_EXPORT InputText : public Input
{
public:
    explicit InputText();
};

class QTHTML_EXPORT InputTime : public Input
{
public:
    explicit InputTime();
};

class QTHTML_EXPORT InputUrl : public Input
{
public:
    explicit InputUrl();
};

class QTHTML_EXPORT InputWeek : public Input
{
public:
    explicit InputWeek();
};

class QTHTML_EXPORT Option : public Element
{
public:
};

class QTHTML_EXPORT OptionGroup : public Element
{
public:
};

class QTHTML_EXPORT DataList : public Element
{
public:
};

class QTHTML_EXPORT Select : public Element
{
public:
};

}

#endif // #ifndef __Q_HTML_FORM__
