#ifndef __Q_HTML_DEFINES_BS5__
#define __Q_HTML_DEFINES_BS5__

#include <QtCore/QMap>

/**
 * HTML Extended attributes
 */

#define HTML_ATTR_ARIA_LABEL            "aria-label"

/**
 * Bootstrap5 button classes
 */

#define BS5_BUTTON_CLASS_BASE           "btn"
#define BS5_BUTTON_CLASS_PRIMARY        "btn-primary"
#define BS5_BUTTON_CLASS_SECONDARY      "btn-secondary"
#define BS5_BUTTON_CLASS_SUCCESS        "btn-success"
#define BS5_BUTTON_CLASS_DANGER         "btn-danger"
#define BS5_BUTTON_CLASS_WARNING        "btn-warning"
#define BS5_BUTTON_CLASS_INFO           "btn-info"
#define BS5_BUTTON_CLASS_LIGHT          "btn-light"
#define BS5_BUTTON_CLASS_DARK           "btn-dark"
#define BS5_BUTTON_CLASS_LINK           "btn-link"
#define BS5_BUTTON_CLASS_CLOSE          "btn-close"

#define BS5_BUTTON_CLASS_OUTLINE_PRIMARY        "btn-outline-primary"
#define BS5_BUTTON_CLASS_OUTLINE_SECONDARY      "btn-outline-secondary"
#define BS5_BUTTON_CLASS_OUTLINE_SUCCESS        "btn-outline-success"
#define BS5_BUTTON_CLASS_OUTLINE_DANGER         "btn-outline-danger"
#define BS5_BUTTON_CLASS_OUTLINE_WARNING        "btn-outline-warning"
#define BS5_BUTTON_CLASS_OUTLINE_INFO           "btn-outline-info"
#define BS5_BUTTON_CLASS_OUTLINE_LIGHT          "btn-outline-light"
#define BS5_BUTTON_CLASS_OUTLINE_DARK           "btn-outline-dark"

#define BS5_BUTTON_CLASS_TEXT_NO_WRAP   "nowrap"

#define BS5_BUTTON_ATTR_DISABLED        "disabled"

#define BS5_BUTTON_CLASS_SIZE_LARGE     "btn-lg"
#define BS5_BUTTON_CLASS_SIZE_SMALL     "btn-sm"

/**
 * Bootstrap5 alert classes
 */

#define BS5_ALERT_CLASS_BASE           "alert"
#define BS5_ALERT_CLASS_PRIMARY        "alert-primary"
#define BS5_ALERT_CLASS_SECONDARY      "alert-secondary"
#define BS5_ALERT_CLASS_SUCCESS        "alert-success"
#define BS5_ALERT_CLASS_DANGER         "alert-danger"
#define BS5_ALERT_CLASS_WARNING        "alert-warning"
#define BS5_ALERT_CLASS_INFO           "alert-info"
#define BS5_ALERT_CLASS_LIGHT          "alert-light"
#define BS5_ALERT_CLASS_DARK           "alert-dark"
#define BS5_ALERT_CLASS_LINK           "alert-link"

typedef QMap<QString, QString> BS5ClassStyle;

#endif // #ifndef __Q_HTML_DEFINES_BS5__
