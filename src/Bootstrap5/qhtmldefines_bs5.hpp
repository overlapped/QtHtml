#ifndef __Q_HTML_DEFINES_BS5__
#define __Q_HTML_DEFINES_BS5__

#include <QtCore/QMap>

/**
 * HTML Extended attributes
 */

#define HTML_ATTR_ARIA_LABEL            "aria-label"

/**
 * Bootstrap5 container classes
 */

#define BS5_PREFIX_CLASS_SMALL              "sm"
#define BS5_PREFIX_CLASS_MEDIUM             "md"
#define BS5_PREFIX_CLASS_LARGE              "lg"
#define BS5_PREFIX_CLASS_EXTRA_LARGE        "xl"
#define BS5_PREFIX_CLASS_EXTRA_EXTRA_LARGE  "xxl"

#define BS5_CONTAINER_CLASS_BASE        "container"
#define BS5_CONTAINER_CLASS_SMALL       "container-sm"
#define BS5_CONTAINER_CLASS_MEDIUM      "container-md"
#define BS5_CONTAINER_CLASS_LARGE       "container-lg"
#define BS5_CONTAINER_CLASS_XL          "container-xl"
#define BS5_CONTAINER_CLASS_XXL         "container-xxl"
#define BS5_CONTAINER_CLASS_FLUID       "container-fluid"

#define BS5_CONTAINER_CLASS_COLUMN              "col"
#define BS5_CONTAINER_CLASS_ROW                 "row"
#define BS5_CONTAINER_CLASS_ROW_COLUMN          "row-cols"
#define BS5_CONTAINER_CLASS_ROW_COLUMN_AUTO     "row-cols-auto"


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

/**
 * Bootstrap5 utility display classes
 */

#define BS5_DISPLAY_CLASS_NONE                  "d-none"
#define BS5_DISPLAY_CLASS_INLINE                "d-inline"
#define BS5_DISPLAY_CLASS_INLINE_BLOCK          "d-inline-block"
#define BS5_DISPLAY_CLASS_GRID                  "d-grid"
#define BS5_DISPLAY_CLASS_INLINE_GRID           "d-inline-grid"
#define BS5_DISPLAY_CLASS_TABLE                 "d-table"
#define BS5_DISPLAY_CLASS_TABLE_ROW             "d-table-row"
#define BS5_DISPLAY_CLASS_TABLE_CELL            "d-table-cell"
#define BS5_DISPLAY_CLASS_FLEX                  "d-flex"
#define BS5_DISPLAY_CLASS_INLINE_FLEX           "d-inline-flex"

#define BS5_DISPLAY_CLASS_SMALL_NONE                  "d-sm-none"
#define BS5_DISPLAY_CLASS_SMALL_INLINE                "d-sm-inline"
#define BS5_DISPLAY_CLASS_SMALL_INLINE_BLOCK          "d-sm-inline-block"
#define BS5_DISPLAY_CLASS_SMALL_GRID                  "d-sm-grid"
#define BS5_DISPLAY_CLASS_SMALL_INLINE_GRID           "d-sm-inline-grid"
#define BS5_DISPLAY_CLASS_SMALL_TABLE                 "d-sm-table"
#define BS5_DISPLAY_CLASS_SMALL_TABLE_ROW             "d-sm-table-row"
#define BS5_DISPLAY_CLASS_SMALL_TABLE_CELL            "d-sm-table-cell"
#define BS5_DISPLAY_CLASS_SMALL_FLEX                  "d-sm-flex"
#define BS5_DISPLAY_CLASS_SMALL_INLINE_FLEX           "d-sm-inline-flex"

#define BS5_DISPLAY_CLASS_MEDIUM_NONE                  "d-md-none"
#define BS5_DISPLAY_CLASS_MEDIUM_INLINE                "d-md-inline"
#define BS5_DISPLAY_CLASS_MEDIUM_INLINE_BLOCK          "d-md-inline-block"
#define BS5_DISPLAY_CLASS_MEDIUM_GRID                  "d-md-grid"
#define BS5_DISPLAY_CLASS_MEDIUM_INLINE_GRID           "d-md-inline-grid"
#define BS5_DISPLAY_CLASS_MEDIUM_TABLE                 "d-md-table"
#define BS5_DISPLAY_CLASS_MEDIUM_TABLE_ROW             "d-md-table-row"
#define BS5_DISPLAY_CLASS_MEDIUM_TABLE_CELL            "d-md-table-cell"
#define BS5_DISPLAY_CLASS_MEDIUM_FLEX                  "d-md-flex"
#define BS5_DISPLAY_CLASS_MEDIUM_INLINE_FLEX           "d-md-inline-flex"

