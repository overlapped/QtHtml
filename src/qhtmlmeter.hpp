#ifndef __Q_HTML_METER__
#define __Q_HTML_METER__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Meter : public Element
{
public:
    Meter(unsigned int value, unsigned int min = 0, unsigned int max = 1, const QString &content = QString());

    Meter& setLow(unsigned int value);
    Meter& setHigh(unsigned int value);
    Meter& setOptimum(unsigned int value);
    Meter& setForm(const QString& formId);
};

}

#endif // #ifndef __Q_HTML_METER__
