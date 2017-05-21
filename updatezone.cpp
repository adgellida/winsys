#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"Remove-Item scripts -recurse\"");
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"$down = New-Object System.Net.WebClient; $url = 'https://github.com/adgellida/windowsScripts/archive/master.zip'; $file = 'master.zip'; $down.DownloadFile($url,$file); exit;\"");
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"Expand-Archive master.zip -DestinationPath scripts\"");
    system("mkdir downloads");
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"Remove-Item master.zip\"");
    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));
}

void MainWindow::on_updateAppButton_clicked()
{
    ui->statusBar->showMessage(tr("Function not implemented yet. May be an update is present"));
}
