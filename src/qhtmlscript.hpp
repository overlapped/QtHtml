#ifndef __Q_HTML_SCRIPT__
#define __Q_HTML_SCRIPT__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Script class represent \b script HTML element.
 *
 * The \<script\> HTML element is used to embed executable code or data; this is typically
 * used to embed or refer to \c JavaScript code. The \<script\> element can also be used with
 * other languages, such as WebGL's GLSL shader programming language and JSON.
 */
class QTHTML_EXPORT Script : public Element
{
public:
    /**
     * \brief Default constructor with script file and contents.
     * \param[in] srcFile - script file name.
     * \param[in] content - script content.
     */
    explicit Script(const QString & srcFile = QString(), const QString &content = QString());

    /**
     * \brief Set \b async attribute.
     *
     * For classic scripts, if the async attribute is present, then the classic script will be fetched
     * in parallel to parsing and evaluated as soon as it is available. For module scripts, if the async
     * attribute is present then the scripts and all their dependencies will be fetched in parallel to
     * parsing and evaluated as soon as they are available. This attribute allows the elimination of
     * parser-blocking JavaScript where the browser would have to load and evaluate scripts before
     * continuing to parse. defer has a similar effect in this case. This is a boolean attribute: the
     * presence of a boolean attribute on an element represents the true value, and the absence of the
     * attribute represents the false value.
     *
     * \param[in] value - value of \c async attribute.
     * \return this object.
     */
    Script& setAsync(bool value = true);

    /**
     * \brief setDefer
     * \param value
     * \return
     */
    Script& setDefer(bool value = true);

    /**
     * \brief setCrossOrigin
     * \param value
     * \return
     */
    Script& setCrossOrigin(const QString& value);

    /**
     * \brief setIntegrity
     * \param value
     * \return
     */
    Script& setIntegrity(const QString& value);

    /**
     * \brief setNoModule
     * \param value
     * \return
     */
    Script& setNoModule(bool value = true);

    /**
     * \brief setType
     * \param value
     * \return
     */
    Script& setType(const QString& value);
};

}

#endif // #ifndef __Q_HTML_SCRIPT__
