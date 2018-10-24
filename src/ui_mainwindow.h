/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionPaste;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionSave_as;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPreferences;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *unselectAllButton;
    QPushButton *selectAllButton;
    QPushButton *installSelectedPackagesButton;
    QPushButton *uninstallSelectedPackagesButton;
    QPushButton *loadSelectionButton;
    QPushButton *saveSelectionButton;
    QTabWidget *tabWidget_2;
    QWidget *tab_11;
    QLabel *label_18;
    QPushButton *runDriverPackOnlineButton;
    QPushButton *installChocolateyButton;
    QPushButton *installChrisPCButton;
    QPushButton *runChrisPCButton;
    QLabel *label_21;
    QPushButton *runUltimateWindowsTweaker4Button;
    QPushButton *run10AppsManager;
    QLabel *label_22;
    QPushButton *runWindosUpdateMiniToolButton;
    QPushButton *runProcessHackerButton;
    QPushButton *runServiwinButton;
    QPushButton *runProcessExplorerButton;
    QPushButton *runAdwcleaner;
    QPushButton *runOptimizer;
    QPushButton *runWPD;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QPushButton *enableFirewallButton;
    QLabel *label_12;
    QPushButton *disableFirewallButton;
    QPushButton *completeShutdownButton;
    QPushButton *openRegeditButton;
    QPushButton *openTaskmgrButton;
    QPushButton *knowLicenceExpirationButton;
    QLabel *label_19;
    QPushButton *openServicesButton;
    QPushButton *openCmdButton;
    QPushButton *openPowershellButton;
    QLabel *label_20;
    QPushButton *RestartButton;
    QPushButton *searchUpdatesButton;
    QPushButton *enableFastStartupButton;
    QPushButton *disableFastStartupButton;
    QPushButton *enableSystemRestoreButton;
    QPushButton *disableSystemRestoreButton;
    QPushButton *smartscreenWarnButton;
    QPushButton *smartscreenBlockButton;
    QPushButton *smartscreenOffButton;
    QWidget *tab_7;
    QPushButton *getFirewallStatusButton;
    QPushButton *updateSystemTimeButton;
    QLabel *label_14;
    QPushButton *startExplorerButton;
    QPushButton *restartExplorerButton;
    QPushButton *UTCButton;
    QLabel *label_15;
    QPushButton *GMTButton;
    QPushButton *ExportOutlookButton;
    QLabel *label_16;
    QPushButton *ImportOutlookButton;
    QPushButton *RestoreTweaksToDefaultButton;
    QPushButton *applyTweaksButton;
    QPushButton *loadTweaksSelectionButton;
    QPushButton *unloadTweaksSelectionButton;
    QWidget *tab_5;
    QTabWidget *tabWidget_6;
    QWidget *tab_14;
    QCheckBox *checkBox_004;
    QCheckBox *checkBox_008;
    QCheckBox *checkBox_002;
    QCheckBox *checkBox_001;
    QCheckBox *checkBox_007;
    QCheckBox *checkBox_003;
    QCheckBox *checkBox_006;
    QCheckBox *checkBox_005;
    QPushButton *loadServicesSelectionButton;
    QPushButton *disableAllServicesButton;
    QPushButton *enableAllServicesButton;
    QPushButton *saveSelectionButton_2;
    QPushButton *applyButton;
    QPushButton *RestoreThisServicesToDefaultButton;
    QPushButton *RestoreAllServicesToDefaultButton;
    QWidget *tab;
    QTabWidget *tabWidget_4;
    QWidget *tab_8;
    QLabel *label_63;
    QWidget *tab_9;
    QLabel *label_62;
    QWidget *tab_10;
    QLabel *label_61;
    QWidget *tab_2;
    QTabWidget *tabWidget_5;
    QWidget *tab_13;
    QLabel *label_2;
    QPushButton *integrityCheckButton;
    QLabel *label;
    QPushButton *updateAppButton;
    QPushButton *updateScriptsButton;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuEdici_n;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(711, 529);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/winsys.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/images/winsys.ico"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionSave_as->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        actionSave->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setEnabled(false);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 701, 471));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        unselectAllButton = new QPushButton(tab_4);
        unselectAllButton->setObjectName(QStringLiteral("unselectAllButton"));
        unselectAllButton->setEnabled(false);
        unselectAllButton->setGeometry(QRect(600, 30, 91, 23));
        selectAllButton = new QPushButton(tab_4);
        selectAllButton->setObjectName(QStringLiteral("selectAllButton"));
        selectAllButton->setEnabled(false);
        selectAllButton->setGeometry(QRect(600, 60, 90, 23));
        installSelectedPackagesButton = new QPushButton(tab_4);
        installSelectedPackagesButton->setObjectName(QStringLiteral("installSelectedPackagesButton"));
        installSelectedPackagesButton->setEnabled(false);
        installSelectedPackagesButton->setGeometry(QRect(600, 120, 90, 23));
        uninstallSelectedPackagesButton = new QPushButton(tab_4);
        uninstallSelectedPackagesButton->setObjectName(QStringLiteral("uninstallSelectedPackagesButton"));
        uninstallSelectedPackagesButton->setEnabled(false);
        uninstallSelectedPackagesButton->setGeometry(QRect(600, 150, 90, 23));
        uninstallSelectedPackagesButton->setCheckable(false);
        loadSelectionButton = new QPushButton(tab_4);
        loadSelectionButton->setObjectName(QStringLiteral("loadSelectionButton"));
        loadSelectionButton->setEnabled(false);
        loadSelectionButton->setGeometry(QRect(600, 210, 90, 23));
        saveSelectionButton = new QPushButton(tab_4);
        saveSelectionButton->setObjectName(QStringLiteral("saveSelectionButton"));
        saveSelectionButton->setEnabled(false);
        saveSelectionButton->setGeometry(QRect(600, 240, 90, 23));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 591, 441));
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_18 = new QLabel(tab_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 70, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_18->setFont(font);
        runDriverPackOnlineButton = new QPushButton(tab_11);
        runDriverPackOnlineButton->setObjectName(QStringLiteral("runDriverPackOnlineButton"));
        runDriverPackOnlineButton->setEnabled(true);
        runDriverPackOnlineButton->setGeometry(QRect(10, 70, 161, 36));
        runDriverPackOnlineButton->setIconSize(QSize(30, 30));
        runDriverPackOnlineButton->setCheckable(false);
        installChocolateyButton = new QPushButton(tab_11);
        installChocolateyButton->setObjectName(QStringLiteral("installChocolateyButton"));
        installChocolateyButton->setEnabled(true);
        installChocolateyButton->setGeometry(QRect(10, 30, 161, 36));
        installChocolateyButton->setIconSize(QSize(30, 30));
        installChocolateyButton->setCheckable(false);
        installChrisPCButton = new QPushButton(tab_11);
        installChrisPCButton->setObjectName(QStringLiteral("installChrisPCButton"));
        installChrisPCButton->setEnabled(true);
        installChrisPCButton->setGeometry(QRect(200, 30, 161, 36));
        installChrisPCButton->setIconSize(QSize(30, 30));
        installChrisPCButton->setCheckable(false);
        runChrisPCButton = new QPushButton(tab_11);
        runChrisPCButton->setObjectName(QStringLiteral("runChrisPCButton"));
        runChrisPCButton->setEnabled(true);
        runChrisPCButton->setGeometry(QRect(200, 70, 161, 36));
        runChrisPCButton->setIconSize(QSize(30, 30));
        runChrisPCButton->setCheckable(false);
        label_21 = new QLabel(tab_11);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(200, 10, 171, 16));
        label_21->setFont(font);
        runUltimateWindowsTweaker4Button = new QPushButton(tab_11);
        runUltimateWindowsTweaker4Button->setObjectName(QStringLiteral("runUltimateWindowsTweaker4Button"));
        runUltimateWindowsTweaker4Button->setEnabled(true);
        runUltimateWindowsTweaker4Button->setGeometry(QRect(200, 140, 161, 36));
        runUltimateWindowsTweaker4Button->setIconSize(QSize(30, 30));
        runUltimateWindowsTweaker4Button->setCheckable(false);
        run10AppsManager = new QPushButton(tab_11);
        run10AppsManager->setObjectName(QStringLiteral("run10AppsManager"));
        run10AppsManager->setEnabled(true);
        run10AppsManager->setGeometry(QRect(200, 180, 161, 36));
        run10AppsManager->setIconSize(QSize(30, 30));
        run10AppsManager->setCheckable(false);
        label_22 = new QLabel(tab_11);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(200, 120, 101, 16));
        label_22->setFont(font);
        runWindosUpdateMiniToolButton = new QPushButton(tab_11);
        runWindosUpdateMiniToolButton->setObjectName(QStringLiteral("runWindosUpdateMiniToolButton"));
        runWindosUpdateMiniToolButton->setEnabled(true);
        runWindosUpdateMiniToolButton->setGeometry(QRect(10, 110, 161, 36));
        runWindosUpdateMiniToolButton->setIconSize(QSize(30, 30));
        runWindosUpdateMiniToolButton->setCheckable(false);
        runProcessHackerButton = new QPushButton(tab_11);
        runProcessHackerButton->setObjectName(QStringLiteral("runProcessHackerButton"));
        runProcessHackerButton->setEnabled(true);
        runProcessHackerButton->setGeometry(QRect(10, 190, 161, 36));
        runProcessHackerButton->setIconSize(QSize(30, 30));
        runProcessHackerButton->setCheckable(false);
        runServiwinButton = new QPushButton(tab_11);
        runServiwinButton->setObjectName(QStringLiteral("runServiwinButton"));
        runServiwinButton->setEnabled(true);
        runServiwinButton->setGeometry(QRect(10, 230, 161, 36));
        runServiwinButton->setIconSize(QSize(30, 30));
        runServiwinButton->setCheckable(false);
        runProcessExplorerButton = new QPushButton(tab_11);
        runProcessExplorerButton->setObjectName(QStringLiteral("runProcessExplorerButton"));
        runProcessExplorerButton->setEnabled(true);
        runProcessExplorerButton->setGeometry(QRect(10, 150, 161, 36));
        runProcessExplorerButton->setIconSize(QSize(30, 30));
        runProcessExplorerButton->setCheckable(false);
        runAdwcleaner = new QPushButton(tab_11);
        runAdwcleaner->setObjectName(QStringLiteral("runAdwcleaner"));
        runAdwcleaner->setEnabled(true);
        runAdwcleaner->setGeometry(QRect(10, 270, 161, 36));
        runAdwcleaner->setIconSize(QSize(30, 30));
        runAdwcleaner->setCheckable(false);
        runOptimizer = new QPushButton(tab_11);
        runOptimizer->setObjectName(QStringLiteral("runOptimizer"));
        runOptimizer->setEnabled(true);
        runOptimizer->setGeometry(QRect(10, 310, 161, 36));
        runOptimizer->setIconSize(QSize(30, 30));
        runOptimizer->setCheckable(false);
        runWPD = new QPushButton(tab_11);
        runWPD->setObjectName(QStringLiteral("runWPD"));
        runWPD->setEnabled(true);
        runWPD->setGeometry(QRect(10, 350, 161, 36));
        runWPD->setIconSize(QSize(30, 30));
        runWPD->setCheckable(false);
        tabWidget_2->addTab(tab_11, QString());
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 591, 441));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_3->setFont(font1);
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        enableFirewallButton = new QPushButton(tab_6);
        enableFirewallButton->setObjectName(QStringLiteral("enableFirewallButton"));
        enableFirewallButton->setGeometry(QRect(10, 30, 120, 36));
        enableFirewallButton->setIconSize(QSize(30, 30));
        enableFirewallButton->setCheckable(false);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 71, 16));
        label_12->setFont(font);
        disableFirewallButton = new QPushButton(tab_6);
        disableFirewallButton->setObjectName(QStringLiteral("disableFirewallButton"));
        disableFirewallButton->setGeometry(QRect(10, 70, 120, 36));
        disableFirewallButton->setIconSize(QSize(30, 30));
        disableFirewallButton->setCheckable(false);
        completeShutdownButton = new QPushButton(tab_6);
        completeShutdownButton->setObjectName(QStringLiteral("completeShutdownButton"));
        completeShutdownButton->setGeometry(QRect(140, 320, 120, 36));
        completeShutdownButton->setIconSize(QSize(30, 30));
        completeShutdownButton->setCheckable(false);
        openRegeditButton = new QPushButton(tab_6);
        openRegeditButton->setObjectName(QStringLiteral("openRegeditButton"));
        openRegeditButton->setGeometry(QRect(140, 240, 120, 36));
        openRegeditButton->setIconSize(QSize(30, 30));
        openRegeditButton->setCheckable(false);
        openTaskmgrButton = new QPushButton(tab_6);
        openTaskmgrButton->setObjectName(QStringLiteral("openTaskmgrButton"));
        openTaskmgrButton->setGeometry(QRect(10, 320, 120, 36));
        openTaskmgrButton->setIconSize(QSize(30, 30));
        openTaskmgrButton->setCheckable(false);
        knowLicenceExpirationButton = new QPushButton(tab_6);
        knowLicenceExpirationButton->setObjectName(QStringLiteral("knowLicenceExpirationButton"));
        knowLicenceExpirationButton->setGeometry(QRect(270, 240, 120, 36));
        knowLicenceExpirationButton->setIconSize(QSize(30, 30));
        knowLicenceExpirationButton->setCheckable(false);
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 220, 111, 16));
        label_19->setFont(font);
        openServicesButton = new QPushButton(tab_6);
        openServicesButton->setObjectName(QStringLiteral("openServicesButton"));
        openServicesButton->setGeometry(QRect(10, 360, 120, 36));
        openServicesButton->setIconSize(QSize(30, 30));
        openServicesButton->setCheckable(false);
        openCmdButton = new QPushButton(tab_6);
        openCmdButton->setObjectName(QStringLiteral("openCmdButton"));
        openCmdButton->setGeometry(QRect(10, 240, 120, 36));
        openCmdButton->setIconSize(QSize(30, 30));
        openCmdButton->setCheckable(false);
        openPowershellButton = new QPushButton(tab_6);
        openPowershellButton->setObjectName(QStringLiteral("openPowershellButton"));
        openPowershellButton->setGeometry(QRect(10, 280, 120, 36));
        openPowershellButton->setIconSize(QSize(30, 30));
        openPowershellButton->setCheckable(false);
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(270, 10, 51, 16));
        label_20->setFont(font);
        RestartButton = new QPushButton(tab_6);
        RestartButton->setObjectName(QStringLiteral("RestartButton"));
        RestartButton->setGeometry(QRect(140, 280, 120, 36));
        RestartButton->setIconSize(QSize(30, 30));
        RestartButton->setCheckable(false);
        searchUpdatesButton = new QPushButton(tab_6);
        searchUpdatesButton->setObjectName(QStringLiteral("searchUpdatesButton"));
        searchUpdatesButton->setGeometry(QRect(270, 280, 120, 36));
        searchUpdatesButton->setIconSize(QSize(30, 30));
        searchUpdatesButton->setCheckable(false);
        enableFastStartupButton = new QPushButton(tab_6);
        enableFastStartupButton->setObjectName(QStringLiteral("enableFastStartupButton"));
        enableFastStartupButton->setGeometry(QRect(270, 30, 120, 36));
        enableFastStartupButton->setIconSize(QSize(30, 30));
        enableFastStartupButton->setCheckable(false);
        disableFastStartupButton = new QPushButton(tab_6);
        disableFastStartupButton->setObjectName(QStringLiteral("disableFastStartupButton"));
        disableFastStartupButton->setGeometry(QRect(270, 70, 120, 36));
        disableFastStartupButton->setIconSize(QSize(30, 30));
        disableFastStartupButton->setCheckable(false);
        enableSystemRestoreButton = new QPushButton(tab_6);
        enableSystemRestoreButton->setObjectName(QStringLiteral("enableSystemRestoreButton"));
        enableSystemRestoreButton->setGeometry(QRect(400, 30, 120, 36));
        enableSystemRestoreButton->setIconSize(QSize(30, 30));
        enableSystemRestoreButton->setCheckable(false);
        disableSystemRestoreButton = new QPushButton(tab_6);
        disableSystemRestoreButton->setObjectName(QStringLiteral("disableSystemRestoreButton"));
        disableSystemRestoreButton->setGeometry(QRect(400, 70, 120, 36));
        disableSystemRestoreButton->setIconSize(QSize(30, 30));
        disableSystemRestoreButton->setCheckable(false);
        smartscreenWarnButton = new QPushButton(tab_6);
        smartscreenWarnButton->setObjectName(QStringLiteral("smartscreenWarnButton"));
        smartscreenWarnButton->setGeometry(QRect(140, 70, 120, 36));
        smartscreenWarnButton->setIconSize(QSize(30, 30));
        smartscreenWarnButton->setCheckable(false);
        smartscreenBlockButton = new QPushButton(tab_6);
        smartscreenBlockButton->setObjectName(QStringLiteral("smartscreenBlockButton"));
        smartscreenBlockButton->setGeometry(QRect(140, 30, 120, 36));
        smartscreenBlockButton->setIconSize(QSize(30, 30));
        smartscreenBlockButton->setCheckable(false);
        smartscreenOffButton = new QPushButton(tab_6);
        smartscreenOffButton->setObjectName(QStringLiteral("smartscreenOffButton"));
        smartscreenOffButton->setGeometry(QRect(140, 110, 120, 36));
        smartscreenOffButton->setIconSize(QSize(30, 30));
        smartscreenOffButton->setCheckable(false);
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        getFirewallStatusButton = new QPushButton(tab_7);
        getFirewallStatusButton->setObjectName(QStringLiteral("getFirewallStatusButton"));
        getFirewallStatusButton->setEnabled(false);
        getFirewallStatusButton->setGeometry(QRect(10, 30, 120, 36));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 170, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 212, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 85, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 113, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(212, 212, 191, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        getFirewallStatusButton->setPalette(palette);
        getFirewallStatusButton->setIconSize(QSize(30, 30));
        getFirewallStatusButton->setCheckable(false);
        updateSystemTimeButton = new QPushButton(tab_7);
        updateSystemTimeButton->setObjectName(QStringLiteral("updateSystemTimeButton"));
        updateSystemTimeButton->setEnabled(false);
        updateSystemTimeButton->setGeometry(QRect(10, 70, 120, 36));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        updateSystemTimeButton->setPalette(palette1);
        updateSystemTimeButton->setIconSize(QSize(30, 30));
        updateSystemTimeButton->setCheckable(false);
        label_14 = new QLabel(tab_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 120, 171, 16));
        label_14->setFont(font);
        startExplorerButton = new QPushButton(tab_7);
        startExplorerButton->setObjectName(QStringLiteral("startExplorerButton"));
        startExplorerButton->setEnabled(false);
        startExplorerButton->setGeometry(QRect(140, 70, 120, 36));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        startExplorerButton->setPalette(palette2);
        startExplorerButton->setIconSize(QSize(30, 30));
        startExplorerButton->setCheckable(false);
        restartExplorerButton = new QPushButton(tab_7);
        restartExplorerButton->setObjectName(QStringLiteral("restartExplorerButton"));
        restartExplorerButton->setEnabled(false);
        restartExplorerButton->setGeometry(QRect(140, 30, 120, 36));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        restartExplorerButton->setPalette(palette3);
        restartExplorerButton->setIconSize(QSize(30, 30));
        restartExplorerButton->setCheckable(false);
        UTCButton = new QPushButton(tab_7);
        UTCButton->setObjectName(QStringLiteral("UTCButton"));
        UTCButton->setGeometry(QRect(10, 140, 120, 36));
        UTCButton->setIconSize(QSize(30, 30));
        UTCButton->setCheckable(false);
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 10, 61, 16));
        label_15->setFont(font);
        GMTButton = new QPushButton(tab_7);
        GMTButton->setObjectName(QStringLiteral("GMTButton"));
        GMTButton->setGeometry(QRect(10, 180, 120, 36));
        GMTButton->setIconSize(QSize(30, 30));
        GMTButton->setCheckable(false);
        ExportOutlookButton = new QPushButton(tab_7);
        ExportOutlookButton->setObjectName(QStringLiteral("ExportOutlookButton"));
        ExportOutlookButton->setGeometry(QRect(10, 250, 120, 36));
        ExportOutlookButton->setIconSize(QSize(30, 30));
        ExportOutlookButton->setCheckable(false);
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 230, 171, 16));
        label_16->setFont(font);
        ImportOutlookButton = new QPushButton(tab_7);
        ImportOutlookButton->setObjectName(QStringLiteral("ImportOutlookButton"));
        ImportOutlookButton->setGeometry(QRect(10, 290, 120, 36));
        ImportOutlookButton->setIconSize(QSize(30, 30));
        ImportOutlookButton->setCheckable(false);
        tabWidget_3->addTab(tab_7, QString());
        RestoreTweaksToDefaultButton = new QPushButton(tab_3);
        RestoreTweaksToDefaultButton->setObjectName(QStringLiteral("RestoreTweaksToDefaultButton"));
        RestoreTweaksToDefaultButton->setGeometry(QRect(600, 150, 90, 41));
        applyTweaksButton = new QPushButton(tab_3);
        applyTweaksButton->setObjectName(QStringLiteral("applyTweaksButton"));
        applyTweaksButton->setGeometry(QRect(600, 100, 90, 23));
        loadTweaksSelectionButton = new QPushButton(tab_3);
        loadTweaksSelectionButton->setObjectName(QStringLiteral("loadTweaksSelectionButton"));
        loadTweaksSelectionButton->setGeometry(QRect(600, 240, 90, 23));
        unloadTweaksSelectionButton = new QPushButton(tab_3);
        unloadTweaksSelectionButton->setObjectName(QStringLiteral("unloadTweaksSelectionButton"));
        unloadTweaksSelectionButton->setGeometry(QRect(600, 270, 90, 23));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_6 = new QTabWidget(tab_5);
        tabWidget_6->setObjectName(QStringLiteral("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 591, 441));
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        checkBox_004 = new QCheckBox(tab_14);
        checkBox_004->setObjectName(QStringLiteral("checkBox_004"));
        checkBox_004->setGeometry(QRect(270, 30, 291, 23));
        checkBox_008 = new QCheckBox(tab_14);
        checkBox_008->setObjectName(QStringLiteral("checkBox_008"));
        checkBox_008->setGeometry(QRect(270, 70, 301, 23));
        checkBox_002 = new QCheckBox(tab_14);
        checkBox_002->setObjectName(QStringLiteral("checkBox_002"));
        checkBox_002->setGeometry(QRect(270, 10, 291, 23));
        checkBox_001 = new QCheckBox(tab_14);
        checkBox_001->setObjectName(QStringLiteral("checkBox_001"));
        checkBox_001->setGeometry(QRect(10, 10, 251, 23));
        checkBox_007 = new QCheckBox(tab_14);
        checkBox_007->setObjectName(QStringLiteral("checkBox_007"));
        checkBox_007->setGeometry(QRect(10, 70, 251, 23));
        checkBox_003 = new QCheckBox(tab_14);
        checkBox_003->setObjectName(QStringLiteral("checkBox_003"));
        checkBox_003->setGeometry(QRect(10, 30, 251, 23));
        checkBox_006 = new QCheckBox(tab_14);
        checkBox_006->setObjectName(QStringLiteral("checkBox_006"));
        checkBox_006->setGeometry(QRect(270, 50, 301, 23));
        checkBox_005 = new QCheckBox(tab_14);
        checkBox_005->setObjectName(QStringLiteral("checkBox_005"));
        checkBox_005->setGeometry(QRect(10, 50, 251, 23));
        tabWidget_6->addTab(tab_14, QString());
        loadServicesSelectionButton = new QPushButton(tab_5);
        loadServicesSelectionButton->setObjectName(QStringLiteral("loadServicesSelectionButton"));
        loadServicesSelectionButton->setGeometry(QRect(600, 260, 90, 23));
        disableAllServicesButton = new QPushButton(tab_5);
        disableAllServicesButton->setObjectName(QStringLiteral("disableAllServicesButton"));
        disableAllServicesButton->setGeometry(QRect(600, 30, 91, 23));
        enableAllServicesButton = new QPushButton(tab_5);
        enableAllServicesButton->setObjectName(QStringLiteral("enableAllServicesButton"));
        enableAllServicesButton->setGeometry(QRect(600, 60, 90, 23));
        saveSelectionButton_2 = new QPushButton(tab_5);
        saveSelectionButton_2->setObjectName(QStringLiteral("saveSelectionButton_2"));
        saveSelectionButton_2->setEnabled(false);
        saveSelectionButton_2->setGeometry(QRect(600, 290, 90, 23));
        applyButton = new QPushButton(tab_5);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(600, 120, 90, 23));
        RestoreThisServicesToDefaultButton = new QPushButton(tab_5);
        RestoreThisServicesToDefaultButton->setObjectName(QStringLiteral("RestoreThisServicesToDefaultButton"));
        RestoreThisServicesToDefaultButton->setGeometry(QRect(600, 150, 90, 41));
        RestoreAllServicesToDefaultButton = new QPushButton(tab_5);
        RestoreAllServicesToDefaultButton->setObjectName(QStringLiteral("RestoreAllServicesToDefaultButton"));
        RestoreAllServicesToDefaultButton->setGeometry(QRect(600, 200, 90, 41));
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_4 = new QTabWidget(tab);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 691, 441));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_63 = new QLabel(tab_8);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(10, 10, 81, 21));
        label_63->setFont(font1);
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_62 = new QLabel(tab_9);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(10, 10, 81, 21));
        label_62->setFont(font1);
        tabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_61 = new QLabel(tab_10);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(10, 10, 81, 21));
        label_61->setFont(font1);
        tabWidget_4->addTab(tab_10, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_5 = new QTabWidget(tab_2);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 691, 441));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_2 = new QLabel(tab_13);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 331, 16));
        label_2->setFont(font);
        integrityCheckButton = new QPushButton(tab_13);
        integrityCheckButton->setObjectName(QStringLiteral("integrityCheckButton"));
        integrityCheckButton->setGeometry(QRect(10, 40, 40, 36));
        integrityCheckButton->setMaximumSize(QSize(40, 40));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/repair.png"), QSize(), QIcon::Normal, QIcon::Off);
        integrityCheckButton->setIcon(icon7);
        integrityCheckButton->setIconSize(QSize(30, 30));
        integrityCheckButton->setCheckable(false);
        tabWidget_5->addTab(tab_13, QString());
        tabWidget->addTab(tab_2, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 10, 90, 20));
        updateAppButton = new QPushButton(centralWidget);
        updateAppButton->setObjectName(QStringLiteral("updateAppButton"));
        updateAppButton->setGeometry(QRect(470, 4, 40, 23));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/flecha_arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateAppButton->setIcon(icon8);
        updateScriptsButton = new QPushButton(centralWidget);
        updateScriptsButton->setObjectName(QStringLiteral("updateScriptsButton"));
        updateScriptsButton->setGeometry(QRect(520, 4, 40, 23));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/upgrade.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateScriptsButton->setIcon(icon9);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 20));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuEdici_n = new QMenu(menuBar);
        menuEdici_n->setObjectName(QStringLiteral("menuEdici_n"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuEdici_n->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuNuevo->addSeparator();
        menuNuevo->addSeparator();
        menuNuevo->addAction(actionExit);
        menuEdici_n->addAction(actionPreferences);
        menuAyuda->addAction(actionTutorial);
        menuAyuda->addAction(actionAbout);
        menuAyuda->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_6->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(2);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "winsys", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionCut->setIconText(QApplication::translate("MainWindow", "Cortar", nullptr));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", nullptr));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", nullptr));
        unselectAllButton->setText(QApplication::translate("MainWindow", "Unselect All", nullptr));
        selectAllButton->setText(QApplication::translate("MainWindow", "Select All", nullptr));
        installSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Install", nullptr));
        uninstallSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Uninstall", nullptr));
        loadSelectionButton->setText(QApplication::translate("MainWindow", "Load", nullptr));
        saveSelectionButton->setText(QApplication::translate("MainWindow", "Save", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Utilities", nullptr));
#ifndef QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setText(QApplication::translate("MainWindow", "Run DriverPack Online", nullptr));
#ifndef QT_NO_SHORTCUT
        runDriverPackOnlineButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        installChocolateyButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChocolateyButton->setText(QApplication::translate("MainWindow", "Install Chocolatey", nullptr));
#ifndef QT_NO_SHORTCUT
        installChocolateyButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        installChrisPCButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChrisPCButton->setText(QApplication::translate("MainWindow", "Install it", nullptr));
#ifndef QT_NO_SHORTCUT
        installChrisPCButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runChrisPCButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runChrisPCButton->setText(QApplication::translate("MainWindow", "Run it", nullptr));
#ifndef QT_NO_SHORTCUT
        runChrisPCButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_21->setText(QApplication::translate("MainWindow", "ChrisPC Win Experience Index", nullptr));
#ifndef QT_NO_WHATSTHIS
        runUltimateWindowsTweaker4Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runUltimateWindowsTweaker4Button->setText(QApplication::translate("MainWindow", "Ultimate Windows Tweaker 4", nullptr));
#ifndef QT_NO_SHORTCUT
        runUltimateWindowsTweaker4Button->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        run10AppsManager->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        run10AppsManager->setText(QApplication::translate("MainWindow", "10AppsManager", nullptr));
#ifndef QT_NO_SHORTCUT
        run10AppsManager->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_22->setText(QApplication::translate("MainWindow", "thewindowsclub", nullptr));
#ifndef QT_NO_WHATSTHIS
        runWindosUpdateMiniToolButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runWindosUpdateMiniToolButton->setText(QApplication::translate("MainWindow", "Windows Update MiniTool", nullptr));
#ifndef QT_NO_SHORTCUT
        runWindosUpdateMiniToolButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runProcessHackerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runProcessHackerButton->setText(QApplication::translate("MainWindow", "Process Hacker", nullptr));
#ifndef QT_NO_SHORTCUT
        runProcessHackerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runServiwinButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runServiwinButton->setText(QApplication::translate("MainWindow", "serviwin", nullptr));
#ifndef QT_NO_SHORTCUT
        runServiwinButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runProcessExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runProcessExplorerButton->setText(QApplication::translate("MainWindow", "Process Explorer", nullptr));
#ifndef QT_NO_SHORTCUT
        runProcessExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runAdwcleaner->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runAdwcleaner->setText(QApplication::translate("MainWindow", "AdwCleaner", nullptr));
#ifndef QT_NO_SHORTCUT
        runAdwcleaner->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runOptimizer->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runOptimizer->setText(QApplication::translate("MainWindow", "Optimizer", nullptr));
#ifndef QT_NO_SHORTCUT
        runOptimizer->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runWPD->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runWPD->setText(QApplication::translate("MainWindow", "Windows Privacy Dashboard ", nullptr));
#ifndef QT_NO_SHORTCUT
        runWPD->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Packages 1/1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Install packages", nullptr));
#ifndef QT_NO_WHATSTHIS
        enableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFirewallButton->setText(QApplication::translate("MainWindow", "Enable firewall", nullptr));
#ifndef QT_NO_SHORTCUT
        enableFirewallButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_12->setText(QApplication::translate("MainWindow", "Security", nullptr));
#ifndef QT_NO_WHATSTHIS
        disableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFirewallButton->setText(QApplication::translate("MainWindow", "Disable firewall", nullptr));
#ifndef QT_NO_SHORTCUT
        disableFirewallButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        completeShutdownButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        completeShutdownButton->setText(QApplication::translate("MainWindow", "Complete shutdown", nullptr));
#ifndef QT_NO_SHORTCUT
        completeShutdownButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openRegeditButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openRegeditButton->setText(QApplication::translate("MainWindow", "Open regedit", nullptr));
#ifndef QT_NO_SHORTCUT
        openRegeditButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openTaskmgrButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openTaskmgrButton->setText(QApplication::translate("MainWindow", "Open taskmgr", nullptr));
#ifndef QT_NO_SHORTCUT
        openTaskmgrButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        knowLicenceExpirationButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        knowLicenceExpirationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        knowLicenceExpirationButton->setText(QApplication::translate("MainWindow", "Know licence expiration", nullptr));
#ifndef QT_NO_SHORTCUT
        knowLicenceExpirationButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_19->setText(QApplication::translate("MainWindow", "Shortcuts", nullptr));
#ifndef QT_NO_WHATSTHIS
        openServicesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openServicesButton->setText(QApplication::translate("MainWindow", "Open services", nullptr));
#ifndef QT_NO_SHORTCUT
        openServicesButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openCmdButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openCmdButton->setText(QApplication::translate("MainWindow", "Open cmd", nullptr));
#ifndef QT_NO_SHORTCUT
        openCmdButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openPowershellButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openPowershellButton->setText(QApplication::translate("MainWindow", "Open Powershell", nullptr));
#ifndef QT_NO_SHORTCUT
        openPowershellButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_20->setText(QApplication::translate("MainWindow", "Energy", nullptr));
#ifndef QT_NO_WHATSTHIS
        RestartButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RestartButton->setText(QApplication::translate("MainWindow", "Restart", nullptr));
#ifndef QT_NO_SHORTCUT
        RestartButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        searchUpdatesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        searchUpdatesButton->setText(QApplication::translate("MainWindow", "Search updates", nullptr));
#ifndef QT_NO_SHORTCUT
        searchUpdatesButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        enableFastStartupButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFastStartupButton->setText(QApplication::translate("MainWindow", "Enable fast startup", nullptr));
#ifndef QT_NO_SHORTCUT
        enableFastStartupButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        disableFastStartupButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFastStartupButton->setText(QApplication::translate("MainWindow", "Disable fast startup", nullptr));
#ifndef QT_NO_SHORTCUT
        disableFastStartupButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        enableSystemRestoreButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableSystemRestoreButton->setText(QApplication::translate("MainWindow", "Enable system restore", nullptr));
#ifndef QT_NO_SHORTCUT
        enableSystemRestoreButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        disableSystemRestoreButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableSystemRestoreButton->setText(QApplication::translate("MainWindow", "Disable system restore", nullptr));
#ifndef QT_NO_SHORTCUT
        disableSystemRestoreButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        smartscreenWarnButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        smartscreenWarnButton->setText(QApplication::translate("MainWindow", "Smartscreen - Warn", nullptr));
#ifndef QT_NO_SHORTCUT
        smartscreenWarnButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        smartscreenBlockButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        smartscreenBlockButton->setText(QApplication::translate("MainWindow", "Smartscreen - Block", nullptr));
#ifndef QT_NO_SHORTCUT
        smartscreenBlockButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        smartscreenOffButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        smartscreenOffButton->setText(QApplication::translate("MainWindow", "Smartscreen - Off", nullptr));
#ifndef QT_NO_SHORTCUT
        smartscreenOffButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Tweaks 1/2", nullptr));
#ifndef QT_NO_WHATSTHIS
        getFirewallStatusButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        getFirewallStatusButton->setText(QApplication::translate("MainWindow", "Get firewall status", nullptr));
#ifndef QT_NO_SHORTCUT
        getFirewallStatusButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        updateSystemTimeButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateSystemTimeButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        updateSystemTimeButton->setText(QApplication::translate("MainWindow", "Update system time", nullptr));
#ifndef QT_NO_SHORTCUT
        updateSystemTimeButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_14->setText(QApplication::translate("MainWindow", "Current Local Time", nullptr));
#ifndef QT_NO_WHATSTHIS
        startExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        startExplorerButton->setText(QApplication::translate("MainWindow", "Start explorer.exe", nullptr));
#ifndef QT_NO_SHORTCUT
        startExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        restartExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        restartExplorerButton->setText(QApplication::translate("MainWindow", "Restart explorer.exe", nullptr));
#ifndef QT_NO_SHORTCUT
        restartExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        UTCButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>I recommend to change to this</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        UTCButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        UTCButton->setText(QApplication::translate("MainWindow", "UTC", nullptr));
#ifndef QT_NO_SHORTCUT
        UTCButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_15->setText(QApplication::translate("MainWindow", "Extra", nullptr));
#ifndef QT_NO_TOOLTIP
        GMTButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Default setting. Not recommended</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GMTButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        GMTButton->setText(QApplication::translate("MainWindow", "GMT", nullptr));
#ifndef QT_NO_SHORTCUT
        GMTButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        ExportOutlookButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Uses defaults locations only</p><p>From:</p><p>HKEY_CURRENT_USER\\\\Software\\\\Microsoft\\\\Windows NT\\\\CurrentVersion\\\\Windows Messaging Subsystem\\\\Profiles</p><p>%localappdata%\\Microsoft\\Outlook\\*</p><p>To:</p><p>C:\\Program Files(x86)\\winsys\\OutlookProfile\\OutlookWinsys.reg</p><p>C:\\Program Files(x86)\\winsys\\OutlookData\\*</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ExportOutlookButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        ExportOutlookButton->setText(QApplication::translate("MainWindow", "Export profile and data", nullptr));
#ifndef QT_NO_SHORTCUT
        ExportOutlookButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_16->setText(QApplication::translate("MainWindow", "Outlook", nullptr));
#ifndef QT_NO_TOOLTIP
        ImportOutlookButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Uses defaults locations only</p><p>From:</p><p>C:\\Program Files(x86)\\winsys\\OutlookProfile\\OutlookWinsys.reg</p><p>C:\\Program Files(x86)\\winsys\\OutlookData\\*</p><p>To:</p><p>HKEY_CURRENT_USER\\\\Software\\\\Microsoft\\\\Windows NT\\\\CurrentVersion\\\\Windows Messaging Subsystem\\\\Profiles</p><p>%localappdata%\\Microsoft\\Outlook\\*</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ImportOutlookButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        ImportOutlookButton->setText(QApplication::translate("MainWindow", "Import profile and data", nullptr));
#ifndef QT_NO_SHORTCUT
        ImportOutlookButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Tweaks 2/2", nullptr));
        RestoreTweaksToDefaultButton->setText(QApplication::translate("MainWindow", "Restore tweaks\n"
" to Default", nullptr));
        applyTweaksButton->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        loadTweaksSelectionButton->setText(QApplication::translate("MainWindow", "Load", nullptr));
        unloadTweaksSelectionButton->setText(QApplication::translate("MainWindow", "Unload", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tweaks", nullptr));
        checkBox_004->setText(QApplication::translate("MainWindow", "004.BITS - DISABLE", nullptr));
        checkBox_008->setText(QApplication::translate("MainWindow", "008.Windows Update - wuauserv - DISABLE", nullptr));
        checkBox_002->setText(QApplication::translate("MainWindow", "002.Superfetch - SysMain - DISABLE", nullptr));
        checkBox_001->setText(QApplication::translate("MainWindow", "001.Superfetch - SysMain - ENABLE", nullptr));
        checkBox_007->setText(QApplication::translate("MainWindow", "007.Windows Update - wuauserv - ENABLE", nullptr));
        checkBox_003->setText(QApplication::translate("MainWindow", "003.BITS - ENABLE", nullptr));
        checkBox_006->setText(QApplication::translate("MainWindow", "006.Windows Search - WSearch - DISABLE", nullptr));
        checkBox_005->setText(QApplication::translate("MainWindow", "005.Windows Search - WSearch - ENABLE", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_14), QApplication::translate("MainWindow", "Services 1/1", nullptr));
        loadServicesSelectionButton->setText(QApplication::translate("MainWindow", "Load", nullptr));
        disableAllServicesButton->setText(QApplication::translate("MainWindow", "Disable All", nullptr));
        enableAllServicesButton->setText(QApplication::translate("MainWindow", "Enable All", nullptr));
        saveSelectionButton_2->setText(QApplication::translate("MainWindow", "Save", nullptr));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", nullptr));
        RestoreThisServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore this\n"
" services to Def.", nullptr));
        RestoreAllServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore all\n"
" services to Def.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Services", nullptr));
        label_63->setText(QApplication::translate("MainWindow", "Pending", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("MainWindow", "Normal user", nullptr));
        label_62->setText(QApplication::translate("MainWindow", "Pending", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("MainWindow", "Advanced user", nullptr));
        label_61->setText(QApplication::translate("MainWindow", "Pending", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QApplication::translate("MainWindow", "Developer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "System", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Check system integrity", nullptr));
#ifndef QT_NO_TOOLTIP
        integrityCheckButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff55ff;\">SFC</span><span style=\" color:#c0c0c0;\"/><span style=\" color:#ff55ff;\">/ScanNow</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        integrityCheckButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        integrityCheckButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        integrityCheckButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "Repair  1/1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Repair", nullptr));
        label->setText(QApplication::translate("MainWindow", "v2018.10.24", nullptr));
#ifndef QT_NO_TOOLTIP
        updateAppButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update program</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        updateAppButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        updateScriptsButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update scripts</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        updateScriptsButton->setText(QString());
        menuNuevo->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdici_n->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