#define BS5_DISPLAY_CLASS_LARGE_NONE                  "d-lg-none"
#define BS5_DISPLAY_CLASS_LARGE_INLINE                "d-lg-inline"
#define BS5_DISPLAY_CLASS_LARGE_INLINE_BLOCK          "d-lg-inline-block"
#define BS5_DISPLAY_CLASS_LARGE_GRID                  "d-lg-grid"
#define BS5_DISPLAY_CLASS_LARGE_INLINE_GRID           "d-lg-inline-grid"
#define BS5_DISPLAY_CLASS_LARGE_TABLE                 "d-lg-table"
#define BS5_DISPLAY_CLASS_LARGE_TABLE_ROW             "d-lg-table-row"
#define BS5_DISPLAY_CLASS_LARGE_TABLE_CELL            "d-lg-table-cell"
#define BS5_DISPLAY_CLASS_LARGE_FLEX                  "d-lg-flex"
#define BS5_DISPLAY_CLASS_LARGE_INLINE_FLEX           "d-lg-inline-flex"

#define BS5_DISPLAY_CLASS_EXTRA_LARGE_NONE                  "d-xl-none"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_INLINE                "d-xl-inline"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_INLINE_BLOCK          "d-xl-inline-block"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_GRID                  "d-xl-grid"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_INLINE_GRID           "d-xl-inline-grid"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_TABLE                 "d-xl-table"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_TABLE_ROW             "d-xl-table-row"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_TABLE_CELL            "d-xl-table-cell"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_FLEX                  "d-xl-flex"
#define BS5_DISPLAY_CLASS_EXTRA_LARGE_INLINE_FLEX           "d-xl-inline-flex"

#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_NONE                  "d-xxl-none"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_INLINE                "d-xxl-inline"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_INLINE_BLOCK          "d-xxl-inline-block"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_GRID                  "d-xxl-grid"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_INLINE_GRID           "d-xxl-inline-grid"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_TABLE                 "d-xxl-table"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_TABLE_ROW             "d-xxl-table-row"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_TABLE_CELL            "d-xxl-table-cell"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_FLEX                  "d-xxl-flex"
#define BS5_DISPLAY_CLASS_EXTRA_EXTRA_LARGE_INLINE_FLEX           "d-xxl-inline-flex"

#define BS5_DISPLAY_PRINT_CLASS_NONE            "d-print-none"
#define BS5_DISPLAY_PRINT_CLASS_INLINE          "d-print-inline"
#define BS5_DISPLAY_PRINT_CLASS_INLINE_BLOCK    "d-print-inline-block"
#define BS5_DISPLAY_PRINT_CLASS_BLOCK           "d-print-block"
#define BS5_DISPLAY_PRINT_CLASS_GRID            "d-print-grid"
#define BS5_DISPLAY_PRINT_CLASS_INLINE_GRID     "d-print-inline-grid"
#define BS5_DISPLAY_PRINT_CLASS_TABLE           "d-print-table"
#define BS5_DISPLAY_PRINT_CLASS_TABLE_ROW       "d-print-table-row"
#define BS5_DISPLAY_PRINT_CLASS_TABLE_CELL      "d-print-table-cell"
#define BS5_DISPLAY_PRINT_CLASS_FLEX            "d-print-flex"
#define BS5_DISPLAY_PRINT_CLASS_INLINE_FLEX     "d-print-inline-flex"

/**
 * Bootstrap5 border classes
 */

#define BS5_BORDER_CLASS               "border"
#define BS5_BORDER_CLASS_TOP           "border-top"
#define BS5_BORDER_CLASS_END           "border-end"
#define BS5_BORDER_CLASS_BOTTOM        "border-bottom"
#define BS5_BORDER_CLASS_START         "border-start"

