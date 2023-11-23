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

    QTest::newRow("simple") << QtHtml::Abbreviation("HTML5").toString() << "<abbr>HTML5</abbr>\n";
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

    QTest::newRow("simple") << QtHtml::Address("HTML5").toString() << "<address>HTML5</address>\n";
}

void QtHtmlTests::testAddress()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testTime_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("simple time") << QtHtml::Time("20:00", "20:00").toString() << "<time datetime=\"20:00\">20:00</time>\n";
    QTest::newRow("simple date") << QtHtml::Time("2018-07-07", "July 7").toString() << "<time datetime=\"2018-07-07\">July 7</time>\n";
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

    QTest::newRow("simple") << QtHtml::Title("HTML5").toString() << "<title>HTML5</title>\n";
}

void QtHtmlTests::testTitle()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

QTEST_APPLESS_MAIN(QtHtmlTests)

#include "main.moc"
