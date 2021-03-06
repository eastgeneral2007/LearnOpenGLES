#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class Triangle;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);
private:
    void glRender();
private slots:

private:
    Ui::MainWindow *ui=nullptr;
    Triangle* m_triangle=nullptr;
};
#endif
