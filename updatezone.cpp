#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"echo 'Please wait... Stage 1/3'; Remove-Item scripts -recurse\"");
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"echo 'Please wait... Stage 2/3'; $down = New-Object System.Net.WebClient; $url = 'https://github.com/adgellida/windowsScripts/archive/master.zip'; $file = 'master.zip'; $down.DownloadFile($url,$file); exit;\"");
    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"echo 'Please wait... Stage 3/3'; Expand-Archive master.zip -DestinationPath scripts; mkdir downloads; Remove-Item master.zip\"");
//  system("mkdir downloads");
//  system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"Remove-Item master.zip\"");
    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));
}

void MainWindow::on_updateAppButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/winsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
