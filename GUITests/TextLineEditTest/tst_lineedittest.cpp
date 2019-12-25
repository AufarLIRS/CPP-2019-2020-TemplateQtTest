#include <QtTest>
#include "../../QtDemo/mainwindow.h"
#include "ui_mainwindow.h"

// add necessary includes here

class LineEditTest : public QObject
{
  Q_OBJECT
  MainWindow w;

public:
  LineEditTest();
  ~LineEditTest();

private slots:
  void init();
  void test_case1();
  void test_case2();
};

void LineEditTest::init()
{
  w.ui->lineEdit->clear();
}

LineEditTest::LineEditTest()
{
}

LineEditTest::~LineEditTest()
{
}

void LineEditTest::test_case1()
{
  QTest::keyClicks(w.ui->lineEdit, "hello worl");
  QCOMPARE(w.ui->lineEdit->text(), QString("hello world"));
}

void LineEditTest::test_case2()
{
  QTest::keyClicks(w.ui->lineEdit, "hello world");
  QCOMPARE(w.ui->lineEdit->text(), QString("hello world"));
}

QTEST_MAIN(LineEditTest)

#include "tst_lineedittest.moc"
