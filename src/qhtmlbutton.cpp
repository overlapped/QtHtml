#include "qhtmldefines.hpp"
#include "qhtmlbutton.hpp"
#include "qhtmlutils.hpp"

namespace QtHtml {

QString PopOverTargetActionToString(Button::PopOverTargetAction value) {
    QString result;

    switch (value) {
        case Button::PopOverTargetAction::Hide: result = "hide"; break;
        case Button::PopOverTargetAction::Show: result = "show"; break;
        case Button::PopOverTargetAction::Toggle: result = "toggle"; break;
        default:
            break;
    }

    return result;
}

QString TypeToString(Button::Type value) {
    QString result;

    switch (value) {
        case Button::Type::Submit: result = "submit"; break;
        case Button::Type::Reset:  result = "reset"; break;
        case Button::Type::Button: result = "button"; break;
        default:
            break;
    }

    return result;
}

Button::Button(const QString &content) : Element(HTML_TAG_BUTTON, content)
{

}

Button &Button::setAutoFocus(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_AUTOFOCUS, value ? "true" : "false");
    return *this;
}

Button &Button::setDisabled(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_DISABLED, value ? "true" : "false");
    return *this;
}

Button &Button::setForm(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM, value);
    return *this;
}

Button &Button::setFormAction(const QUrl &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_ACTION, value);
    return *this;
}

Button &Button::setFormMethod(FormMethod value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_METHOD, Utils::FormMethodToString(value));
    return *this;
}

Button &Button::setFormNoValidate(bool value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_NO_VALIDATE, value ? "true" : "false");
    return *this;
}

Button &Button::setFormTarget(Target value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_TARGET, Utils::TargetToString(value));
    return *this;
}

Button &Button::setName(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_NAME, value);
    return *this;
}

Button &Button::setPopOverTarget(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_POPOVERTARGET, value);
    return *this;
}

Button &Button::setPopOverTargetAction(PopOverTargetAction value)
{
    addAttribute(HTML_ATTR_BUTTON_FORM_POPOVERTARGHETACTION, PopOverTargetActionToString(value));
    return *this;
}

Button &Button::setType(Type value)
{
    addAttribute(HTML_ATTR_BUTTON_TYPE, TypeToString(value));
    return *this;
}

Button &Button::setValue(const QString &value)
{
    addAttribute(HTML_ATTR_BUTTON_VALUE, value);
    return *this;
}

}
