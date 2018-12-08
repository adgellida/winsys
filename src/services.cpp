#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////SERVICES TAB///////////////////////

void MainWindow::checkServicesStatus()
{
    checkServiceSysMain();
    checkServiceBits();
    checkServiceWSearch();
    checkServiceWuauserv();
}


//##begin SysMain
void MainWindow::checkServiceSysMain()
{
    ui->statusBar->showMessage(tr("Running"));
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"cd scripts\\windowsScripts-master; & ./getSysMainStatus.ps1; sleep 2;""\"");
    ui->statusBar->showMessage(tr("Done. Now select another action"));

    QFile file(QDir::currentPath() + "/scripts/windowsScripts-master/SysMainStatus.txt");

    QString line1;
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line1.append(stream.readLine());
        }
    }
    file.close();

    QString line2 = "Running";

    if (line1 == line2){

        ui->checkBox_SysMain->setChecked(true);
    }

    else{

        ui->checkBox_SysMain->setChecked(false);
    }
    qDebug() << file;
    qDebug() << line1;
    qDebug() << line2;
}

void MainWindow::on_checkBox_SysMain_clicked(bool checked)
{
    if (checked == false){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config sysmain start= disabled & net stop sysmain");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    else if (checked == true){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config sysmain start= auto & net start sysmain");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

  checkServiceSysMain();

  }
//##end SysMain


//##begin Bits
void MainWindow::checkServiceBits()
{
    ui->statusBar->showMessage(tr("Running"));
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"cd scripts\\windowsScripts-master; & ./getBitsStatus.ps1; sleep 2;""\"");
    ui->statusBar->showMessage(tr("Done. Now select another action"));

    QFile file(QDir::currentPath() + "/scripts/windowsScripts-master/BitsStatus.txt");

    QString line1;
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line1.append(stream.readLine());
        }
    }
    file.close();

    QString line2 = "Running";

    if (line1 == line2){

        ui->checkBox_Bits->setChecked(true);
    }

    else{

        ui->checkBox_Bits->setChecked(false);
    }
    qDebug() << file;
    qDebug() << line1;
    qDebug() << line2;
}

void MainWindow::on_checkBox_Bits_clicked(bool checked)
{
    if (checked == false){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config bits start= disabled & net stop bits");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    else if (checked == true){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config bits start= delayed-auto & net start bits");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

  checkServiceBits();

  }
//##end Bits


//##begin WSearch
void MainWindow::checkServiceWSearch()
{
    ui->statusBar->showMessage(tr("Running"));
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"cd scripts\\windowsScripts-master; & ./getWSearchStatus.ps1; sleep 2;""\"");
    ui->statusBar->showMessage(tr("Done. Now select another action"));

    QFile file(QDir::currentPath() + "/scripts/windowsScripts-master/WSearchStatus.txt");

    QString line1;
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line1.append(stream.readLine());
        }
    }
    file.close();

    QString line2 = "Running";

    if (line1 == line2){

        ui->checkBox_WSearch->setChecked(true);
    }

    else{

        ui->checkBox_WSearch->setChecked(false);
    }
    qDebug() << file;
    qDebug() << line1;
    qDebug() << line2;
}

void MainWindow::on_checkBox_WSearch_clicked(bool checked)
{
    if (checked == false){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config wsearch start= disabled & net stop wsearch");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    else if (checked == true){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config wsearch start= delayed-auto & net start wsearch");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

  checkServiceWSearch();

  }
//##end WSearch


//##begin Wuauserv
void MainWindow::checkServiceWuauserv()
{
    ui->statusBar->showMessage(tr("Running"));
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"cd scripts\\windowsScripts-master; & ./getWuauservStatus.ps1; sleep 2;""\"");
    ui->statusBar->showMessage(tr("Done. Now select another action"));

    QFile file(QDir::currentPath() + "/scripts/windowsScripts-master/WuauservStatus.txt");

    QString line1;
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line1.append(stream.readLine());
        }
    }
    file.close();

    QString line2 = "Running";

    if (line1 == line2){

        ui->checkBox_Wuauserv->setChecked(true);
    }

    else{

        ui->checkBox_Wuauserv->setChecked(false);
    }
    qDebug() << file;
    qDebug() << line1;
    qDebug() << line2;
}

void MainWindow::on_checkBox_Wuauserv_clicked(bool checked)
{
    if (checked == false){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config wuauserv start= disabled & net stop wuauserv");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    else if (checked == true){
        qDebug() << checked;
        ui->statusBar->showMessage(tr("Running"));
        system("sc config wuauserv start= delayed-auto & net start wuauserv");
        ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

  checkServiceWuauserv();

  }
//##end Wuauserv




void MainWindow::on_disableAllServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("All services disabled"));
    system("sc config sysmain start= disabled & net stop sysmain");
    ui->checkBox_SysMain->setChecked(false);
    system("sc config bits start= disabled & net stop bits");
    ui->checkBox_Bits->setChecked(false);
    system("sc config wsearch start= disabled & net stop wsearch");
    ui->checkBox_WSearch->setChecked(false);
    system("sc config wuauserv start= disabled & net stop wuauserv");
    ui->checkBox_Wuauserv->setChecked(false);
    checkServicesStatus();
}

void MainWindow::on_enableAllServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("All services enabled"));
    system("sc config sysmain start= auto & net start sysmain");
    ui->checkBox_SysMain->setChecked(true);
    system("sc config bits start= delayed-auto & net start bits");
    ui->checkBox_Bits->setChecked(true);
    ui->checkBox_WSearch->setChecked(true);
    system("sc config wsearch start= delayed-auto & net start wsearch");
    ui->checkBox_Wuauserv->setChecked(true);
    system("sc config wuauserv start= delayed-auto & net start wuauserv");
    checkServicesStatus();
}

void MainWindow::on_RestoreThisServicesToDefaultButton_clicked()
{
    ui->statusBar->showMessage(tr("Applying settings. Please wait"));

    //001.Superfetch - SysMain - DEFAULT ON

    system("sc config sysmain start= auto & net start sysmain");
    ui->checkBox_SysMain->setChecked(false);

    //003.BITS - DEFAULT ON

    system("sc config bits start= delayed-auto & net start bits");
    ui->checkBox_Bits->setChecked(false);

    //005.Windows Search - WSearch - DEFAULT ON

    system("sc config wsearch start= delayed-auto & net start wsearch");
    ui->checkBox_WSearch->setChecked(false);

    //007.Windows Update - wuauserv - DEFAULT ON

    system("sc config wuauserv start= delayed-auto & net start wuauserv");
    ui->checkBox_Wuauserv->setChecked(false);

    checkServicesStatus();

    ui->statusBar->showMessage(tr("Settings applied. Select another action"));
}

void MainWindow::on_RestoreAllServicesToDefaultButton_clicked()
{
    ui->statusBar->showMessage(tr("Smartscreen Block"));
    system("cd scripts\\windowsScripts-master\\Windows_10_default_services & start regedit /s *.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_loadServicesSelectionButton_clicked()
{
    qDebug() << "load selection pushed";

    ui->statusBar->showMessage(tr("Predefined selection loaded. Push Apply if you're agree."));

    on_disableAllServicesButton_clicked();
    ui->checkBox_SysMain->setChecked(false);
    ui->checkBox_Bits->setChecked(false);
    ui->checkBox_WSearch->setChecked(false);
    ui->checkBox_Wuauserv->setChecked(false);

}
