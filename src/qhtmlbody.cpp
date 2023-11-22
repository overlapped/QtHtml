#include "qhtmldefines.hpp"
#include "qhtmlbody.hpp"

namespace QtHtml {

QHtmlBody::QHtmlBody() : QHtmlElement(HTML_TAG_BODY, QVariant())
{

}

QHtmlBody &QHtmlBody::setOnAfterPrint(const QString &value)
{
    addAttribute("onafterprint", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnBeforePrint(const QString &value)
{
    addAttribute("onbeforeprint", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnBeforeUnload(const QString &value)
{
    addAttribute("onbeforeunload", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnBlur(const QString &value)
{
    addAttribute("onblur", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnError(const QString &value)
{
    addAttribute("onerror", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnFocus(const QString &value)
{
    addAttribute("onfocus", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnHashChange(const QString &value)
{
    addAttribute("onhashchange", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnLanguageChange(const QString &value)
{
    addAttribute("onlanguagechange", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnLoad(const QString &value)
{
    addAttribute("onload", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnMessage(const QString &value)
{
    addAttribute("onmessage", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnOffline(const QString &value)
{
    addAttribute("onoffline", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnOnline(const QString &value)
{
    addAttribute("ononline", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnPopState(const QString &value)
{
    addAttribute("onpopstate", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnRedo(const QString &value)
{
    addAttribute("onredo", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnResize(const QString &value)
{
    addAttribute("onresize", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnStorage(const QString &value)
{
    addAttribute("onstorage", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnUndo(const QString &value)
{
    addAttribute("onundo", value);
    return *this;
}

QHtmlBody &QHtmlBody::setOnUnload(const QString &value)
{
    addAttribute("onunload", value);
    return *this;
}

}
