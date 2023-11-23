#ifndef __Q_HTML_HEADER__
#define __Q_HTML_HEADER__

#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT Header : public Element
{
public:
    explicit Header();
};

class QTHTML_EXPORT Header1 : public Element
{
public:
    explicit Header1(const QString &content);
};

class QTHTML_EXPORT Header2 : public Element
{
public:
    explicit Header2(const QString &content);
};

class QTHTML_EXPORT Header3 : public Element
{
public:
    explicit Header3(const QString &content);
};

class QTHTML_EXPORT Header4 : public Element
{
public:
    explicit Header4(const QString &content);
};

class QTHTML_EXPORT Header5 : public Element
{
public:
    explicit Header5(const QString &content);
};

class QTHTML_EXPORT Header6 : public Element
{
public:
    explicit Header6(const QString &content);
};

}

#endif // #ifndef __Q_HTML_HEADER__
