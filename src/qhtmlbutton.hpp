#ifndef __Q_HTML_BUTTON__
#define __Q_HTML_BUTTON__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Button : public Element
{
public:
    enum class PopOverTargetAction
    {
        Hide,
        Show,
        Toggle
    };

    enum class Type
    {
        Submit,
        Reset,
        Button
    };

    explicit Button(Type type = Type::Button, const QString &content = QString());

    Button& setAutoFocus(bool value);
    Button& setDisabled(bool value = true);
    Button& setForm(const QString &value);
    Button& setFormAction(const QUrl &value);
    Button& setFormMethod(FormMethod value);
    Button& setFormNoValidate(bool value);
    Button& setFormTarget(Target value);
    Button& setName(const QString &value);
    Button& setPopOverTarget(const QString &value);
    Button& setPopOverTargetAction(PopOverTargetAction value);
    Button& setType(Type value);
    Button& setValue(const QString &value);
};

}

#endif // #ifndef __Q_HTML_BUTTON__
