#ifndef __Q_HTML_PROGRESS__
#define __Q_HTML_PROGRESS__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Progress : public Element
{
public:
    Progress(unsigned int value, unsigned int max = 1, const QString &content = QString());

    Progress& setMax(unsigned int value);
};

}

#endif // #ifndef __Q_HTML_PROGRESS__
