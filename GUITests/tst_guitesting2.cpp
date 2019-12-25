#include <QtTest>
#include "../QtDemo/mainwindow.h"
#include "ui_mainwindow.h"

// add necessary includes here

class GUITesting1 : public QObject
{
  Q_OBJECT
  MainWindow w;

public:
  GUITesting1();
  ~GUITesting1();

private slots:
  void test_case1();
  void test_case2();
};

GUITesting1::GUITesting1()
{
}

GUITesting1::~GUITesting1()
{
}

void GUITesting1::test_case1()
{
  QTest::keyClicks(w.ui->lineEdit, "hello worl");
  QCOMPARE(w.ui->lineEdit->text(), QString("hello world"));
}

void GUITesting1::test_case2()
{
  QTest::keyClicks(w.ui->lineEdit, "hello world");
  QCOMPARE(w.ui->lineEdit->text(), QString("hello world"));
}

QTEST_MAIN(GUITesting1)
#include "tst_guitesting1.moc"
