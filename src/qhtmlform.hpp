#ifndef __Q_HTML_FORM__
#define __Q_HTML_FORM__

#include <QDateTime>
#include "qhtmlelement.hpp"

namespace QtHtml {

class QTHTML_EXPORT QHtmlForm : public QHtmlElement
{
public:
    explicit QHtmlForm(const QString& action = QString(), FormMethod method = FormMethod::Get);
};

class QTHTML_EXPORT QHtmlInput : public QHtmlElement
{
public:
    enum class InputType
    {
        Button,
        CheckBox,
        Color,
        Date,
        DateTimeLocal,
        Email,
        File,
        Hidden,
        Image,
        Month,
        Number,
        Password,
        Radio,
        Range,
        Reset,
        Search,
        Submit,
        Telephone,
        Text,
        Time,
        Url,
        Week
    };

    explicit QHtmlInput(InputType type = InputType::Text, const QString& name = QString(), const QVariant& value = QVariant(), const QString& content = QString());

    QHtmlInput& setName(const QString& name);
    QHtmlInput& setValue(const QVariant& value);
    QHtmlInput& setDisabled(bool value);
    QHtmlInput& setForm(const QString& name);
};

class QTHTML_EXPORT QHtmlInputButton : public QHtmlInput
{
public:
    explicit QHtmlInputButton(const QString& value = QString());
};

class QTHTML_EXPORT QHtmlInputCheckBox : public QHtmlInput
{
public:
    explicit QHtmlInputCheckBox(const QString& value = QString(), bool isChecked = true);
    QHtmlInputCheckBox& setChecked(bool value = true);
};

class QTHTML_EXPORT QHtmlInputColor : public QHtmlInput
{
public:
    explicit QHtmlInputColor(const QString& value = QString());
};

class QTHTML_EXPORT QHtmlInputDate : public QHtmlInput
{
public:
    explicit QHtmlInputDate(const QDate& date = QDate::currentDate(), const QDate& min = QDate::currentDate(), const QDate& max = QDate::currentDate(), unsigned int step = 1);

    QHtmlInputDate& setMin(const QDate& date = QDate::currentDate());
    QHtmlInputDate& setMax(const QDate& date = QDate::currentDate());
    QHtmlInputDate& setStep(unsigned int step = 1);
};

class QTHTML_EXPORT QHtmlInputDateTimeLocal : public QHtmlInput
{
public:
    explicit QHtmlInputDateTimeLocal(const QDateTime& dateTime = QDateTime::currentDateTime(),
                                     const QDateTime& min = QDateTime::currentDateTime(),
                                     const QDateTime& max = QDateTime::currentDateTime(),
                                     unsigned int step = 1);

    QHtmlInputDateTimeLocal& setMin(const QDateTime& dateTime = QDateTime::currentDateTime());
    QHtmlInputDateTimeLocal& setMax(const QDateTime& dateTime = QDateTime::currentDateTime());
    QHtmlInputDateTimeLocal& setStep(unsigned int step = 1);
};

class QTHTML_EXPORT QHtmlInputEmail : public QHtmlInput
{
public:
    explicit QHtmlInputEmail();

    QHtmlInputEmail& setList(const QString& name);
    QHtmlInputEmail& setMaxLength(unsigned int value);
    QHtmlInputEmail& setMinLength(unsigned int value);
    QHtmlInputEmail& setMultiple(bool value);
    QHtmlInputEmail& setPattern(const QString& pattern);
    QHtmlInputEmail& setPlaceholder(const QString& text);
    QHtmlInputEmail& setReadOnly(bool value);
    QHtmlInputEmail& setSize(unsigned int size = 20);
};

class QTHTML_EXPORT QHtmlInputFile : public QHtmlInput
{
public:
    explicit QHtmlInputFile();
};

class QTHTML_EXPORT QHtmlInputHidden : public QHtmlInput
{
public:
    explicit QHtmlInputHidden();
};

class QTHTML_EXPORT QHtmlInputImage : public QHtmlInput
{
public:
    explicit QHtmlInputImage();
};

class QTHTML_EXPORT QHtmlInputMonth : public QHtmlInput
{
public:
    explicit QHtmlInputMonth();
};

class QTHTML_EXPORT QHtmlInputNumber : public QHtmlInput
{
public:
    explicit QHtmlInputNumber();
};

class QTHTML_EXPORT QHtmlInputPassword : public QHtmlInput
{
public:
    explicit QHtmlInputPassword();
};

class QTHTML_EXPORT QHtmlInputRadio : public QHtmlInput
{
public:
    explicit QHtmlInputRadio();
};

class QTHTML_EXPORT QHtmlInputRange : public QHtmlInput
{
public:
    explicit QHtmlInputRange();
};

class QTHTML_EXPORT QHtmlInputReset : public QHtmlInput
{
public:
    explicit QHtmlInputReset();
};

class QTHTML_EXPORT QHtmlInputSearch : public QHtmlInput
{
public:
    explicit QHtmlInputSearch();
};

class QTHTML_EXPORT QHtmlInputSubmit : public QHtmlInput
{
public:
    explicit QHtmlInputSubmit();
};

class QTHTML_EXPORT QHtmlInputTelephone : public QHtmlInput
{
public:
    explicit QHtmlInputTelephone();
};

class QTHTML_EXPORT QHtmlInputText : public QHtmlInput
{
public:
    explicit QHtmlInputText();
};

class QTHTML_EXPORT QHtmlInputTime : public QHtmlInput
{
public:
    explicit QHtmlInputTime();
};

class QTHTML_EXPORT QHtmlInputUrl : public QHtmlInput
{
public:
    explicit QHtmlInputUrl();
};

class QTHTML_EXPORT QHtmlInputWeek : public QHtmlInput
{
public:
    explicit QHtmlInputWeek();
};

class QTHTML_EXPORT QHtmlOption : public QHtmlElement
{
public:
};

class QTHTML_EXPORT QHtmlOptionGroup : public QHtmlElement
{
public:
};

class QTHTML_EXPORT QHtmlDataList : public QHtmlElement
{
public:
};

class QTHTML_EXPORT QHtmlSelect : public QHtmlElement
{
public:
};

}

#endif // #ifndef __Q_HTML_FORM__
