#ifndef __Q_HTML_TEXTAREA__
#define __Q_HTML_TEXTAREA__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlTextArea : public QHtmlElement
{
public:
    enum class WrapMode
    {
        Hard,
        Soft
    };

    explicit QHtmlTextArea(const QString& name, const QString &content = QString(), unsigned int rows = 2, unsigned int cols = 20);

    QHtmlTextArea& setAutoComplete(bool isOn = true);
    QHtmlTextArea& setAutoFocus(bool isOn = true);
    QHtmlTextArea& setRows(unsigned int rows = 2);
    QHtmlTextArea& setColumns(unsigned int cols = 20);
    QHtmlTextArea& setDisabled(bool isOn = true);
    QHtmlTextArea& setForm(const QString& formId);
    QHtmlTextArea& setMinLength(unsigned int len = 1);
    QHtmlTextArea& setMaxLength(unsigned int len = 120);
    QHtmlTextArea& setPlaceHolder(const QString& value);
    QHtmlTextArea& setReadOnly(bool isOn = true);
    QHtmlTextArea& setRequired(bool isOn = true);
    QHtmlTextArea& setWrapMode(WrapMode value);
};

#endif // #ifndef __Q_HTML_TEXTAREA__
