#include "qhtmldefines.hpp"
#include "qhtmlform.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

Form::Form(const QString &action, FormMethod method) : Element(HTML_TAG_FORM, QVariant())
{
    if (!action.isEmpty())
    {
        addAttribute("action", action);
    }

    addAttribute("method", Utils::FormMethodToString(method));
}

QString InputTypeToString(Input::InputType value)
{
    QString result;

    switch (value) {
        case Input::InputType::Button:        result = "button"; break;
        case Input::InputType::CheckBox:      result = "checkbox"; break;
        case Input::InputType::Color :        result = "color"; break;
        case Input::InputType::Date:          result = "date"; break;
        case Input::InputType::DateTimeLocal: result = "datetime-local"; break;
        case Input::InputType::Email:         result = "email"; break;
        case Input::InputType::File:          result = "file"; break;
        case Input::InputType::Hidden:        result = "hidden"; break;
        case Input::InputType::Image:         result = "image"; break;
        case Input::InputType::Month:         result = "month"; break;
        case Input::InputType::Number:        result = "number"; break;
        case Input::InputType::Password:      result = "password"; break;
        case Input::InputType::Radio:         result = "radio"; break;
        case Input::InputType::Range:         result = "range"; break;
        case Input::InputType::Reset:         result = "reset"; break;
        case Input::InputType::Search:        result = "search"; break;
        case Input::InputType::Submit:        result = "submit"; break;
        case Input::InputType::Telephone:     result = "tel"; break;
        case Input::InputType::Text:          result = "text"; break;
        case Input::InputType::Time:          result = "time"; break;
        case Input::InputType::Url:           result = "url"; break;
        case Input::InputType::Week:          result = "week"; break;
        default:
            break;
    }

    return result;
}

Input::Input(InputType type, const QString &name, const QVariant &value, const QString &content) : Element(HTML_TAG_INPUT, content)
{
    addAttribute("type", InputTypeToString(type));
    if (!name.isEmpty())
    {
        addAttribute("name", name);
    }
    if (type != InputType::Image && !value.isNull() && !value.toString().isEmpty())
    {
        addAttribute("value", value);
    }
    selfClosed_ = true;
}

Input &Input::setName(const QString &name)
{
    addAttribute("name", name);
    return *this;
}

Input &Input::setValue(const QVariant &value)
{
    if (attribute("type").toString() != "type") {
        addAttribute("value", value);
    }
    return *this;
}

Input &Input::setDisabled(bool value)
{
    addAttribute("disabled", value);
    return *this;
}

Input &Input::setForm(const QString &name)
{
    addAttribute("form", name);
    return *this;
}

InputButton::InputButton(const QString &value) : Input(Input::InputType::Button, QString(), value, QString())
{

}

InputCheckBox::InputCheckBox(const QString &value, bool isChecked) : Input(Input::InputType::CheckBox, QString(), value, QString())
{
    if (isChecked)
    {
        addAttribute("checked", "");
    }
}

InputCheckBox& InputCheckBox::setChecked(bool value)
{
    if (value)
    {
        addAttribute("checked", "");
    }
    else
    {
        removeAttribute("checked");
    }
    return *this;
}

InputColor::InputColor(const QString &value) : Input(Input::InputType::Color, QString(), value, QString())
{
    if (value.length() > 7 || !value.startsWith('#'))
    {
        setValue("#000000");
    }
}

InputDate::InputDate(const QDate &date, const QDate &min, const QDate &max, unsigned int step)
    : Input(Input::InputType::Date, QString(), date, QString())
{
    if (!date.isNull() && date.isValid())
    {
        addAttribute("value", date.toString("yyyy-MM-dd"));
    }
    if (!min.isNull() && min.isValid())
    {
        addAttribute("min", min.toString("yyyy-MM-dd"));
    }
    if (!max.isNull() && max.isValid())
    {
        addAttribute("max", max.toString("yyyy-MM-dd"));
    }
    if (step > 1)
    {
        addAttribute("step", step);
    }
}

InputDate &InputDate::setMin(const QDate &date)
{
    if (!date.isNull() && date.isValid())
    {
        addAttribute("date", date.toString("yyyy-MM-dd"));
    }
    return *this;
}

InputDate &InputDate::setMax(const QDate &date)
{
    if (!date.isNull() && date.isValid())
    {
        addAttribute("date", date.toString("yyyy-MM-dd"));
    }
    return *this;
}

InputDate &InputDate::setStep(unsigned int step)
{
    if (step > 1)
    {
        addAttribute("step", step);
    }
    return *this;
}

InputDateTimeLocal::InputDateTimeLocal(const QDateTime &dateTime, const QDateTime &min, const QDateTime &max, unsigned int step)
    : Input(Input::InputType::DateTimeLocal, QString(), dateTime, QString())
{
    if (!dateTime.isNull() && dateTime.isValid())
    {
        addAttribute("value", dateTime.toString("yyyy-MM-dd hh:mm"));
    }
    if (!min.isNull() && min.isValid())
    {
        addAttribute("min", min.toString("yyyy-MM-dd hh:mm"));
    }
    if (!max.isNull() && max.isValid())
    {
        addAttribute("max", max.toString("yyyy-MM-dd hh:mm"));
    }
    if (step > 1)
    {
        addAttribute("step", step);
    }
}

InputDateTimeLocal &InputDateTimeLocal::setMin(const QDateTime &dateTime)
{
    if (!dateTime.isNull() && dateTime.isValid())
    {
        addAttribute("date", dateTime.toString("yyyy-MM-dd hh:mm"));
    }
    return *this;
}

InputDateTimeLocal &InputDateTimeLocal::setMax(const QDateTime &dateTime)
{
    if (!dateTime.isNull() && dateTime.isValid())
    {
        addAttribute("date", dateTime.toString("yyyy-MM-dd hh:mm"));
    }
    return *this;
}

InputDateTimeLocal &InputDateTimeLocal::setStep(unsigned int step)
{
    if (step > 1)
    {
        addAttribute("step", step);
    }
    return *this;
}

InputEmail::InputEmail() : Input(Input::InputType::Email, QString(), QVariant(), QString())
{

}

InputEmail &InputEmail::setList(const QString &values)
{
    return *this;
}

InputEmail &InputEmail::setMaxLength(unsigned int value)
{
    return *this;
}

InputEmail &InputEmail::setMinLength(unsigned int value)
{
    return *this;
}

InputEmail &InputEmail::setMultiple(bool value)
{
    return *this;
}

InputEmail &InputEmail::setPattern(const QString &pattern)
{
    return *this;
}

InputEmail &InputEmail::setPlaceholder(const QString &text)
{
    return *this;
}

InputEmail &InputEmail::setReadOnly(bool value)
{
    return *this;
}

InputEmail &InputEmail::setRequired(bool value)
{
    return *this;
}

InputEmail &InputEmail::setSize(unsigned int size)
{
    return *this;
}

}
