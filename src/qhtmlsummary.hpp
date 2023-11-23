#ifndef __Q_HTML_SUMMARY__
#define __Q_HTML_SUMMARY__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Details : public Element
{
public:
    explicit Details(const QString &content = QString());
    Details& setOpen(const QString &content);
};

class QTHTML_EXPORT Summary : public Element
{
public:
    explicit Summary(const QString &content);
};

}

#endif // #ifndef __Q_HTML_SUMMARY__
