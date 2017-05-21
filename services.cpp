#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////SERVICES TAB///////////////////////

void MainWindow::on_applyButton_clicked()
{
    ui->statusBar->showMessage(tr("Applying settings. Please wait"));

    //001.Superfetch - SysMain - ENABLE
    if (ui->checkBox_001->isChecked())
    {
        system("sc config sysmain start= auto & net start sysmain");
        ui->checkBox_001->setChecked(false);
    }

    //002.Superfetch - SysMain - DISABLE
    if (ui->checkBox_002->isChecked())
    {
        system("sc config sysmain start= disabled & net stop sysmain");
        ui->checkBox_002->setChecked(false);
    }

    //003.BITS - ENABLE
    if (ui->checkBox_003->isChecked())
    {
        system("sc config bits start= delayed-auto & net start bits");
        ui->checkBox_003->setChecked(false);
    }

    //004.BITS - DISABLE
    if (ui->checkBox_004->isChecked())
    {
        system("sc config bits start= disabled & net stop bits");
        ui->checkBox_004->setChecked(false);
    }

    //005.Windows Search - WSearch - ENABLE
    if (ui->checkBox_005->isChecked())
    {
        system("sc config wsearch start= delayed-auto & net start wsearch");
        ui->checkBox_005->setChecked(false);
    }

    //006.Windows Search - WSearch - DISABLE
    if (ui->checkBox_006->isChecked())
    {
        system("sc config wsearch start= disabled & net stop wsearch");
        ui->checkBox_006->setChecked(false);
    }

    //007.Windows Update - wuauserv - ENABLE
    if (ui->checkBox_007->isChecked())
    {
         system("sc config wuauserv start= delayed-auto & net start wuauserv");
         ui->checkBox_007->setChecked(false);
    }

    //008.Windows Update - wuauserv - DISABLE
    if (ui->checkBox_008->isChecked())
    {
         system("sc config wuauserv start= disabled & net stop wuauserv");
         ui->checkBox_008->setChecked(false);
    }

    ui->statusBar->showMessage(tr("Settings applied. Select another action"));
}

void MainWindow::on_disableAllServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("All services disabled"));

    ui->checkBox_001->setChecked(false);
    ui->checkBox_002->setChecked(true);
    ui->checkBox_003->setChecked(false);
    ui->checkBox_004->setChecked(true);
    ui->checkBox_005->setChecked(false);
    ui->checkBox_006->setChecked(true);
    ui->checkBox_007->setChecked(false);
    ui->checkBox_008->setChecked(true);
}

void MainWindow::on_enableAllServicesButton_clicked()
{
    ui->statusBar->showMessage(tr("All services enabled"));

    ui->checkBox_001->setChecked(true);
    ui->checkBox_002->setChecked(false);
    ui->checkBox_003->setChecked(true);
    ui->checkBox_004->setChecked(false);
    ui->checkBox_005->setChecked(true);
    ui->checkBox_006->setChecked(false);
    ui->checkBox_007->setChecked(true);
    ui->checkBox_008->setChecked(false);
}

void MainWindow::on_RestoreServicesToDefaultButton_clicked()
{
    ui->statusBar->showMessage(tr("Applying settings. Please wait"));

    //001.Superfetch - SysMain - DEFAULT ON

    system("sc config sysmain start= auto & net start sysmain");
    ui->checkBox_001->setChecked(false);

    //003.BITS - DEFAULT ON

    system("sc config bits start= delayed-auto & net start bits");
    ui->checkBox_003->setChecked(false);

    //005.Windows Search - WSearch - DEFAULT ON

    system("sc config wsearch start= delayed-auto & net start wsearch");
    ui->checkBox_005->setChecked(false);

    //007.Windows Update - wuauserv - DEFAULT ON

    system("sc config wuauserv start= delayed-auto & net start wuauserv");
    ui->checkBox_007->setChecked(false);


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

    ui->statusBar->showMessage(tr("Predefined selection loaded"));

    //First

    ui->checkBox_001->setChecked(false);
    ui->checkBox_002->setChecked(true);
    ui->checkBox_003->setChecked(false);
    ui->checkBox_004->setChecked(true);
    ui->checkBox_005->setChecked(false);
    ui->checkBox_006->setChecked(false);
    ui->checkBox_007->setChecked(false);
    ui->checkBox_008->setChecked(true);
}
