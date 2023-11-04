#ifndef __Q_HTML_BODY__
#define __Q_HTML_BODY__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlBody : public QHtmlElement
{
public:
    QHtmlBody();

    QHtmlBody& setOnAfterPrint(const QString &value);
    QHtmlBody& setOnBeforePrint(const QString &value);
    QHtmlBody& setOnBeforeUnload(const QString &value);
    QHtmlBody& setOnBlur(const QString &value);
    QHtmlBody& setOnError(const QString &value);
    QHtmlBody& setOnFocus(const QString &value);
    QHtmlBody& setOnHashChange(const QString &value);
    QHtmlBody& setOnLanguageChange(const QString &value);
    QHtmlBody& setOnLoad(const QString &value);
    QHtmlBody& setOnMessage(const QString &value);
    QHtmlBody& setOnOffline(const QString &value);
    QHtmlBody& setOnOnline(const QString &value);
    QHtmlBody& setOnPopState(const QString &value);
    QHtmlBody& setOnRedo(const QString &value);
    QHtmlBody& setOnResize(const QString &value);
    QHtmlBody& setOnStorage(const QString &value);
    QHtmlBody& setOnUndo(const QString &value);
    QHtmlBody& setOnUnload(const QString &value);
};

#endif // #ifndef __Q_HTML_BODY__
