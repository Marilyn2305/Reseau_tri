#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>
#include <QFont>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton *_ui_quit;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   QPushButton quit("Quitter");
   quit.resize(75, 30);
   quit.setFont(QFont("Times", 18, QFont::Bold));

   QObject::connect(&quit, SIGNAL(clicked()), &app, SLOT(quit()));

   quit.show();
   return app.exec();
}
