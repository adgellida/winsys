#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QTabBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->hide();

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //Configure tabs open

    QTabWidget *tabw = ui->tabWidget;
    tabw->setTabText(0, "");
    tabw->setTabText(1, "");
    tabw->setTabText(2, "");
    tabw->setTabText(3, "");
    tabw->setTabText(4, "");
    tabw->setTabText(5, "");
    tabw->setTabText(6, "");
    tabw->setTabText(7, "");

    QTabBar *tabbar = tabw->tabBar();

    QLabel *lbl1 = new QLabel();
    lbl1->setStyleSheet("QLabel { background:transparent }");
    lbl1->setText("Packages");
    tabbar->setTabButton(0, QTabBar::LeftSide, lbl1);

    QLabel *lbl2 = new QLabel();
    lbl2->setStyleSheet("QLabel { background:transparent }");
    lbl2->setText("Sources");
    tabbar->setTabButton(1, QTabBar::LeftSide, lbl2);

    QLabel *lbl3 = new QLabel();
    lbl3->setStyleSheet("QLabel { background:transparent }");
    lbl3->setText("Updates");
    tabbar->setTabButton(2, QTabBar::LeftSide, lbl3);

    QLabel *lbl4 = new QLabel();
    lbl4->setStyleSheet("QLabel { background:transparent }");
    lbl4->setText("Fixes");
    tabbar->setTabButton(3, QTabBar::LeftSide, lbl4);

    QLabel *lbl5 = new QLabel();
    lbl5->setStyleSheet("QLabel { background:transparent }");
    lbl5->setText("Security");
    tabbar->setTabButton(4, QTabBar::LeftSide, lbl5);

    QLabel *lbl6 = new QLabel();
    lbl6->setStyleSheet("QLabel { background:transparent }");
    lbl6->setText("Power");
    tabbar->setTabButton(5, QTabBar::LeftSide, lbl6);

    QLabel *lbl7 = new QLabel();
    lbl7->setStyleSheet("QLabel { background:transparent }");
    lbl7->setText("Extras");
    tabbar->setTabButton(6, QTabBar::LeftSide, lbl7);


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
        on_updateScriptsButton_clicked();
    }

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

void MainWindow::checkServicesStatus()
{

    ui->statusBar->showMessage(tr("Running DriverPack Online"));
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"cd scripts\\windowsScripts-master; & ./getWindowsUpdateStatus.ps1; sleep 2;""\"");
    ui->statusBar->showMessage(tr("Done. Now select another action"));




    QFile fileUpdate(QDir::homePath() + "/status/updateStatus.txt");
    //QLabel *testLabel= new QLabel;

    QString lineUpdate1;
        if (fileUpdate.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileUpdate);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineUpdate1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileUpdate.close();

    QString lineUpdate2 = "Running";

    if (lineUpdate1 == lineUpdate2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBox_007->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBox_007->setChecked(false);
    }

    qDebug() << lineUpdate1;
    qDebug() << lineUpdate2;

}


void MainWindow::on_actionTwitter_triggered()
{
    QDesktopServices::openUrl(QUrl("https://www.twitter.com/winsyss_app", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Go to winsys twitter. Please wait."));
}


MainWindow::~MainWindow()
{
    delete ui;
}
