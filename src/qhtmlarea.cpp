#include "qhtmldefines.hpp"
#include "qhtmlarea.hpp"

namespace QtHtml {

QString ShapeToString(Area::Shape value)
{
    QString result;

    switch (value) {
        case Area::Shape::Circle: result = "circle"; break;
        case Area::Shape::Poly: result = "poly"; break;
        case Area::Shape::Rect: result = "rect"; break;
        case Area::Shape::Default: result = "default"; break;
        default:
            break;
    }

    return result;
}

Area::Area() : Element(HTML_TAG_AREA, QVariant())
{

}

Area &Area::setAlt(const QString &value)
{
    addAttribute(HTML_ATTR_AREA_ALT, value);
    return *this;
}

Area &Area::setCoords(const QString &value)
{
    addAttribute(HTML_ATTR_AREA_COORDS, value);
    return *this;
}

Area &Area::setShape(Shape value)
{
    addAttribute("alt", ShapeToString(value));
    return *this;
}

}
