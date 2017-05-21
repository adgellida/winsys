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

//ChrisPC
void MainWindow::on_installChrisPCButton_clicked()
{
    ui->statusBar->showMessage(tr("Running DriverPack Online"));
    system("cd scripts\\windowsScripts-master & 003.installChrisPC.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runChrisPCButton_clicked()
{
    ui->statusBar->showMessage(tr("Running ChrisPC Win Experience Index"));
    system("cd C:\\Program Files (x86)\\ChrisPC Win Experience Index & ChrisPCWEI.exe");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}
//

//thewindowsclub

void MainWindow::on_runUltimateWindowsTweaker4Button_clicked()
{
    ui->statusBar->showMessage(tr("Running ChrisPC Win Experience Index"));
    system("cd scripts\\windowsScripts-master & 011.runUltimateWindowsTweaker4.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_run10AppsManager_clicked()
{
    ui->statusBar->showMessage(tr("Running 10AppsManager"));
    system("cd scripts\\windowsScripts-master & 012.run10AppsManager.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runWindosUpdateMiniToolButton_clicked()
{
    ui->statusBar->showMessage(tr("Running WindosUpdateMiniTool"));
    // system("cd scripts\\windowsScripts-master & 013.runWindowsUpdateMiniTool.bat");
    system("cd downloads & start wumt_x64.exe");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runProcessExplorerButton_clicked()
{
    ui->statusBar->showMessage(tr("Running Process Explorer"));
    system("cd scripts\\windowsScripts-master & 014.runProcessExplorer.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runProcessHackerButton_clicked()
{
    ui->statusBar->showMessage(tr("Running Process Hacker"));
    system("cd scripts\\windowsScripts-master & 015.runProcessHacker.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runServiwinButton_clicked()
{
    ui->statusBar->showMessage(tr("Running serviwin"));
    system("cd scripts\\windowsScripts-master & 016.runServiwin.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}


//

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
