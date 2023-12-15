#ifndef __Q_HTML_META__
#define __Q_HTML_META__

#include "qhtmlelement.hpp"

namespace QtHtml {

/**
 * \brief The Meta class represents \b meta HTML element.
 *
 * The \<metaa> HTML element represents metadata that cannot be represented by other
 * HTML meta-related elements, like \<base\>, \<link\>, \<script\>, \<style\> or \<title\>.
 *
 * The type of metadata provided by the \<meta\> element can be one of the following
 * - If the \b name attribute is set, the \<meta\> element provides document-level metadata, applying to the whole page.
 * - If the \b http-equiv attribute is set, the \<meta\> element is a pragma directive, providing information equivalent
 *   to what can be given by a similarly-named HTTP header.
 * - If the \b charset attribute is set, the \<meta\> element is a charset declaration, giving the character encoding
 *   in which the document is encoded.
 * - If the \b itemprop attribute is set, the \<meta\> element provides user-defined metadata.
 */
class QTHTML_EXPORT Meta : public Element
{
public:
    enum class HttpEquiv {
        ContentSecurityPolicy,  /// Allows page authors to define a content policy for the current page.
        ContentType,            /// Declares the MIME type and the document's character encoding.
        DefaultStyle,           /// Sets the name of the default CSS style sheet set.
        XUACompatibility,
        Refresh                 /// The number of seconds until the page should be reloaded.
    };

    /**
     * \brief Construct the meta object with \b charset.
     * \param[in] charset - this attribute declares the document's character encoding.
     *                      If the attribute is present, its value must be an ASCII case-insensitive match for
     *                      the string \b utf-8, because \b UTF-8 is the only valid encoding for HTML5 documents.
     *                      \<meta\> elements which declare a character encoding must be located entirely within
     *                      the first 1024 bytes of the document.
     */
    explicit Meta(const QString& charset);

    /**
     * \brief Construct the meta object with \b name.
     * \param[in] name - The name and content attributes can be used together to provide document metadata
     *                   in terms of name-value pairs.
     * \param[in] content - This attribute contains the value for the http-equiv or name attribute,
     *                      depending on which is used.
     */
    explicit Meta(const QString& name, const QString& content);

    /**
     * \brief Construct the meta object with \b http-equiv.
     * \param value - Defines a pragma directive. The attribute is named http-equiv(alent) because all the
     *                allowed values are names of particular HTTP headers.
     * \param content - This attribute contains the value for the http-equiv or name attribute,
     *                  depending on which is used.
     */
    explicit Meta(HttpEquiv value, const QString& content);
};

}

#endif // #ifndef __Q_HTML_META__
