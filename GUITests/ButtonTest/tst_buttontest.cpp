#include <QtTest>
#include "../../QtDemo/mainwindow.h"
#include "ui_mainwindow.h"

// add necessary includes here

class ButtonTest : public QObject
{
  Q_OBJECT
  MainWindow w;

public:
  ButtonTest();
  ~ButtonTest();

private slots:
  void init();
  void test_case1();
};

void ButtonTest::init()
{
  w.ui->lineEdit->clear();
}

ButtonTest::ButtonTest()
{
}

ButtonTest::~ButtonTest()
{
}

void ButtonTest::test_case1()
{
  w.ui->pushButton->click();
  QCOMPARE(w.ui->lineEdit->text(), QString("Button clicked!"));
}

QTEST_MAIN(ButtonTest)

#include "tst_buttontest.moc"
