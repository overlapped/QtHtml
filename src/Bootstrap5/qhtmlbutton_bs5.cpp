#include "qhtmlbutton_bs5.hpp"

namespace QtHtml { namespace Bootstrap5 {

QString ButtonTypeToString(ButtonBs5::ButtonType value) {
    QString result;

    switch (value) {
        case ButtonBs5::ButtonType::Primary:   result = BS5_BUTTON_CLASS_PRIMARY;   break;
        case ButtonBs5::ButtonType::Secondary: result = BS5_BUTTON_CLASS_SECONDARY; break;
        case ButtonBs5::ButtonType::Success:   result = BS5_BUTTON_CLASS_SUCCESS;   break;
        case ButtonBs5::ButtonType::Danger:    result = BS5_BUTTON_CLASS_DANGER;    break;
        case ButtonBs5::ButtonType::Warning:   result = BS5_BUTTON_CLASS_WARNING;   break;
        case ButtonBs5::ButtonType::Info:      result = BS5_BUTTON_CLASS_INFO;      break;
        case ButtonBs5::ButtonType::Light:     result = BS5_BUTTON_CLASS_LIGHT;     break;
        case ButtonBs5::ButtonType::Dark:      result = BS5_BUTTON_CLASS_DARK;      break;
        case ButtonBs5::ButtonType::Link:      result = BS5_BUTTON_CLASS_LINK;      break;
        default:
            break;
    }

    return result;
}

QString ButtonSizeToString(ButtonBs5::ButtonSize value) {
    QString result;

    switch (value) {
        case ButtonBs5::ButtonSize::Large:   result = BS5_BUTTON_CLASS_SIZE_LARGE; break;
        case ButtonBs5::ButtonSize::Small:   result = BS5_BUTTON_CLASS_SIZE_SMALL; break;
        default:
            break;
    }

    return result;
}

CloseButtonBs5::CloseButtonBs5() : Button()
{
    setClass(BS5_BUTTON_CLASS_CLOSE);
    addAttribute(HTML_ATTR_ARIA_LABEL, "Close");
}

ButtonBs5::ButtonBs5(ButtonType type, const QString &content) : Button(Button::Type::Button, content)
{
    classStyleBs5_.insert("base", BS5_BUTTON_CLASS_BASE);
    classStyleBs5_.insert("type", ButtonTypeToString(type));
    setClass(updateClassStyle());
}

ButtonBs5 &ButtonBs5::setType(ButtonType type)
{
    classStyleBs5_.insert("type", ButtonTypeToString(type));
    setClass(updateClassStyle());

    return *this;
}

ButtonBs5 &ButtonBs5::setSize(ButtonSize size)
{
    classStyleBs5_.insert("size", ButtonSizeToString(size));
    setClass(updateClassStyle());

    return *this;
}

ButtonBs5 &ButtonBs5::setToggle(bool value)
{
    return *this;
}

QString ButtonBs5::updateClassStyle()
{
    QStringList styles(classStyleBs5_.values());
    return styles.join(" ");
}

}}
