#include "qhtmldefines.hpp"
#include "qhtmlscript.hpp"

namespace QtHtml {

Script::Script(const QString &srcFile, const QString &content) : Element(HTML_TAG_SCRIPT, content)
{
    if (!srcFile.isEmpty())
    {
        addAttribute("src", srcFile);
    }
}

Script &Script::setAsync(bool isOn)
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

Script &Script::setDefer(bool isOn)
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

Script &Script::setCrossOrigin(const QString &value)
{
    return *this;
}

Script &Script::setIntegrity(const QString &value)
{
    return *this;
}

Script &Script::setNoModule(bool isOn)
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

Script &Script::setType(const QString &value)
{
    return *this;
}

}
