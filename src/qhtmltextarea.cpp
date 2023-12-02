#include "qhtmldefines.hpp"
#include "qhtmltextarea.hpp"

namespace QtHtml {

QString WrapModeToString(TextArea::WrapMode value)
{
    QString result;

    switch (value) {
        case TextArea::WrapMode::Hard: result = "hard"; break;
        case TextArea::WrapMode::Soft: result = "soft"; break;
        default:
            break;
    }

    return result;
}

TextArea::TextArea(const QString &name, const QString &content, unsigned int rows, unsigned int cols) : Element(HTML_TAG_TEXTAREA, content)
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

TextArea &TextArea::setAutoComplete(bool value)
{
    addAttribute("autocomplete", value ? "true" : "false");
    return *this;
}

TextArea &TextArea::setAutoFocus(bool value)
{
    addAttribute("autofocus", value ? "true" : "false");
    return *this;
}

TextArea &TextArea::setRows(unsigned int rows)
{
    addAttribute("rows", rows);
    return *this;
}

TextArea &TextArea::setColumns(unsigned int cols)
{
    addAttribute("cols", cols);
    return *this;
}

TextArea &TextArea::setDisabled(bool value)
{
    addAttribute("disabled", value ? "true" : "false");
    return *this;
}

TextArea &TextArea::setForm(const QString &formId)
{
    addAttribute("form", formId);
    return *this;
}

TextArea &TextArea::setMinLength(unsigned int len)
{
    addAttribute("minlength", len);
    return *this;
}

TextArea &TextArea::setMaxLength(unsigned int len)
{
    addAttribute("maxlength", len);
    return *this;
}

TextArea &TextArea::setPlaceHolder(const QString &value)
{
    addAttribute("placeholder", value);
    return *this;
}

TextArea &TextArea::setReadOnly(bool value)
{
    addAttribute("readonly", value ? "true" : "false");
    return *this;
}

TextArea &TextArea::setRequired(bool value)
{
    if (value)
    {
        addAttribute("required", QVariant());
    }
    return *this;
}

TextArea &TextArea::setWrapMode(WrapMode value)
{
    addAttribute("wrap", WrapModeToString(value));
    return *this;
}

}
