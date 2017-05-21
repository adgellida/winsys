#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText("<p align='left'><b>winsys</b></p></br>"
                  "<p align='left'>Recommended steps:</p></br>"
                  "<p align='left'>1. Push on 'Update scripts' button each time you open app.</p></br>"
                  "<p align='left'>This button is near the program version (green up arrow)</p></br>"
                  "<p align='left'>\n</p></br>"
                  "<p align='left'>To be continued...</p></br>");

    information.setWindowTitle("Tutorial");
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/winsys.ico"));
    information.setWindowIcon(QIcon(":/images/winsys.ico"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
