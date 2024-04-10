#include <QtTest>
#include <QHtmlWriter>
#ifdef QTHTMLBS5_LIBRARY
#include <QHtmlWriterBootstrap5>
#endif

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

    void testFooter_data();
    void testFooter();

    void testSmall_data();
    void testSmall();

    void testSpan_data();
    void testSpan();

    void testStrikeout_data();
    void testStrikeout();

    void testStrong_data();
    void testStrong();

    void testStyle_data();
    void testStyle();

    void testSummaryDetails_data();
    void testSummaryDetails();

    void testTextArea_data();
    void testTextArea();

    void testTime_data();
    void testTime();

    void testTitle_data();
    void testTitle();

#ifdef QTHTMLBS5_LIBRARY
    void testAlertBs5_data();
    void testAlertBs5();

    void testButtonBs5_data();
    void testButtonBs5();

    void testCloseButtonBs5_data();
    void testCloseButtonBs5();

    void testContainerBs5_data();
    void testContainerBs5();
#endif
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

void QtHtmlTests::testFooter_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple tag") << QtHtml::Footer().toString().simplified() << "<footer></footer>";
    QTest::newRow("Inside another") << (QtHtml::Footer() << QtHtml::Paragraph("HTML5")).toString().simplified() << "<footer> <p>HTML5</p> </footer>";
}

void QtHtmlTests::testFooter()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testSmall_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Small("HTML5").toString().simplified() << "<small>HTML5</small>";
}

void QtHtmlTests::testSmall()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testSpan_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Span("HTML5").toString().simplified() << "<span>HTML5</span>";
}

void QtHtmlTests::testSpan()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testStrikeout_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Strikeout("HTML5").toString().simplified() << "<s>HTML5</s>";
}

void QtHtmlTests::testStrikeout()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testStrong_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Strong("HTML5").toString().simplified() << "<strong>HTML5</strong>";
}

void QtHtmlTests::testStrong()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testStyle_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple text") << QtHtml::Style("p { color: #26b72b; }").toString().simplified() << "<style>p { color: #26b72b; }</style>";
}

void QtHtmlTests::testStyle()
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

#ifdef QTHTMLBS5_LIBRARY
void QtHtmlTests::testAlertBs5_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple") << QtHtml::AlertBs5(QtHtml::AlertBs5::AlertType::Info, "HTML5").toString().simplified() << "<div class=\"alert alert-info\" role=\"alert\">HTML5</div>";
}

void QtHtmlTests::testAlertBs5()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testButtonBs5_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Type") << QtHtml::ButtonBs5(QtHtml::ButtonBs5::ButtonType::Info, "HTML5").toString().simplified() << "<button class=\"btn btn-info\" type=\"button\">HTML5</button>";
    QTest::newRow("Size") << QtHtml::ButtonBs5(QtHtml::ButtonBs5::ButtonType::Info, "HTML5").setSize(QtHtml::ButtonBs5::ButtonSize::Small).toString().simplified()
                          << "<button class=\"btn btn-sm btn-info\" type=\"button\">HTML5</button>";
}

void QtHtmlTests::testButtonBs5()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testCloseButtonBs5_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple") << QtHtml::CloseButtonBs5().toString().simplified() << "<button aria-label=\"Close\" class=\"btn-close\" type=\"button\"></button>";
}

void QtHtmlTests::testCloseButtonBs5()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}

void QtHtmlTests::testContainerBs5_data()
{
    QTest::addColumn<QString>("content");
    QTest::addColumn<QString>("result");

    QTest::newRow("Simple") << QtHtml::CloseButtonBs5().toString().simplified() << "<button aria-label=\"Close\" class=\"btn-close\" type=\"button\"></button>";
}

void QtHtmlTests::testContainerBs5()
{
    QFETCH(QString, content);
    QFETCH(QString, result);

    QCOMPARE(content, result);
}
#endif

QTEST_APPLESS_MAIN(QtHtmlTests)

#include "main.moc"
