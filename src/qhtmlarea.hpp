#ifndef __Q_HTML_AREA__
#define __Q_HTML_AREA__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Area : public Element
{
public:
    enum class Shape {
        Rect,
        Circle,
        Poly,
        Default
    };

    Area();

    Area& setAlt(const QString &value);
    Area& setCoords(const QString &value);
    Area& setShape(Shape value);
};

}

#endif // #ifndef __Q_HTML_AREA__
