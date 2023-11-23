#ifndef __Q_HTML_BODY__
#define __Q_HTML_BODY__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Body : public Element
{
public:
    Body();

    Body& setOnAfterPrint(const QString &value);
    Body& setOnBeforePrint(const QString &value);
    Body& setOnBeforeUnload(const QString &value);
    Body& setOnBlur(const QString &value);
    Body& setOnError(const QString &value);
    Body& setOnFocus(const QString &value);
    Body& setOnHashChange(const QString &value);
    Body& setOnLanguageChange(const QString &value);
    Body& setOnLoad(const QString &value);
    Body& setOnMessage(const QString &value);
    Body& setOnOffline(const QString &value);
    Body& setOnOnline(const QString &value);
    Body& setOnPopState(const QString &value);
    Body& setOnRedo(const QString &value);
    Body& setOnResize(const QString &value);
    Body& setOnStorage(const QString &value);
    Body& setOnUndo(const QString &value);
    Body& setOnUnload(const QString &value);
};

}

#endif // #ifndef __Q_HTML_BODY__
