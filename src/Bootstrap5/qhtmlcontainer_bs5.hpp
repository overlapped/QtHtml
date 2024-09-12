#ifndef __Q_HTML_CONTAINER_BS5__
#define __Q_HTML_CONTAINER_BS5__

#include "qhtmldefines_bs5.hpp"
#include "qhtmldiv.hpp"

namespace QtHtml { namespace Bootstrap5 {

class QTHTML_EXPORT ContainerBs5 : public Div
{
public:
    enum class ContainerType
    {
        Default,
        Small,
        Medium,
        Large,
        ExtraLarge,
        ExtraExtraLarge,
        Fluid
    };

    explicit ContainerBs5(ContainerType type = ContainerType::Default, const QString& content = QString());

    ContainerBs5& setType(ContainerType type);

private:
    BS5ClassStyle classStyleBs5_;
    QString updateClassStyle();
};

}}

#endif // #ifndef __Q_HTML_CONTAINER_BS5__
