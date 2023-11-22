#ifndef __Q_HTML_AREA__
#define __Q_HTML_AREA__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlArea : public QHtmlElement
{
public:
    enum class Shape {
        Rect,
        Circle,
        Poly,
        Default
    };

    QHtmlArea();

    QHtmlArea& setAlt(const QString &value);
    QHtmlArea& setCoords(const QString &value);
    QHtmlArea& setShape(Shape value);
};

}

#endif // #ifndef __Q_HTML_AREA__
