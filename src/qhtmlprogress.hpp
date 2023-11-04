#ifndef __Q_HTML_PROGRESS__
#define __Q_HTML_PROGRESS__

#include "qhtmlelement.hpp"

class QTHTML_EXPORT QHtmlProgress : public QHtmlElement
{
public:
    QHtmlProgress(unsigned int value, unsigned int max = 1, const QString &content = QString());

    QHtmlProgress& setMax(unsigned int value);
};

#endif // #ifndef __Q_HTML_PROGRESS__
