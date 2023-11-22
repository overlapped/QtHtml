#include "qhtmldefines.hpp"
#include "qhtmlscript.hpp"

namespace QtHtml {

QHtmlScript::QHtmlScript(const QString &srcFile, const QString &content) : QHtmlElement(HTML_TAG_SCRIPT, content)
{
    if (!srcFile.isEmpty())
    {
        addAttribute("src", srcFile);
    }
}

QHtmlScript &QHtmlScript::setAsync(bool isOn)
{
    if (isOn)
    {
        addAttribute("async");
    }
    else
    {
        removeAttribute("async");
    }

    return *this;
}

QHtmlScript &QHtmlScript::setDefer(bool isOn)
{
    if (isOn)
    {
        addAttribute("defer");
    }
    else
    {
        removeAttribute("defer");
    }

    return *this;
}

QHtmlScript &QHtmlScript::setCrossOrigin(const QString &value)
{
    return *this;
}

QHtmlScript &QHtmlScript::setIntegrity(const QString &value)
{
    return *this;
}

QHtmlScript &QHtmlScript::setNoModule(bool isOn)
{
    if (isOn)
    {
        addAttribute("nomodule");
    }
    else
    {
        removeAttribute("nomodule");
    }

    return *this;
}

QHtmlScript &QHtmlScript::setType(const QString &value)
{
    return *this;
}

}
