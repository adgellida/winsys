#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText(tr("<p align='left'><b>winsys</b></p></br>"
                  "<p align='left'>Recommended steps:</p></br>"
                  "<p align='left'>1. Install or run the apps you want..</p></br>"
                  "<p align='left'>2. Execute all tweaks you want, you can select manually, load a preconfigured selection (on future you can select yours), or restore to default system configuration.</p></br>"
                  "<p align='left'>3. Enable-disable services you want, load a preconfigured selection, restore to default services status you see, restore to default all services status existent on system (Not tested).</p></br>"));

    information.setWindowTitle(tr("Tutorial"));
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/winsys.ico"));
    information.setWindowIcon(QIcon(":/images/winsys.ico"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
