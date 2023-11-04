#ifndef __Q_HTML_METER__
#define __Q_HTML_METER__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlMeter : public QHtmlElement
{
public:
    QHtmlMeter(unsigned int value, unsigned int min = 0, unsigned int max = 1, const QString &content = QString());

    QHtmlMeter& setLow(unsigned int value);
    QHtmlMeter& setHigh(unsigned int value);
    QHtmlMeter& setOptimum(unsigned int value);
    QHtmlMeter& setForm(const QString& formId);
};

#endif // #ifndef __Q_HTML_METER__
