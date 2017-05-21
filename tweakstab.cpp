#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QProcess>

QString privateFirewallStatus, publicFirewallStatus, domainFirewallStatus;

///////////////////////TWEAKS TAB///////////////////////

//QDir::setCurrent("C:/Windows");

void MainWindow::on_enableFirewallButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling firewall."));
    system("NetSh Advfirewall set allprofiles state on");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_disableFirewallButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling firewall."));
    system("NetSh Advfirewall set allprofiles state off");
    //system("NetSh Advfirewall set allprofiles state off & pause");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

//PENDING
void MainWindow::on_getFirewallStatusButton_clicked()
{
    ui->statusBar->showMessage(tr("Getting firewall status."));

    QProcess process;
    //process.start("cmd /c WHOAMI");
    //process.start("CMD /C PowerShell -NoProfile -ExecutionPolicy Bypass -Command" << "./ps.ps1");

    process.waitForFinished(-1);
    QByteArray out = process.readAllStandardOutput();

    qDebug() << out;
    //qDebug() << privateFirewallStatus;

}

void MainWindow::on_completeShutdownButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing complete shutdown."));
    system("shutdown /s /t 0");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_openRegeditButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening regedit."));
    system("start regedit");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_openTaskmgrButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening task manager.."));
    system("start taskmgr");
    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

//PENDING
void MainWindow::on_restartExplorerButton_clicked()
{
    ui->statusBar->showMessage(tr("Restarting explorer"));

    system("reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Lsa /v LimitBlankPasswordUse /t REG_DWORD /d 0 /f"
           "&"
           "gpupdate /force"
           "&"
           "taskkill /f /IM explorer.exe"
           "&&"
           "runas /user:usuario start explorer.exe");
           //"&"
           //Set to default policy
           //"reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Lsa /v LimitBlankPasswordUse /t REG_DWORD /d 1 /f"
           //"&"
           //"gpupdate /force");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//PENDING
void MainWindow::on_startExplorerButton_clicked()
{
    ui->statusBar->showMessage(tr("Starting explorer"));

    system("start explorer.exe");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_knowLicenceExpirationButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening license info.."));
    //@echo off
    system("start SLMGR -XPR");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("Starting services"));
    system("start services.msc");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openCmdButton_clicked()
{
    ui->statusBar->showMessage(tr("Starting cmd"));
    system("cmd");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openPowershellButton_clicked()
{
    ui->statusBar->showMessage(tr("Starting Powershell"));
    system("powershell");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//PENDING
void MainWindow::on_fixTimeOnDualbootButton_clicked()
{
    ui->statusBar->showMessage(tr("To implement yet"));
}

//PENDING
void MainWindow::on_updateSystemTimeButton_clicked()
{
   ui->statusBar->showMessage(tr("updating system time"));   
   system("sc config tzautoupdate start= auto & net start tzautoupdate");
   system("sc config w32time start= auto & net start w32time");
   //system("w32tm /resync");

   ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//PENDING
void MainWindow::on_restoreDefaultsServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("Restore Defaults Services"));
    system("regedit /s Windows_Update.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_RestartButton_clicked()
{
    ui->statusBar->showMessage(tr("Restarting"));
    system("shutdown /r");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_searchUpdatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Searching Updates"));
    system("explorer ms-settings:windowsupdate-action");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_enableFastStartupButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling Fast Startup"));
    system("cd scripts\\windowsScripts-master & start 004.Turn_On_Fast_Startup.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableFastStartupButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling Fast Startup"));
    system("cd scripts\\windowsScripts-master & start 005.Turn_Off_Fast_Startup.bat");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_enableSystemRestoreButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling System Restore"));
    system("cd scripts\\windowsScripts-master & start regedit /s 006.Enable_System_Restore.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableSystemRestoreButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling System Restore"));
    system("cd scripts\\windowsScripts-master & start regedit /s 007.Disable_System_Restore.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_smartscreenBlockButton_clicked()
{
    ui->statusBar->showMessage(tr("Smartscreen Block"));
    system("cd scripts\\windowsScripts-master & start regedit /s 008.Set_SmartScreen_to_Block.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_smartscreenWarnButton_clicked()
{
    ui->statusBar->showMessage(tr("Smartscreen Warn"));
    system("cd scripts\\windowsScripts-master & start regedit /s 009.Set_SmartScreen_to_Warn.reg & exit");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_smartscreenOffButton_clicked()
{
    ui->statusBar->showMessage(tr("Smartscreen Off"));
    system("cd scripts\\windowsScripts-master & start regedit /s 010.Turn_SmartScreen_Off.reg");
    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_RestoreTweaksToDefaultButton_clicked()
{
    MainWindow::on_enableFirewallButton_clicked();
    MainWindow::on_enableFastStartupButton_clicked();
    MainWindow::on_enableSystemRestoreButton_clicked();
    MainWindow::on_smartscreenWarnButton_clicked();
}
