#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////INSTALL TAB///////////////////////

void MainWindow::on_installChocolateyButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing Chocolatey"));
    system("cd scripts\\windowsScripts-master & 001.installChocolatey_cmd.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runDriverPackOnlineButton_clicked()
{
    ui->statusBar->showMessage(tr("Running DriverPack Online"));
    system("cd scripts\\windowsScripts-master & 002.runDriverpackOnline.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_installSelectedPackagesButton_clicked()
{


}

void MainWindow::on_unselectAllButton_clicked()
{



}

void MainWindow::on_selectAllButton_clicked()
{



}

void MainWindow::on_loadSelectionButton_clicked()
{



}

//not implemented yet

void MainWindow::on_uninstallSelectedPackagesButton_clicked()
{

}

//not implemented yet

void MainWindow::on_saveSelectionButton_clicked()
{

}
