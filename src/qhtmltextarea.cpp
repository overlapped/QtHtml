#include "qhtmldefines.hpp"
#include "qhtmltextarea.hpp"

QString WrapModeToString(QHtmlTextArea::WrapMode value)
{
    QString result;

    switch (value) {
        case QHtmlTextArea::WrapMode::Hard: result = "hard"; break;
        case QHtmlTextArea::WrapMode::Soft: result = "soft"; break;
        default:
            break;
    }

    return result;
}

QHtmlTextArea::QHtmlTextArea(const QString &name, const QString &content, unsigned int rows, unsigned int cols) : QHtmlElement(HTML_TAG_TEXTAREA, content)
{
    addAttribute("name", name);
    if (rows > 0)
    {
        addAttribute("rows", rows);
    }
    if (cols > 0)
    {
        addAttribute("cols", cols);
    }
}

QHtmlTextArea &QHtmlTextArea::setAutoComplete(bool isOn)
{
    addAttribute("autocomplete", isOn ? "true" : "false");
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setAutoFocus(bool isOn)
{
    addAttribute("autofocus", isOn ? "true" : "false");
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setRows(unsigned int rows)
{
    addAttribute("rows", rows);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setColumns(unsigned int cols)
{
    addAttribute("cols", cols);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setDisabled(bool isOn)
{
    addAttribute("disabled", isOn ? "true" : "false");
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setForm(const QString &formId)
{
    addAttribute("form", formId);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setMinLength(unsigned int len)
{
    addAttribute("minlength", len);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setMaxLength(unsigned int len)
{
    addAttribute("maxlength", len);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setPlaceHolder(const QString &value)
{
    addAttribute("placeholder", value);
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setReadOnly(bool isOn)
{
    addAttribute("readonly", isOn ? "true" : "false");
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setRequired(bool isOn)
{
    if (isOn)
    {
        addAttribute("required", QVariant());
    }
    return *this;
}

QHtmlTextArea &QHtmlTextArea::setWrapMode(WrapMode value)
{
    addAttribute("wrap", WrapModeToString(value));
    return *this;
}
