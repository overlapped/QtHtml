#include <QtTest>
#include <QHtmlWriter>

class QtHtmlTests : public QObject
{
    Q_OBJECT

public:
    QtHtmlTests();
    ~QtHtmlTests();

private slots:
    void initTestCase();
    void cleanupTestCase();

    void testAbbreviation_data();
    void testAbbreviation();

    void testAddress_data();
    void testAddress();

    void testSummaryDetails_data();
    void testSummaryDetails();

    void testTextArea_data();
    void testTextArea();

    void testTime_data();
    void testTime();

    void testTitle_data();
    void testTitle();
};

QtHtmlTests::QtHtmlTests()
{

}

QtHtmlTests::~QtHtmlTests()
{

}

void QtHtmlTests::initTestCase()
{

}

void QtHtmlTests::cleanupTestCase()
{

}

void QtHtmlTests::testAbbreviation_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Abbreviation("HTML5").toString().simplified() << "<abbr>HTML5</abbr>";
}

void QtHtmlTests::testAbbreviation()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testAddress_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Address("HTML5").toString().simplified() << "<address>HTML5</address>";
}

void QtHtmlTests::testAddress()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testSummaryDetails_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Details closed") << (QtHtml::Details(false, "Details text.") << QtHtml::Summary("Summary text.")).toString().simplified()
                                    << "<details>Details text.<summary>Summary text.</summary> </details>";
    QTest::newRow("Details opened") << (QtHtml::Details(true, "Details text.") << QtHtml::Summary("Summary text.")).toString().simplified()
                                    << "<details open>Details text.<summary>Summary text.</summary> </details>";
}

void QtHtmlTests::testSummaryDetails()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testTextArea_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::TextArea("textform", "This is simple text.")
                               .toString().simplified() << "<textarea cols=\"20\" name=\"textform\" rows=\"2\">This is simple text.</textarea>";
}

void QtHtmlTests::testTextArea()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testTime_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Time") << QtHtml::Time("20:00", "20:00").toString().simplified() << "<time datetime=\"20:00\">20:00</time>";
    QTest::newRow("Date") << QtHtml::Time("2018-07-07", "July 7").toString().simplified() << "<time datetime=\"2018-07-07\">July 7</time>";
}

void QtHtmlTests::testTime()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testTitle_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Title("HTML5").toString().simplified() << "<title>HTML5</title>";
}

void QtHtmlTests::testTitle()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

QTEST_APPLESS_MAIN(QtHtmlTests)

#include "main.moc"