#define BS5_BORDER_CLASS_PRIMARY            "border-primary"
#define BS5_BORDER_CLASS_PRIMARY_SUBTLE     "border-primary-subtle"
#define BS5_BORDER_CLASS_SECONDARY          "border-secondary"
#define BS5_BORDER_CLASS_SECONDARY_SUBTLE   "border-secondary-subtle"
#define BS5_BORDER_CLASS_SUCCESS            "border-success"
#define BS5_BORDER_CLASS_SUCCESS_SUBTLE     "border-success-subtle"
#define BS5_BORDER_CLASS_DANGER             "border-danger"
#define BS5_BORDER_CLASS_DANGER_SUBTLE      "border-danger-subtle"
#define BS5_BORDER_CLASS_WARNING            "border-warning"
#define BS5_BORDER_CLASS_WARNING_SUBTLE     "border-warning-subtle"
#define BS5_BORDER_CLASS_INFO               "border-info"
#define BS5_BORDER_CLASS_INFO_SUBTLE        "border-info-subtle"
#define BS5_BORDER_CLASS_LIGHT              "border-light"
#define BS5_BORDER_CLASS_LIGHT_SUBTLE       "border-light-subtle"
#define BS5_BORDER_CLASS_DARK               "border-dark"
#define BS5_BORDER_CLASS_DARK_SUBTLE        "border-dark-subtle"
#define BS5_BORDER_CLASS_BLACK              "border-black"
#define BS5_BORDER_CLASS_WHITE              "border-white"

#define BS5_BORDER_CLASS_OPACITY_100        "border-opacity-100"
#define BS5_BORDER_CLASS_OPACITY_75         "border-opacity-75"
#define BS5_BORDER_CLASS_OPACITY_50         "border-opacity-50"
#define BS5_BORDER_CLASS_OPACITY_25         "border-opacity-25"
#define BS5_BORDER_CLASS_OPACITY_10         "border-opacity-10"

#define BS5_BORDER_CLASS_WIDTH_1            "border-1"
#define BS5_BORDER_CLASS_WIDTH_2            "border-2"
#define BS5_BORDER_CLASS_WIDTH_3            "border-3"
#define BS5_BORDER_CLASS_WIDTH_4            "border-4"
#define BS5_BORDER_CLASS_WIDTH_5            "border-5"

/**
 * Bootstrap5 table classes
 */

#define BS5_TABLE_CLASS_BASE                "table"
#define BS5_TABLE_CLASS_SMALL               "table-sm"
#define BS5_TABLE_CLASS_MEDIUM              "table-md"
#define BS5_TABLE_CLASS_LARGE               "table-lg"
#define BS5_TABLE_CLASS_XL                  "table-xl"
#define BS5_TABLE_CLASS_XXL                 "table-xxl"

#define BS5_TABLE_CLASS_PRIMARY             "table-primary"
#define BS5_TABLE_CLASS_SECONDARY           "table-secondary"
#define BS5_TABLE_CLASS_SUCCESS             "table-success"
#define BS5_TABLE_CLASS_DANGER              "table-danger"
#define BS5_TABLE_CLASS_WARNING             "table-warning"
#define BS5_TABLE_CLASS_INFO                "table-info"
#define BS5_TABLE_CLASS_LIGHT               "table-light"
#define BS5_TABLE_CLASS_DARK                "table-dark"

#define BS5_TABLE_CLASS_STRIPED             "table-striped"
#define BS5_TABLE_CLASS_STRIPED_COLUMNS     "table-striped-columns"
#define BS5_TABLE_CLASS_HOVER               "table-hover"
#define BS5_TABLE_CLASS_ACTIVE              "table-active"
#define BS5_TABLE_CLASS_BORDERED            "table-bordered"
#define BS5_TABLE_CLASS_BORDERLESS          "table-borderless"

namespace QtHtml { namespace Bootstrap5 {
typedef QMap<QString, QString> BS5ClassStyle;
}}

#endif // #ifndef __Q_HTML_DEFINES_BS5__
