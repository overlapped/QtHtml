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

Q_DECLARE_METATYPE(QtHtml::Abbreviation)

QTEST_APPLESS_MAIN(QtHtmlTests)

#include "main.moc"
