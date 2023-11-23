#ifndef __Q_HTML_TEXTAREA__
#define __Q_HTML_TEXTAREA__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT TextArea : public Element
{
public:
    enum class WrapMode
    {
        Hard,
        Soft
    };

    explicit TextArea(const QString& name, const QString &content = QString(), unsigned int rows = 2, unsigned int cols = 20);

    TextArea& setAutoComplete(bool isOn = true);
    TextArea& setAutoFocus(bool isOn = true);
    TextArea& setRows(unsigned int rows = 2);
    TextArea& setColumns(unsigned int cols = 20);
    TextArea& setDisabled(bool isOn = true);
    TextArea& setForm(const QString& formId);
    TextArea& setMinLength(unsigned int len = 1);
    TextArea& setMaxLength(unsigned int len = 120);
    TextArea& setPlaceHolder(const QString& value);
    TextArea& setReadOnly(bool isOn = true);
    TextArea& setRequired(bool isOn = true);
    TextArea& setWrapMode(WrapMode value);
};

}

#endif // #ifndef __Q_HTML_TEXTAREA__
