#ifndef __Q_HTML_BUTTON__
#define __Q_HTML_BUTTON__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlButton : public QHtmlElement
{
public:
    enum class FormMethod {
        Post,
        Get,
        Dialog
    };

    enum class PopOverTargetAction {
        Hide,
        Show,
        Toggle
    };

    enum class Type {
        Submit,
        Reset,
        Button
    };

    explicit QHtmlButton(const QString &content);

    QHtmlButton& setAutoFocus(bool value);
    QHtmlButton& setDisabled(bool value);
    QHtmlButton& setForm(const QString &value);
    QHtmlButton& setFormAction(const QUrl &value);
    QHtmlButton& setFormMethod(FormMethod value);
    QHtmlButton& setFormNoValidate(bool value);
    QHtmlButton& setFormTarget(Target value);
    QHtmlButton& setName(const QString &value);
    QHtmlButton& setPopOverTarget(const QString &value);
    QHtmlButton& setPopOverTargetAction(PopOverTargetAction value);
    QHtmlButton& setType(Type value);
    QHtmlButton& setValue(const QString &value);
};

#endif // #ifndef __Q_HTML_BUTTON__
