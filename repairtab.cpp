#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////REPAIR TAB///////////////////////

void MainWindow::on_integrityCheckButton_clicked()
{
//  Reboots and checks integrity system
    ui->statusBar->showMessage(tr("Checking integrity system"));
    //system("DISM /Online /Cleanup-Image /RestoreHealth & pause"); 64 bits problem
    //system("mklink cmdin64.exe 'c:\Windows\System32\cmd.exe'");
    system("SFC /ScanNow & pause");
    //system("dism.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}
