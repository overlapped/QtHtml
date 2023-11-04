#ifndef __Q_HTML_ELEMENT__
#define __Q_HTML_ELEMENT__

#include <QtCore/QString>
#include <QMap>
#include <QVariant>
#include <QTextStream>

#include "QtHtml_global.hpp"

class QTHTML_EXPORT QHtmlElement
{
public:
    enum class AutoCapitalize
    {
        Off = 0,
        None = Off,
        On = 1,
        Sentences = On,
        Words,
        Characters
    };

    enum class Directionality
    {
        LTR,
        RTL,
        Auto
    };

    enum class Target {
        Self,
        Blank,
        Parent,
        Top
    };

    explicit QHtmlElement(const QString &name, const QVariant &content);
    ~QHtmlElement() = default;

    QHtmlElement& addAttribute(const QString &name, const QVariant &content = QVariant());
    QVariant attribute(const QString &name);
    QHtmlElement& operator << (const QVariant &content);

    QHtmlElement& operator << (const QHtmlElement &child);

    QHtmlElement& setAccessKey(const QString &value);
    QHtmlElement& setAutoCapitalize(AutoCapitalize value);
    QHtmlElement& setAutoFocus(bool value);
    QHtmlElement& setClass(const QString &value);
    QHtmlElement& setId(const QString &value);
    QHtmlElement& setLang(const QString &value);
    QHtmlElement& setStyle(const QString &value);
    QHtmlElement& setTitle(const QString &value);

    friend QTextStream& operator<<(QTextStream& ostream, const QHtmlElement& element);

    QString toString() const;

protected:
    QHtmlElement();
    QTextStream& toString(QTextStream& ostream, const int indent = 0) const;
    QHtmlElement& removeAttribute(const QString &name);
    bool selfClosed_;

    QString name_;
    QVariant content_;
    QVariantMap attributes_;
    QList<QHtmlElement> children_;

private:
    void toStringOpen(QTextStream& ostream, const int indent = 2) const;
    void toStringContent(QTextStream& ostream, const int indent = 2) const;
    void toStringClose(QTextStream& ostream, const int indent = 2) const;
};

inline QTextStream& operator << (QTextStream& ostream, const QHtmlElement& element);

#endif // #ifndef __Q_HTML_ELEMENT__
