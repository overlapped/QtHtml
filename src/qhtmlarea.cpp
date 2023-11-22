#include "qhtmldefines.hpp"
#include "qhtmlarea.hpp"

namespace QtHtml {

QString ShapeToString(QHtmlArea::Shape value)
{
    QString result;

    switch (value) {
        case QHtmlArea::Shape::Circle: result = "circle"; break;
        case QHtmlArea::Shape::Poly: result = "poly"; break;
        case QHtmlArea::Shape::Rect: result = "rect"; break;
        case QHtmlArea::Shape::Default: result = "default"; break;
        default:
            break;
    }

    return result;
}

QHtmlArea::QHtmlArea() : QHtmlElement(HTML_TAG_AREA, QVariant())
{

}

QHtmlArea &QHtmlArea::setAlt(const QString &value)
{
    addAttribute(HTML_ATTR_AREA_ALT, value);
    return *this;
}

QHtmlArea &QHtmlArea::setCoords(const QString &value)
{
    addAttribute(HTML_ATTR_AREA_COORDS, value);
    return *this;
}

QHtmlArea &QHtmlArea::setShape(Shape value)
{
    addAttribute("alt", ShapeToString(value));
    return *this;
}

}
