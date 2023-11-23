#include "qhtmldefines.hpp"
#include "qhtmllabel.hpp"

namespace QtHtml {

Label::Label(const QString& control, const QString &content) : Element(HTML_TAG_LABEL, content)
{
    addAttribute("for", control);
}

}
