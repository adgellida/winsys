#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <QString>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:



private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_actionAbout_triggered();
    void on_integrityCheckButton_clicked();
    void on_unselectAllButton_clicked();
    void on_selectAllButton_clicked();
    void on_installSelectedPackagesButton_clicked();
    void on_uninstallSelectedPackagesButton_clicked();
    void on_loadSelectionButton_clicked();
    void on_saveSelectionButton_clicked();
    void on_enableFirewallButton_clicked();
    void on_disableFirewallButton_clicked();
    void on_getFirewallStatusButton_clicked();
    void on_completeShutdownButton_clicked();
    //void on_applyButton_clicked();
    void on_disableAllServicesButton_clicked();
    void on_enableAllServicesButton_clicked();
    void on_loadServicesSelectionButton_clicked();
    void on_openRegeditButton_clicked();
    void on_openTaskmgrButton_clicked();
    void on_restartExplorerButton_clicked();
    void on_startExplorerButton_clicked();
    void on_knowLicenceExpirationButton_clicked();
    void on_openServicesButton_clicked();
    void on_openCmdButton_clicked();
    void on_openPowershellButton_clicked();
    void on_updateSystemTimeButton_clicked();
    void on_RestartButton_clicked();
    void on_searchUpdatesButton_clicked();
    void on_installChocolateyButton_clicked();
    void on_runDriverPackOnlineButton_clicked();
    void on_updateAppButton_clicked();
    void on_actionTutorial_triggered();
    void on_installChrisPCButton_clicked();
    void on_runChrisPCButton_clicked();
    void on_enableFastStartupButton_clicked();
    void on_disableFastStartupButton_clicked();
    void on_enableSystemRestoreButton_clicked();
    void on_disableSystemRestoreButton_clicked();
    void on_smartscreenBlockButton_clicked();
    void on_smartscreenWarnButton_clicked();
    void on_smartscreenOffButton_clicked();
    void on_run10AppsManager_clicked();
    void on_runUltimateWindowsTweaker4Button_clicked();
    void on_runWindosUpdateMiniToolButton_clicked();
    void on_RestoreTweaksToDefaultButton_clicked();
    void on_RestoreThisServicesToDefaultButton_clicked();
    void on_RestoreAllServicesToDefaultButton_clicked();
    void on_runProcessExplorerButton_clicked();
    void on_runServiwinButton_clicked();
    void on_runProcessHackerButton_clicked();
    void on_UTCButton_clicked();
    void on_GMTButton_clicked();
    void on_loadTweaksSelectionButton_clicked();
    void on_applyTweaksButton_clicked();
    void on_unloadTweaksSelectionButton_clicked();
    void on_runAdwcleaner_clicked();
    void on_ExportOutlookButton_clicked();
    void on_ImportOutlookButton_clicked();
    void on_runOptimizer_clicked();
    void on_runWPD_clicked();
    void checkInstallAppUpdate();
    void on_actionTwitter_triggered();
    void on_installStopUpdates10Button_clicked();
    void on_runStopUpdates10Button_clicked();
    void checkServicesStatus();
    void checkServiceWuauserv();
    void checkServiceSysMain();
    void checkServiceBits();
    void checkServiceWSearch();
    void on_checkBox_Wuauserv_clicked(bool checked);
    void on_checkBox_SysMain_clicked(bool checked);
    void on_checkBox_Bits_clicked(bool checked);
    void on_checkBox_WSearch_clicked(bool checked);

    void on_knowLicenceExpirationButton_2_clicked();

    void on_knowLicenceExpirationButton_3_clicked();

    void on_actionSeeReleases_triggered();

    void on_actionUpdate_Scripts_triggered();

    void on_actionUpdate_Program_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
