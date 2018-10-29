#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{
    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"& ./022.downloadLatestWindowsScripts.ps1; sleep 2;""\"");

    //system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"$down = New-Object System.Net.WebClient; $url = 'https://raw.githubusercontent.com/adgellida/windowsScripts/master/022.downloadLatestWindowsScripts.ps1'; $file = '022.downloadLatestWindowsScripts.ps1'; $down.DownloadFile($url,$file); & ./022.downloadLatestWindowsScripts.ps1; sleep 2;""\"");
	
	//system("@powershell -NoProfile -ExecutionPolicy Bypass -Command \"$down = New-Object System.Net.WebClient; $url = 'https://raw.githubusercontent.com/adgellida/windowsScripts/master/022.downloadLatestWindowsScripts.ps1'; iex $down.DownloadString($url); sleep 2;""\"");
}

void MainWindow::on_updateAppButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/winsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
