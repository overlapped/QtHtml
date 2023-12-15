#ifndef __Q_HTML_HEADER__
#define __Q_HTML_HEADER__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Header class represents \b header HTML element.
 *
 * The \<header\> HTML element represents introductory content, typically a group of
 * introductory or navigational aids. It may contain some heading elements but also a
 * logo, a search form, an author name, and other elements.
 */
class QTHTML_EXPORT Header : public Element
{
public:
    /**
     * \brief Default constructor to create object.
     */
    explicit Header();
};

/**
 * \brief The Header1 class represents \b h1 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header1 : public Element
{
public:
    explicit Header1(const QString &content);
};

/**
 * \brief The Header2 class represents \b h2 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header2 : public Element
{
public:
    explicit Header2(const QString &content);
};

/**
 * \brief The Header3 class represents \b h3 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header3 : public Element
{
public:
    explicit Header3(const QString &content);
};

/**
 * \brief The Header4 class represents \b h4 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header4 : public Element
{
public:
    explicit Header4(const QString &content);
};

/**
 * \brief The Header5 class represents \b h5 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header5 : public Element
{
public:
    explicit Header5(const QString &content);
};

/**
 * \brief The Header6 class represents \b h6 HTML element.
 *
 * The \<h1\> to \<h6\> HTML elements represent six levels of section headings.
 * \<h1\> is the highest section level and \<h6\> is the lowest. By default,
 * all heading elements create a block-level box in the layout, starting on a
 * new line and taking up the full width available in their containing block.
 */
class QTHTML_EXPORT Header6 : public Element
{
public:
    explicit Header6(const QString &content);
};

}

#endif // #ifndef __Q_HTML_HEADER__
