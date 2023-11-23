#ifndef __Q_HTML_SCRIPT__
#define __Q_HTML_SCRIPT__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Script : public Element
{
public:
    explicit Script(const QString & srcFile = QString(), const QString &content = QString());

    Script& setAsync(bool isOn = true);
    Script& setDefer(bool isOn = true);
    Script& setCrossOrigin(const QString& value);
    Script& setIntegrity(const QString& value);
    Script& setNoModule(bool isOn = true);
    Script& setType(const QString& value);
};

}

#endif // #ifndef __Q_HTML_SCRIPT__
