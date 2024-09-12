#include "qhtmlalert_bs5.hpp"

namespace QtHtml { namespace Bootstrap5 {

QString AlertTypeToString(AlertBs5::AlertType value) {
    QString result;

    switch (value) {
        case AlertBs5::AlertType::Primary:   result = BS5_ALERT_CLASS_PRIMARY;   break;
        case AlertBs5::AlertType::Secondary: result = BS5_ALERT_CLASS_SECONDARY; break;
        case AlertBs5::AlertType::Success:   result = BS5_ALERT_CLASS_SUCCESS;   break;
        case AlertBs5::AlertType::Danger:    result = BS5_ALERT_CLASS_DANGER;    break;
        case AlertBs5::AlertType::Warning:   result = BS5_ALERT_CLASS_WARNING;   break;
        case AlertBs5::AlertType::Info:      result = BS5_ALERT_CLASS_INFO;      break;
        case AlertBs5::AlertType::Light:     result = BS5_ALERT_CLASS_LIGHT;     break;
        case AlertBs5::AlertType::Dark:      result = BS5_ALERT_CLASS_DARK;      break;
        default:
            break;
    }

    return result;
}

AlertBs5::AlertBs5(AlertType type, const QString &content) : Div(content)
{
    addAttribute("role", "alert");
    classStyleBs5_.insert("base", BS5_ALERT_CLASS_BASE);
    classStyleBs5_.insert("type", AlertTypeToString(type));
    setClass(updateClassStyle());
}

AlertBs5 &AlertBs5::setType(AlertType type)
{
    classStyleBs5_.insert("type", AlertTypeToString(type));
    setClass(updateClassStyle());

    return *this;
}

QString AlertBs5::updateClassStyle()
{
    QStringList styles(classStyleBs5_.values());
    return styles.join(" ");
}

}}
