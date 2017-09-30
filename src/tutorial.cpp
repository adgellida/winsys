#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText(tr("<p align='left'><b>winsys</b></p></br>"
                  "<p align='left'>Click <a href='https://github.com/adgellida/winsys/wiki/Tutorial_en'>here</a> to go to wiki."));

    information.setWindowTitle(tr("Tutorial"));
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/winsys.png"));
    information.setWindowIcon(QIcon(":/images/winsys.png"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
