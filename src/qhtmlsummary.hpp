#ifndef __Q_HTML_SUMMARY__
#define __Q_HTML_SUMMARY__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Details class
 *
 * The \<details\> HTML element creates a disclosure widget in which information is visible only
 * when the widget is toggled into an \c open state. A summary or label must be provided using
 * the \<summary\> element.
 * A disclosure widget is typically presented onscreen using a small triangle which rotates
 * (or twists) to indicate open/closed status, with a label next to the triangle. The contents
 * of the \<summary\> element are used as the label for the disclosure widget.
 */
class QTHTML_EXPORT Details : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the title text string.
     */
    explicit Details(bool value = true, const QString &content = QString());

    /**
     * \brief Set \b open attribute.
     *
     * This \c boolean attribute indicates whether the details — that is, the contents of the
     * \<details\> element — are currently visible. The details are shown when this attribute
     * exists, or hidden when this attribute is absent. By default this attribute is absent which
     * means the details are not visible.
     *
     * \param[in] value - if \c true set the opened, otherwise closed.
     * \return this object.
     */
    Details& setOpened(bool value = true);
};

/**
 * \brief The Summary class represents \c summary HTML element.
 *
 * The \<summary\> HTML element specifies a summary, caption, or legend for a \<details\> element's
 * disclosure box. Clicking the \<summary\> element toggles the state of the parent \<details\>
 * element open and closed.
 * The \<summary\> element's contents can be any heading content, plain text, or HTML that can be
 * used within a paragraph.
 *
 * \sa Details
 */
class QTHTML_EXPORT Summary : public Element
{
public:
    /**
     * \brief Default constructor to create object with \b content.
     * \param[in] content - the title text string.
     */
    explicit Summary(const QString &content);
};

}

#endif // #ifndef __Q_HTML_SUMMARY__
