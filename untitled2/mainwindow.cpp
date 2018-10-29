#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/chinese.qm");//设定初始语言为Chinese
    qApp->installTranslator(translator);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/english.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionChinese_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/chinese.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionJapan_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/japanese.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionSimple_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/simple.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionFrench_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../untitled2/french.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}
