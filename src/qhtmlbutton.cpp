#include "qhtmldefines.hpp"
#include "qhtmlbutton.hpp"
#include "qhtmlutils.hpp"

QString FormMethodToString(QHtmlButton::FormMethod value) {
    QString result;

    switch (value) {
        case QHtmlButton::FormMethod::Post: result = "post"; break;
        case QHtmlButton::FormMethod::Get: result = "get"; break;
        case QHtmlButton::FormMethod::Dialog: result = "dialog"; break;
        default:
            break;
    }

    return result;
}

QString PopOverTargetActionToString(QHtmlButton::PopOverTargetAction value) {
    QString result;

    switch (value) {
        case QHtmlButton::PopOverTargetAction::Hide: result = "hide"; break;
        case QHtmlButton::PopOverTargetAction::Show: result = "show"; break;
        case QHtmlButton::PopOverTargetAction::Toggle: result = "toggle"; break;
        default:
            break;
    }

    return result;
}

QString TypeToString(QHtmlButton::Type value) {
    QString result;

    switch (value) {
        case QHtmlButton::Type::Submit: result = "submit"; break;
        case QHtmlButton::Type::Reset:  result = "reset"; break;
        case QHtmlButton::Type::Button: result = "button"; break;
        default:
            break;
    }

    return result;
}

QHtmlButton::QHtmlButton(const QString &content) : QHtmlElement(HTML_TAG_BUTTON, content)
{

}

QHtmlButton &QHtmlButton::setAutoFocus(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_AUTOFOCUS, value ? "true" : "false");
    return *this;
}

QHtmlButton &QHtmlButton::setDisabled(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_DISABLED, value ? "true" : "false");
    return *this;
}

QHtmlButton &QHtmlButton::setForm(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM, value);
    return *this;
}

QHtmlButton &QHtmlButton::setFormAction(const QUrl &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_ACTION, value);
    return *this;
}

QHtmlButton &QHtmlButton::setFormMethod(FormMethod value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_METHOD, FormMethodToString(value));
    return *this;
}

QHtmlButton &QHtmlButton::setFormNoValidate(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_NO_VALIDATE, value ? "true" : "false");
    return *this;
}

QHtmlButton &QHtmlButton::setFormTarget(Target value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_TARGET, QHtmlUtils::TargetToString(value));
    return *this;
}

QHtmlButton &QHtmlButton::setName(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_NAME, value);
    return *this;
}

QHtmlButton &QHtmlButton::setPopOverTarget(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_POPOVERTARGET, value);
    return *this;
}

QHtmlButton &QHtmlButton::setPopOverTargetAction(PopOverTargetAction value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_POPOVERTARGHETACTION, PopOverTargetActionToString(value));
    return *this;
}

QHtmlButton &QHtmlButton::setType(Type value)
{
    addAttribute(HTML_ATTR_BUTTON_TYPE, TypeToString(value));
    return *this;
}

QHtmlButton &QHtmlButton::setValue(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_VALUE, value);
    return *this;
}

