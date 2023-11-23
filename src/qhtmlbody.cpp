#include "qhtmldefines.hpp"
#include "qhtmlbody.hpp"

namespace QtHtml {

Body::Body() : Element(HTML_TAG_BODY, QVariant())
{

}

Body &Body::setOnAfterPrint(const QString &value)
{
    addAttribute("onafterprint", value);
    return *this;
}

Body &Body::setOnBeforePrint(const QString &value)
{
    addAttribute("onbeforeprint", value);
    return *this;
}

Body &Body::setOnBeforeUnload(const QString &value)
{
    addAttribute("onbeforeunload", value);
    return *this;
}

Body &Body::setOnBlur(const QString &value)
{
    addAttribute("onblur", value);
    return *this;
}

Body &Body::setOnError(const QString &value)
{
    addAttribute("onerror", value);
    return *this;
}

Body &Body::setOnFocus(const QString &value)
{
    addAttribute("onfocus", value);
    return *this;
}

Body &Body::setOnHashChange(const QString &value)
{
    addAttribute("onhashchange", value);
    return *this;
}

Body &Body::setOnLanguageChange(const QString &value)
{
    addAttribute("onlanguagechange", value);
    return *this;
}

Body &Body::setOnLoad(const QString &value)
{
    addAttribute("onload", value);
    return *this;
}

Body &Body::setOnMessage(const QString &value)
{
    addAttribute("onmessage", value);
    return *this;
}

Body &Body::setOnOffline(const QString &value)
{
    addAttribute("onoffline", value);
    return *this;
}

Body &Body::setOnOnline(const QString &value)
{
    addAttribute("ononline", value);
    return *this;
}

Body &Body::setOnPopState(const QString &value)
{
    addAttribute("onpopstate", value);
    return *this;
}

Body &Body::setOnRedo(const QString &value)
{
    addAttribute("onredo", value);
    return *this;
}

Body &Body::setOnResize(const QString &value)
{
    addAttribute("onresize", value);
    return *this;
}

Body &Body::setOnStorage(const QString &value)
{
    addAttribute("onstorage", value);
    return *this;
}

Body &Body::setOnUndo(const QString &value)
{
    addAttribute("onundo", value);
    return *this;
}

Body &Body::setOnUnload(const QString &value)
{
    addAttribute("onunload", value);
    return *this;
}

}
