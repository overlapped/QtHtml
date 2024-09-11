#ifndef __Q_HTML_BUTTON_BS5__
#define __Q_HTML_BUTTON_BS5__

#include "qhtmldefines_bs5.hpp"
#include "qhtmlbutton.hpp"

namespace QtHtml { namespace Bootstrap5 {

class QTHTML_EXPORT ButtonBs5 : public Button
{
public:
    enum class ButtonType
    {
        Primary,
        Secondary,
        Success,
        Danger,
        Warning,
        Info,
        Light,
        Dark,
        Link
    };

    enum class ButtonSize
    {
        Small,
        Large
    };

    explicit ButtonBs5(ButtonType type = ButtonType::Primary, const QString& content = QString());

    ButtonBs5& setType(ButtonType type);
    ButtonBs5& setSize(ButtonSize size);
    ButtonBs5& setToggle(bool value = true);

private:
    BS5ClassStyle classStyleBs5_;
    QString updateClassStyle();
};

class QTHTML_EXPORT CloseButtonBs5 : public Button
{
public:
    explicit CloseButtonBs5();
};

}}

#endif // #ifndef __Q_HTML_BUTTON_BS5__
