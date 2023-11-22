#include "qhtmldefines.hpp"
#include "qhtmlform.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

QHtmlForm::QHtmlForm(const QString &action, FormMethod method) : QHtmlElement(HTML_TAG_FORM, QVariant())
{
    if (!action.isEmpty())
    {
        addAttribute("action", action);
    }

    addAttribute("method", QHtmlUtils::FormMethodToString(method));
}

QString InputTypeToString(QHtmlInput::InputType value)
{
    QString result;

    switch (value) {
        case QHtmlInput::InputType::Button:        result = "button"; break;
        case QHtmlInput::InputType::CheckBox:      result = "checkbox"; break;
        case QHtmlInput::InputType::Color :        result = "color"; break;
        case QHtmlInput::InputType::Date:          result = "date"; break;
        case QHtmlInput::InputType::DateTimeLocal: result = "datetime-local"; break;
        case QHtmlInput::InputType::Email:         result = "email"; break;
        case QHtmlInput::InputType::File:          result = "file"; break;
        case QHtmlInput::InputType::Hidden:        result = "hidden"; break;
        case QHtmlInput::InputType::Image:         result = "image"; break;
        case QHtmlInput::InputType::Month:         result = "month"; break;
        case QHtmlInput::InputType::Number:        result = "number"; break;
        case QHtmlInput::InputType::Password:      result = "password"; break;
        case QHtmlInput::InputType::Radio:         result = "radio"; break;
        case QHtmlInput::InputType::Range:         result = "range"; break;
        case QHtmlInput::InputType::Reset:         result = "reset"; break;
        case QHtmlInput::InputType::Search:        result = "search"; break;
        case QHtmlInput::InputType::Submit:        result = "submit"; break;
        case QHtmlInput::InputType::Telephone:     result = "tel"; break;
        case QHtmlInput::InputType::Text:          result = "text"; break;
        case QHtmlInput::InputType::Time:          result = "time"; break;
        case QHtmlInput::InputType::Url:           result = "url"; break;
        case QHtmlInput::InputType::Week:          result = "week"; break;
        default:
            break;
    }

    return result;
}

QHtmlInput::QHtmlInput(InputType type, const QString &name, const QVariant &value, const QString &content) : QHtmlElement(HTML_TAG_INPUT, content)
{
    addAttribute("type", InputTypeToString(type));
    if (!name.isEmpty())
    {
        addAttribute("name", name);
    }
    if (!value.isNull() && !value.toString().isEmpty())
    {
        addAttribute("value", value);
    }
    selfClosed_ = true;
}

QHtmlInput &QHtmlInput::setName(const QString &name)
{
    addAttribute("name", name);
    return *this;
}

QHtmlInput &QHtmlInput::setValue(const QVariant &value)
{
    addAttribute("value", value);
    return *this;
}

QHtmlInput &QHtmlInput::setDisabled(bool value)
{
    addAttribute("disabled", value);
    return *this;
}

QHtmlInput &QHtmlInput::setForm(const QString &name)
{
    addAttribute("form", name);
    return *this;
}

QHtmlInputButton::QHtmlInputButton(const QString &value) : QHtmlInput(QHtmlInput::InputType::Button, QString(), value, QString())
{

}

QHtmlInputCheckBox::QHtmlInputCheckBox(const QString &value, bool isChecked) : QHtmlInput(QHtmlInput::InputType::CheckBox, QString(), value, QString())
{
    if (isChecked)
    {
        addAttribute("checked", "");
    }
}

QHtmlInputCheckBox& QHtmlInputCheckBox::setChecked(bool value)
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

QHtmlInputColor::QHtmlInputColor(const QString &value) : QHtmlInput(QHtmlInput::InputType::Color, QString(), value, QString())
{
    if (value.length() > 7 || !value.startsWith('#'))
    {
        setValue("#000000");
    }
}

QHtmlInputDate::QHtmlInputDate(const QDate &date, const QDate &min, const QDate &max, unsigned int step)
    : QHtmlInput(QHtmlInput::InputType::Date, QString(), date, QString())
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

QHtmlInputDate &QHtmlInputDate::setMin(const QDate &date)
{
    if (!date.isNull() && date.isValid())
    {
        addAttribute("date", date.toString("yyyy-MM-dd"));
    }
    return *this;
}

QHtmlInputDate &QHtmlInputDate::setMax(const QDate &date)
{
    if (!date.isNull() && date.isValid())
    {
        addAttribute("date", date.toString("yyyy-MM-dd"));
    }
    return *this;
}

QHtmlInputDate &QHtmlInputDate::setStep(unsigned int step)
{
    if (step > 1)
    {
        addAttribute("step", step);
    }
    return *this;
}

QHtmlInputDateTimeLocal::QHtmlInputDateTimeLocal(const QDateTime &dateTime, const QDateTime &min, const QDateTime &max, unsigned int step)
    : QHtmlInput(QHtmlInput::InputType::DateTimeLocal, QString(), dateTime, QString())
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

QHtmlInputDateTimeLocal &QHtmlInputDateTimeLocal::setMin(const QDateTime &dateTime)
{
    if (!dateTime.isNull() && dateTime.isValid())
    {
        addAttribute("date", dateTime.toString("yyyy-MM-dd hh:mm"));
    }
    return *this;
}

QHtmlInputDateTimeLocal &QHtmlInputDateTimeLocal::setMax(const QDateTime &dateTime)
{
    if (!dateTime.isNull() && dateTime.isValid())
    {
        addAttribute("date", dateTime.toString("yyyy-MM-dd hh:mm"));
    }
    return *this;
}

QHtmlInputDateTimeLocal &QHtmlInputDateTimeLocal::setStep(unsigned int step)
{
    if (step > 1)
    {
        addAttribute("step", step);
    }
    return *this;
}

}
