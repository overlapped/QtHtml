#ifndef __Q_HTML_SCRIPT__
#define __Q_HTML_SCRIPT__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlScript : public QHtmlElement
{
public:
    explicit QHtmlScript(const QString & srcFile = QString(), const QString &content = QString());

    QHtmlScript& setAsync(bool isOn = true);
    QHtmlScript& setDefer(bool isOn = true);
    QHtmlScript& setCrossOrigin(const QString& value);
    QHtmlScript& setIntegrity(const QString& value);
    QHtmlScript& setNoModule(bool isOn = true);
    QHtmlScript& setType(const QString& value);
};

#endif // #ifndef __Q_HTML_SCRIPT__
