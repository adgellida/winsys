#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->hide();

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //Update scripts
    on_updateScriptsButton_clicked();

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));

    //Check if update present and install if proceed - PENDING

    //checkInstallAppUpdate();

    //system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"& ./updateWinsys.ps1; sleep 2;""\"");

}

void MainWindow::checkInstallAppUpdate()    //Not used
{
    QFile file2 (QDir::currentPath() + "\\updatePresent.txt");

    if(file2.exists()){

        ui->statusBar->showMessage(tr("Updating"));

        //Run script to update here, chocolatey?

        QMessageBox::information(this,tr("winsys app update"),tr("Now you have to close & reopen app \n") + tr("and check if update is ok."));

        ui->statusBar->showMessage(tr("Reopen app when terminal closes to check if winsys was updated to latest version."));
    }

    else{

    QMessageBox::information(this,tr("Notification"),tr("You are running the latest version, no update needed. Remember that every time you open the app an update notification is shown if it exists."));

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}





