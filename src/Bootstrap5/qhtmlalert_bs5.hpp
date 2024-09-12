#ifndef __Q_HTML_ALERT_BS5__
#define __Q_HTML_ALERT_BS5__

#include "qhtmldefines_bs5.hpp"
#include "qhtmldiv.hpp"

namespace QtHtml { namespace Bootstrap5 {

class QTHTML_EXPORT AlertBs5 : public Div
{
public:
    enum class AlertType
    {
        Primary,
        Secondary,
        Success,
        Danger,
        Warning,
        Info,
        Light,
        Dark
    };

    explicit AlertBs5(AlertType type = AlertType::Primary, const QString& content = QString());

    AlertBs5& setType(AlertType type);

private:
    BS5ClassStyle classStyleBs5_;
    QString updateClassStyle();
};

}}

#endif // #ifndef __Q_HTML_ALERT_BS5__
