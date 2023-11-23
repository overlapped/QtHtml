#ifndef __Q_HTML_ELEMENT__
#define __Q_HTML_ELEMENT__

#include <QtCore/QString>
#include <QMap>
#include <QVariant>
#include <QTextStream>

#include "QtHtml_global.hpp"

namespace QtHtml {

enum class Target {
    Self,
    Blank,
    Parent,
    Top
};

enum class FormMethod {
    Post,
    Get,
    Dialog
};

class QTHTML_EXPORT Element
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

    explicit Element(const QString &name, const QVariant &content);
    ~Element() = default;

    Element& addAttribute(const QString &name, const QVariant &content = QVariant());
    QVariant attribute(const QString &name);
    Element& operator << (const QVariant &content);

    Element& operator << (const Element &child);

    Element& setAccessKey(const QString &value);
    Element& setAutoCapitalize(AutoCapitalize value);
    Element& setAutoFocus(bool value);
    Element& setClass(const QString &value);
    Element& setId(const QString &value);
    Element& setLang(const QString &value);
    Element& setStyle(const QString &value);
    Element& setTitle(const QString &value);

    friend QTextStream& operator<<(QTextStream& ostream, const Element& element);

    QString toString() const;

    QString name() const;

    const QVariant& content() const;
    void setContent(const QVariant &content);

protected:
    Element();
    QTextStream& toString(QTextStream& ostream, const int indent = 0) const;
    Element& removeAttribute(const QString &name);
    bool selfClosed_;

    QString name_;
    QVariant content_;
    QVariantMap attributes_;
    QList<Element> children_;

private:
    void toStringOpen(QTextStream& ostream, const int indent = 2) const;
    void toStringContent(QTextStream& ostream, const int indent = 2) const;
    void toStringClose(QTextStream& ostream, const int indent = 2) const;
};

inline QTextStream& operator << (QTextStream& ostream, const QtHtml::Element& element);

}

#endif // #ifndef __Q_HTML_ELEMENT__
