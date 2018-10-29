#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionEnglish_triggered();

    void on_actionChinese_triggered();

    void on_actionJapan_triggered();

    void on_actionSimple_triggered();

    void on_actionFrench_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
