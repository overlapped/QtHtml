#include "qhtmldefines.hpp"
#include "qhtmlhead.hpp"

namespace QtHtml {

Head::Head() : Element(HTML_TAG_HEAD, QVariant())
{

}

Head& Head::operator << (const Title& title)
{
    children_.append(title);
    return *this;
}

Head& Head::operator << (const Style& style)
{
    children_.append(style);
    return *this;
}

Head& Head::operator << (const Meta& meta)
{
    children_.append(meta);
    return *this;
}

Head& Head::operator << (const Link& link)
{
    children_.append(link);
    return *this;
}

Head& Head::operator << (const Script& script)
{
    children_.append(script);
    return *this;
}

}
