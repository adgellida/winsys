#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QTabBar>
#include <dbmanager.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->hide();

    //######## INITIALIZATIONS

    MainWindow::initializeDatabase();
    MainWindow::initializeGUI();





    //Create extra open on future dialogs begin
    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //Check app update and install if proceed BEGIN

    QFile file(QDir::currentPath() + "/chocoupdateok.txt");

    if(!file.exists())
    {
        //Install/Upgrade Package
        system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"& ./027.chocoWinsysPackageInstall.ps1; sleep 2;""\"");
    }
    else
    {
        //Update scripts
        on_actionUpdate_Scripts_triggered();
    }

    //Check services
    //checkServicesStatus();

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));

    //Check if update present and install if proceed - PENDING

    //checkInstallAppUpdate();

    //system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"& ./updateWinsys.ps1; sleep 2;""\"");

}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::on_actionTwitter_triggered()
{
    QDesktopServices::openUrl(QUrl("https://www.twitter.com/winsys_app", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Go to winsys twitter. Please wait."));
}



void MainWindow::on_actionSeeReleases_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/winsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
