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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
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
    QAction *actionSeeReleases;
    QAction *actionTwitter;
    QAction *actionTutorial;
    QAction *actionUpdate_Scripts;
    QAction *actionUpdate_Program;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_11;
    QLabel *label_36;
    QPushButton *runWindosUpdateMiniToolButton;
    QPushButton *runServiwinButton;
    QPushButton *runChrisPCButton;
    QPushButton *runUltimateWindowsTweaker4Button;
    QPushButton *runProcessExplorerButton;
    QPushButton *runOptimizer;
    QLabel *label_46;
    QPushButton *runDriverPackOnlineButton;
    QPushButton *runAdwcleaner;
    QPushButton *runWPD;
    QPushButton *run10AppsManager;
    QPushButton *installChrisPCButton;
    QPushButton *installChocolateyButton;
    QPushButton *runProcessHackerButton;
    QLabel *label_50;
    QPushButton *runStopUpdates10Button;
    QLabel *label_51;
    QPushButton *installStopUpdates10Button;
    QWidget *tab_16;
    QTabWidget *tabWidget_8;
    QWidget *tab_27;
    QTextBrowser *textBrowser;
    QLabel *label_44;
    QWidget *tab;
    QTabWidget *tabWidget_4;
    QWidget *tab_8;
    QPushButton *searchUpdatesButton;
    QPushButton *knowLicenceExpirationButton_2;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *tab_2;
    QTabWidget *tabWidget_5;
    QWidget *tab_13;
    QLabel *label_2;
    QLabel *label_18;
    QLabel *label_30;
    QPushButton *integrityCheckButton_2;
    QWidget *tab_14;
    QWidget *tab_15;
    QTabWidget *tabWidget_6;
    QWidget *tab_26;
    QPushButton *smartscreenBlockButton;
    QPushButton *smartscreenOffButton;
    QPushButton *enableFirewallButton;
    QPushButton *smartscreenWarnButton;
    QPushButton *disableFirewallButton;
    QPushButton *getFirewallStatusButton;
    QWidget *tab_5;
    QTabWidget *tabWidget_7;
    QWidget *tab_31;
    QPushButton *enableSystemRestoreButton;
    QPushButton *disableFastStartupButton;
    QPushButton *disableSystemRestoreButton;
    QPushButton *enableFastStartupButton;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QCheckBox *checkBox_SysMain;
    QCheckBox *checkBox_WSearch;
    QCheckBox *checkBox_Bits;
    QLabel *label_37;
    QPushButton *RestoreAllServicesToDefaultButton;
    QPushButton *loadServicesSelectionButton;
    QPushButton *saveSelectionButton_2;
    QPushButton *RestoreThisServicesToDefaultButton;
    QPushButton *enableAllServicesButton;
    QPushButton *disableAllServicesButton;
    QPushButton *openRegeditButton;
    QPushButton *openServicesButton;
    QLabel *label_19;
    QPushButton *openCmdButton;
    QPushButton *openPowershellButton;
    QPushButton *completeShutdownButton;
    QPushButton *knowLicenceExpirationButton;
    QPushButton *RestartButton;
    QPushButton *openTaskmgrButton;
    QPushButton *loadTweaksSelectionButton;
    QPushButton *RestoreTweaksToDefaultButton;
    QPushButton *applyTweaksButton;
    QPushButton *unloadTweaksSelectionButton;
    QCheckBox *checkBox_Wuauserv;
    QPushButton *knowLicenceExpirationButton_3;
    QWidget *tab_6;
    QWidget *tab_12;
    QPushButton *ImportOutlookButton;
    QLabel *label_16;
    QLabel *label_14;
    QPushButton *UTCButton;
    QPushButton *ExportOutlookButton;
    QPushButton *GMTButton;
    QPushButton *updateSystemTimeButton;
    QPushButton *restartExplorerButton;
    QPushButton *startExplorerButton;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuEdici_n;
    QMenu *menuAyuda;
    QMenu *menuRun;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(649, 682);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/winsys.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setCheckable(false);
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
        actionPreferences->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/gtk-preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon7);
        actionSeeReleases = new QAction(MainWindow);
        actionSeeReleases->setObjectName(QStringLiteral("actionSeeReleases"));
        actionSeeReleases->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/flecha_arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSeeReleases->setIcon(icon8);
        actionSeeReleases->setShortcutVisibleInContextMenu(true);
        actionTwitter = new QAction(MainWindow);
        actionTwitter->setObjectName(QStringLiteral("actionTwitter"));
        actionTwitter->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/Twitter-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTwitter->setIcon(icon9);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        actionUpdate_Scripts = new QAction(MainWindow);
        actionUpdate_Scripts->setObjectName(QStringLiteral("actionUpdate_Scripts"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/upgrade.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdate_Scripts->setIcon(icon10);
        actionUpdate_Scripts->setIconVisibleInMenu(true);
        actionUpdate_Scripts->setShortcutVisibleInContextMenu(true);
        actionUpdate_Program = new QAction(MainWindow);
        actionUpdate_Program->setObjectName(QStringLiteral("actionUpdate_Program"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/update-arrows.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdate_Program->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 631, 571));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setEnabled(true);
        tabWidget_2->setGeometry(QRect(0, 0, 691, 571));
        tabWidget_2->setIconSize(QSize(16, 16));
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_36 = new QLabel(tab_11);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 10, 241, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_36->setFont(font);
        runWindosUpdateMiniToolButton = new QPushButton(tab_11);
        runWindosUpdateMiniToolButton->setObjectName(QStringLiteral("runWindosUpdateMiniToolButton"));
        runWindosUpdateMiniToolButton->setEnabled(true);
        runWindosUpdateMiniToolButton->setGeometry(QRect(10, 110, 161, 36));
        runWindosUpdateMiniToolButton->setIconSize(QSize(30, 30));
        runWindosUpdateMiniToolButton->setCheckable(false);
        runServiwinButton = new QPushButton(tab_11);
        runServiwinButton->setObjectName(QStringLiteral("runServiwinButton"));
        runServiwinButton->setEnabled(true);
        runServiwinButton->setGeometry(QRect(10, 230, 161, 36));
        runServiwinButton->setIconSize(QSize(30, 30));
        runServiwinButton->setCheckable(false);
        runChrisPCButton = new QPushButton(tab_11);
        runChrisPCButton->setObjectName(QStringLiteral("runChrisPCButton"));
        runChrisPCButton->setEnabled(true);
        runChrisPCButton->setGeometry(QRect(200, 70, 161, 36));
        runChrisPCButton->setIconSize(QSize(30, 30));
        runChrisPCButton->setCheckable(false);
        runUltimateWindowsTweaker4Button = new QPushButton(tab_11);
        runUltimateWindowsTweaker4Button->setObjectName(QStringLiteral("runUltimateWindowsTweaker4Button"));
        runUltimateWindowsTweaker4Button->setEnabled(true);
        runUltimateWindowsTweaker4Button->setGeometry(QRect(200, 140, 161, 36));
        runUltimateWindowsTweaker4Button->setIconSize(QSize(30, 30));
        runUltimateWindowsTweaker4Button->setCheckable(false);
        runProcessExplorerButton = new QPushButton(tab_11);
        runProcessExplorerButton->setObjectName(QStringLiteral("runProcessExplorerButton"));
        runProcessExplorerButton->setEnabled(true);
        runProcessExplorerButton->setGeometry(QRect(10, 150, 161, 36));
        runProcessExplorerButton->setIconSize(QSize(30, 30));
        runProcessExplorerButton->setCheckable(false);
        runOptimizer = new QPushButton(tab_11);
        runOptimizer->setObjectName(QStringLiteral("runOptimizer"));
        runOptimizer->setEnabled(true);
        runOptimizer->setGeometry(QRect(10, 310, 161, 36));
        runOptimizer->setIconSize(QSize(30, 30));
        runOptimizer->setCheckable(false);
        label_46 = new QLabel(tab_11);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(200, 120, 101, 16));
        label_46->setFont(font);
        runDriverPackOnlineButton = new QPushButton(tab_11);
        runDriverPackOnlineButton->setObjectName(QStringLiteral("runDriverPackOnlineButton"));
        runDriverPackOnlineButton->setEnabled(true);
        runDriverPackOnlineButton->setGeometry(QRect(10, 70, 161, 36));
        runDriverPackOnlineButton->setIconSize(QSize(30, 30));
        runDriverPackOnlineButton->setCheckable(false);
        runAdwcleaner = new QPushButton(tab_11);
        runAdwcleaner->setObjectName(QStringLiteral("runAdwcleaner"));
        runAdwcleaner->setEnabled(true);
        runAdwcleaner->setGeometry(QRect(10, 270, 161, 36));
        runAdwcleaner->setIconSize(QSize(30, 30));
        runAdwcleaner->setCheckable(false);
        runWPD = new QPushButton(tab_11);
        runWPD->setObjectName(QStringLiteral("runWPD"));
        runWPD->setEnabled(true);
        runWPD->setGeometry(QRect(10, 350, 161, 36));
        runWPD->setIconSize(QSize(30, 30));
        runWPD->setCheckable(false);
        run10AppsManager = new QPushButton(tab_11);
        run10AppsManager->setObjectName(QStringLiteral("run10AppsManager"));
        run10AppsManager->setEnabled(true);
        run10AppsManager->setGeometry(QRect(200, 180, 161, 36));
        run10AppsManager->setIconSize(QSize(30, 30));
        run10AppsManager->setCheckable(false);
        installChrisPCButton = new QPushButton(tab_11);
        installChrisPCButton->setObjectName(QStringLiteral("installChrisPCButton"));
        installChrisPCButton->setEnabled(true);
        installChrisPCButton->setGeometry(QRect(200, 30, 161, 36));
        installChrisPCButton->setIconSize(QSize(30, 30));
        installChrisPCButton->setCheckable(false);
        installChocolateyButton = new QPushButton(tab_11);
        installChocolateyButton->setObjectName(QStringLiteral("installChocolateyButton"));
        installChocolateyButton->setEnabled(true);
        installChocolateyButton->setGeometry(QRect(10, 30, 161, 36));
        installChocolateyButton->setIconSize(QSize(30, 30));
        installChocolateyButton->setCheckable(false);
        runProcessHackerButton = new QPushButton(tab_11);
        runProcessHackerButton->setObjectName(QStringLiteral("runProcessHackerButton"));
        runProcessHackerButton->setEnabled(true);
        runProcessHackerButton->setGeometry(QRect(10, 190, 161, 36));
        runProcessHackerButton->setIconSize(QSize(30, 30));
        runProcessHackerButton->setCheckable(false);
        label_50 = new QLabel(tab_11);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(200, 10, 171, 16));
        label_50->setFont(font);
        runStopUpdates10Button = new QPushButton(tab_11);
        runStopUpdates10Button->setObjectName(QStringLiteral("runStopUpdates10Button"));
        runStopUpdates10Button->setEnabled(true);
        runStopUpdates10Button->setGeometry(QRect(200, 290, 161, 36));
        runStopUpdates10Button->setIconSize(QSize(30, 30));
        runStopUpdates10Button->setCheckable(false);
        label_51 = new QLabel(tab_11);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(200, 230, 171, 16));
        label_51->setFont(font);
        installStopUpdates10Button = new QPushButton(tab_11);
        installStopUpdates10Button->setObjectName(QStringLiteral("installStopUpdates10Button"));
        installStopUpdates10Button->setEnabled(true);
        installStopUpdates10Button->setGeometry(QRect(200, 250, 161, 36));
        installStopUpdates10Button->setIconSize(QSize(30, 30));
        installStopUpdates10Button->setCheckable(false);
        tabWidget_2->addTab(tab_11, QString());
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/package-box-with-down-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon12, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        tabWidget_8 = new QTabWidget(tab_16);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(0, 0, 581, 571));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_8->setFont(font1);
        tabWidget_8->setAutoFillBackground(false);
        tab_27 = new QWidget();
        tab_27->setObjectName(QStringLiteral("tab_27"));
        textBrowser = new QTextBrowser(tab_27);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        textBrowser->setGeometry(QRect(20, 370, 531, 111));
        label_44 = new QLabel(tab_27);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(20, 340, 651, 20));
        label_44->setFont(font);
        tabWidget_8->addTab(tab_27, QString());
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/nav_10-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_16, icon13, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_4 = new QTabWidget(tab);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 701, 571));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        searchUpdatesButton = new QPushButton(tab_8);
        searchUpdatesButton->setObjectName(QStringLiteral("searchUpdatesButton"));
        searchUpdatesButton->setGeometry(QRect(10, 10, 131, 36));
        searchUpdatesButton->setIconSize(QSize(30, 30));
        searchUpdatesButton->setCheckable(false);
        knowLicenceExpirationButton_2 = new QPushButton(tab_8);
        knowLicenceExpirationButton_2->setObjectName(QStringLiteral("knowLicenceExpirationButton_2"));
        knowLicenceExpirationButton_2->setGeometry(QRect(10, 50, 131, 36));
        knowLicenceExpirationButton_2->setIconSize(QSize(30, 30));
        knowLicenceExpirationButton_2->setCheckable(false);
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tabWidget_4->addTab(tab_10, QString());
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/update-arrows.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab, icon14, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_5 = new QTabWidget(tab_2);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 691, 571));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_2 = new QLabel(tab_13);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 331, 16));
        label_2->setFont(font);
        label_18 = new QLabel(tab_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 50, 141, 16));
        label_18->setFont(font1);
        label_30 = new QLabel(tab_13);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(60, 30, 271, 16));
        label_30->setFont(font);
        integrityCheckButton_2 = new QPushButton(tab_13);
        integrityCheckButton_2->setObjectName(QStringLiteral("integrityCheckButton_2"));
        integrityCheckButton_2->setGeometry(QRect(10, 30, 40, 36));
        integrityCheckButton_2->setMaximumSize(QSize(40, 40));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/repair.png"), QSize(), QIcon::Normal, QIcon::Off);
        integrityCheckButton_2->setIcon(icon15);
        integrityCheckButton_2->setIconSize(QSize(30, 30));
        integrityCheckButton_2->setCheckable(false);
        tabWidget_5->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tabWidget_5->addTab(tab_14, QString());
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/repairing-service.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon16, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        tabWidget_6 = new QTabWidget(tab_15);
        tabWidget_6->setObjectName(QStringLiteral("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 581, 571));
        tabWidget_6->setFont(font1);
        tabWidget_6->setAutoFillBackground(false);
        tab_26 = new QWidget();
        tab_26->setObjectName(QStringLiteral("tab_26"));
        smartscreenBlockButton = new QPushButton(tab_26);
        smartscreenBlockButton->setObjectName(QStringLiteral("smartscreenBlockButton"));
        smartscreenBlockButton->setGeometry(QRect(140, 10, 131, 36));
        smartscreenBlockButton->setIconSize(QSize(30, 30));
        smartscreenBlockButton->setCheckable(false);
        smartscreenOffButton = new QPushButton(tab_26);
        smartscreenOffButton->setObjectName(QStringLiteral("smartscreenOffButton"));
        smartscreenOffButton->setGeometry(QRect(140, 90, 131, 36));
        smartscreenOffButton->setIconSize(QSize(30, 30));
        smartscreenOffButton->setCheckable(false);
        enableFirewallButton = new QPushButton(tab_26);
        enableFirewallButton->setObjectName(QStringLiteral("enableFirewallButton"));
        enableFirewallButton->setGeometry(QRect(10, 10, 120, 36));
        enableFirewallButton->setIconSize(QSize(30, 30));
        enableFirewallButton->setCheckable(false);
        smartscreenWarnButton = new QPushButton(tab_26);
        smartscreenWarnButton->setObjectName(QStringLiteral("smartscreenWarnButton"));
        smartscreenWarnButton->setGeometry(QRect(140, 50, 131, 36));
        smartscreenWarnButton->setIconSize(QSize(30, 30));
        smartscreenWarnButton->setCheckable(false);
        disableFirewallButton = new QPushButton(tab_26);
        disableFirewallButton->setObjectName(QStringLiteral("disableFirewallButton"));
        disableFirewallButton->setGeometry(QRect(10, 50, 120, 36));
        disableFirewallButton->setIconSize(QSize(30, 30));
        disableFirewallButton->setCheckable(false);
        getFirewallStatusButton = new QPushButton(tab_26);
        getFirewallStatusButton->setObjectName(QStringLiteral("getFirewallStatusButton"));
        getFirewallStatusButton->setEnabled(false);
        getFirewallStatusButton->setGeometry(QRect(10, 90, 120, 36));
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
        tabWidget_6->addTab(tab_26, QString());
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/559612.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_15, icon17, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_7 = new QTabWidget(tab_5);
        tabWidget_7->setObjectName(QStringLiteral("tabWidget_7"));
        tabWidget_7->setGeometry(QRect(0, 0, 581, 571));
        tabWidget_7->setFont(font1);
        tabWidget_7->setAutoFillBackground(false);
        tab_31 = new QWidget();
        tab_31->setObjectName(QStringLiteral("tab_31"));
        enableSystemRestoreButton = new QPushButton(tab_31);
        enableSystemRestoreButton->setObjectName(QStringLiteral("enableSystemRestoreButton"));
        enableSystemRestoreButton->setGeometry(QRect(140, 10, 120, 36));
        enableSystemRestoreButton->setIconSize(QSize(30, 30));
        enableSystemRestoreButton->setCheckable(false);
        disableFastStartupButton = new QPushButton(tab_31);
        disableFastStartupButton->setObjectName(QStringLiteral("disableFastStartupButton"));
        disableFastStartupButton->setGeometry(QRect(10, 50, 120, 36));
        disableFastStartupButton->setIconSize(QSize(30, 30));
        disableFastStartupButton->setCheckable(false);
        disableSystemRestoreButton = new QPushButton(tab_31);
        disableSystemRestoreButton->setObjectName(QStringLiteral("disableSystemRestoreButton"));
        disableSystemRestoreButton->setGeometry(QRect(140, 50, 120, 36));
        disableSystemRestoreButton->setIconSize(QSize(30, 30));
        disableSystemRestoreButton->setCheckable(false);
        enableFastStartupButton = new QPushButton(tab_31);
        enableFastStartupButton->setObjectName(QStringLiteral("enableFastStartupButton"));
        enableFastStartupButton->setGeometry(QRect(10, 10, 120, 36));
        enableFastStartupButton->setIconSize(QSize(30, 30));
        enableFastStartupButton->setCheckable(false);
        tabWidget_7->addTab(tab_31, QString());
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/electricity-clipart-lightnig-597870-3188154.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_5, icon18, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 581, 571));
        tabWidget_3->setFont(font1);
        tabWidget_3->setAutoFillBackground(false);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        checkBox_SysMain = new QCheckBox(tab_7);
        checkBox_SysMain->setObjectName(QStringLiteral("checkBox_SysMain"));
        checkBox_SysMain->setEnabled(false);
        checkBox_SysMain->setGeometry(QRect(10, 40, 251, 23));
        checkBox_WSearch = new QCheckBox(tab_7);
        checkBox_WSearch->setObjectName(QStringLiteral("checkBox_WSearch"));
        checkBox_WSearch->setEnabled(false);
        checkBox_WSearch->setGeometry(QRect(10, 100, 251, 23));
        checkBox_Bits = new QCheckBox(tab_7);
        checkBox_Bits->setObjectName(QStringLiteral("checkBox_Bits"));
        checkBox_Bits->setEnabled(false);
        checkBox_Bits->setGeometry(QRect(10, 70, 251, 23));
        label_37 = new QLabel(tab_7);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 10, 241, 16));
        label_37->setFont(font);
        RestoreAllServicesToDefaultButton = new QPushButton(tab_7);
        RestoreAllServicesToDefaultButton->setObjectName(QStringLiteral("RestoreAllServicesToDefaultButton"));
        RestoreAllServicesToDefaultButton->setGeometry(QRect(450, 160, 90, 41));
        loadServicesSelectionButton = new QPushButton(tab_7);
        loadServicesSelectionButton->setObjectName(QStringLiteral("loadServicesSelectionButton"));
        loadServicesSelectionButton->setEnabled(false);
        loadServicesSelectionButton->setGeometry(QRect(450, 220, 90, 23));
        saveSelectionButton_2 = new QPushButton(tab_7);
        saveSelectionButton_2->setObjectName(QStringLiteral("saveSelectionButton_2"));
        saveSelectionButton_2->setEnabled(false);
        saveSelectionButton_2->setGeometry(QRect(450, 250, 90, 23));
        RestoreThisServicesToDefaultButton = new QPushButton(tab_7);
        RestoreThisServicesToDefaultButton->setObjectName(QStringLiteral("RestoreThisServicesToDefaultButton"));
        RestoreThisServicesToDefaultButton->setGeometry(QRect(450, 110, 90, 41));
        enableAllServicesButton = new QPushButton(tab_7);
        enableAllServicesButton->setObjectName(QStringLiteral("enableAllServicesButton"));
        enableAllServicesButton->setGeometry(QRect(450, 40, 90, 23));
        disableAllServicesButton = new QPushButton(tab_7);
        disableAllServicesButton->setObjectName(QStringLiteral("disableAllServicesButton"));
        disableAllServicesButton->setGeometry(QRect(450, 10, 91, 23));
        openRegeditButton = new QPushButton(tab_7);
        openRegeditButton->setObjectName(QStringLiteral("openRegeditButton"));
        openRegeditButton->setGeometry(QRect(140, 370, 120, 36));
        openRegeditButton->setIconSize(QSize(30, 30));
        openRegeditButton->setCheckable(false);
        openServicesButton = new QPushButton(tab_7);
        openServicesButton->setObjectName(QStringLiteral("openServicesButton"));
        openServicesButton->setGeometry(QRect(10, 490, 120, 36));
        openServicesButton->setIconSize(QSize(30, 30));
        openServicesButton->setCheckable(false);
        label_19 = new QLabel(tab_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 350, 111, 16));
        label_19->setFont(font);
        openCmdButton = new QPushButton(tab_7);
        openCmdButton->setObjectName(QStringLiteral("openCmdButton"));
        openCmdButton->setGeometry(QRect(10, 370, 120, 36));
        openCmdButton->setIconSize(QSize(30, 30));
        openCmdButton->setCheckable(false);
        openPowershellButton = new QPushButton(tab_7);
        openPowershellButton->setObjectName(QStringLiteral("openPowershellButton"));
        openPowershellButton->setGeometry(QRect(10, 410, 120, 36));
        openPowershellButton->setIconSize(QSize(30, 30));
        openPowershellButton->setCheckable(false);
        completeShutdownButton = new QPushButton(tab_7);
        completeShutdownButton->setObjectName(QStringLiteral("completeShutdownButton"));
        completeShutdownButton->setGeometry(QRect(140, 450, 120, 36));
        completeShutdownButton->setIconSize(QSize(30, 30));
        completeShutdownButton->setCheckable(false);
        knowLicenceExpirationButton = new QPushButton(tab_7);
        knowLicenceExpirationButton->setObjectName(QStringLiteral("knowLicenceExpirationButton"));
        knowLicenceExpirationButton->setGeometry(QRect(270, 370, 120, 36));
        knowLicenceExpirationButton->setIconSize(QSize(30, 30));
        knowLicenceExpirationButton->setCheckable(false);
        RestartButton = new QPushButton(tab_7);
        RestartButton->setObjectName(QStringLiteral("RestartButton"));
        RestartButton->setGeometry(QRect(140, 410, 120, 36));
        RestartButton->setIconSize(QSize(30, 30));
        RestartButton->setCheckable(false);
        openTaskmgrButton = new QPushButton(tab_7);
        openTaskmgrButton->setObjectName(QStringLiteral("openTaskmgrButton"));
        openTaskmgrButton->setGeometry(QRect(10, 450, 120, 36));
        openTaskmgrButton->setIconSize(QSize(30, 30));
        openTaskmgrButton->setCheckable(false);
        loadTweaksSelectionButton = new QPushButton(tab_7);
        loadTweaksSelectionButton->setObjectName(QStringLiteral("loadTweaksSelectionButton"));
        loadTweaksSelectionButton->setEnabled(false);
        loadTweaksSelectionButton->setGeometry(QRect(450, 450, 90, 23));
        RestoreTweaksToDefaultButton = new QPushButton(tab_7);
        RestoreTweaksToDefaultButton->setObjectName(QStringLiteral("RestoreTweaksToDefaultButton"));
        RestoreTweaksToDefaultButton->setEnabled(false);
        RestoreTweaksToDefaultButton->setGeometry(QRect(450, 400, 90, 41));
        applyTweaksButton = new QPushButton(tab_7);
        applyTweaksButton->setObjectName(QStringLiteral("applyTweaksButton"));
        applyTweaksButton->setEnabled(false);
        applyTweaksButton->setGeometry(QRect(450, 352, 90, 41));
        unloadTweaksSelectionButton = new QPushButton(tab_7);
        unloadTweaksSelectionButton->setObjectName(QStringLiteral("unloadTweaksSelectionButton"));
        unloadTweaksSelectionButton->setEnabled(false);
        unloadTweaksSelectionButton->setGeometry(QRect(450, 480, 90, 23));
        checkBox_Wuauserv = new QCheckBox(tab_7);
        checkBox_Wuauserv->setObjectName(QStringLiteral("checkBox_Wuauserv"));
        checkBox_Wuauserv->setEnabled(false);
        checkBox_Wuauserv->setGeometry(QRect(10, 130, 251, 23));
        knowLicenceExpirationButton_3 = new QPushButton(tab_7);
        knowLicenceExpirationButton_3->setObjectName(QStringLiteral("knowLicenceExpirationButton_3"));
        knowLicenceExpirationButton_3->setGeometry(QRect(10, 170, 120, 36));
        knowLicenceExpirationButton_3->setIconSize(QSize(30, 30));
        knowLicenceExpirationButton_3->setCheckable(false);
        tabWidget_3->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_3->addTab(tab_6, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        ImportOutlookButton = new QPushButton(tab_12);
        ImportOutlookButton->setObjectName(QStringLiteral("ImportOutlookButton"));
        ImportOutlookButton->setEnabled(false);
        ImportOutlookButton->setGeometry(QRect(270, 70, 120, 36));
        ImportOutlookButton->setIconSize(QSize(30, 30));
        ImportOutlookButton->setCheckable(false);
        label_16 = new QLabel(tab_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(270, 10, 171, 16));
        label_16->setFont(font);
        label_14 = new QLabel(tab_12);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 10, 171, 16));
        label_14->setFont(font);
        UTCButton = new QPushButton(tab_12);
        UTCButton->setObjectName(QStringLiteral("UTCButton"));
        UTCButton->setEnabled(false);
        UTCButton->setGeometry(QRect(10, 30, 120, 36));
        UTCButton->setIconSize(QSize(30, 30));
        UTCButton->setCheckable(false);
        ExportOutlookButton = new QPushButton(tab_12);
        ExportOutlookButton->setObjectName(QStringLiteral("ExportOutlookButton"));
        ExportOutlookButton->setEnabled(false);
        ExportOutlookButton->setGeometry(QRect(270, 30, 120, 36));
        ExportOutlookButton->setIconSize(QSize(30, 30));
        ExportOutlookButton->setCheckable(false);
        GMTButton = new QPushButton(tab_12);
        GMTButton->setObjectName(QStringLiteral("GMTButton"));
        GMTButton->setEnabled(false);
        GMTButton->setGeometry(QRect(10, 70, 120, 36));
        GMTButton->setIconSize(QSize(30, 30));
        GMTButton->setCheckable(false);
        updateSystemTimeButton = new QPushButton(tab_12);
        updateSystemTimeButton->setObjectName(QStringLiteral("updateSystemTimeButton"));
        updateSystemTimeButton->setEnabled(false);
        updateSystemTimeButton->setGeometry(QRect(10, 200, 120, 36));
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
        restartExplorerButton = new QPushButton(tab_12);
        restartExplorerButton->setObjectName(QStringLiteral("restartExplorerButton"));
        restartExplorerButton->setEnabled(false);
        restartExplorerButton->setGeometry(QRect(140, 160, 120, 36));
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
        restartExplorerButton->setPalette(palette2);
        restartExplorerButton->setIconSize(QSize(30, 30));
        restartExplorerButton->setCheckable(false);
        startExplorerButton = new QPushButton(tab_12);
        startExplorerButton->setObjectName(QStringLiteral("startExplorerButton"));
        startExplorerButton->setEnabled(false);
        startExplorerButton->setGeometry(QRect(140, 200, 120, 36));
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
        startExplorerButton->setPalette(palette3);
        startExplorerButton->setIconSize(QSize(30, 30));
        startExplorerButton->setCheckable(false);
        tabWidget_3->addTab(tab_12, QString());
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/settings-5122.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon19, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 19, 90, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 20));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuEdici_n = new QMenu(menuBar);
        menuEdici_n->setObjectName(QStringLiteral("menuEdici_n"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        menuRun = new QMenu(menuBar);
        menuRun->setObjectName(QStringLiteral("menuRun"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuRun->menuAction());
        menuBar->addAction(menuEdici_n->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuNuevo->addSeparator();
        menuNuevo->addSeparator();
        menuNuevo->addAction(actionExit);
        menuEdici_n->addAction(actionPreferences);
        menuAyuda->addAction(actionTutorial);
        menuAyuda->addAction(actionAbout);
        menuAyuda->addAction(actionAbout_Qt);
        menuRun->addAction(actionSeeReleases);
        menuRun->addAction(actionUpdate_Scripts);
        menuRun->addAction(actionUpdate_Program);
        toolBar->addSeparator();
        toolBar->addAction(actionTwitter);
        toolBar->addSeparator();
        toolBar->addAction(actionSeeReleases);
        toolBar->addAction(actionUpdate_Scripts);
        toolBar->addAction(actionUpdate_Program);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_8->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(1);
        tabWidget_5->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);
        tabWidget_7->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


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
        actionSeeReleases->setText(QApplication::translate("MainWindow", "See Releases", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSeeReleases->setToolTip(QApplication::translate("MainWindow", "See Releases", nullptr));
#endif // QT_NO_TOOLTIP
        actionTwitter->setText(QApplication::translate("MainWindow", "Go to Twitter", nullptr));
#ifndef QT_NO_TOOLTIP
        actionTwitter->setToolTip(QApplication::translate("MainWindow", "Go to Twitter", nullptr));
#endif // QT_NO_TOOLTIP
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", nullptr));
        actionUpdate_Scripts->setText(QApplication::translate("MainWindow", "Update Scripts", nullptr));
        actionUpdate_Program->setText(QApplication::translate("MainWindow", "Update Program", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "Scripts Manager", nullptr));
#ifndef QT_NO_WHATSTHIS
        runWindosUpdateMiniToolButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runWindosUpdateMiniToolButton->setText(QApplication::translate("MainWindow", "Windows Update MiniTool", nullptr));
#ifndef QT_NO_SHORTCUT
        runWindosUpdateMiniToolButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runServiwinButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runServiwinButton->setText(QApplication::translate("MainWindow", "serviwin", nullptr));
#ifndef QT_NO_SHORTCUT
        runServiwinButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runChrisPCButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runChrisPCButton->setText(QApplication::translate("MainWindow", "Run it", nullptr));
#ifndef QT_NO_SHORTCUT
        runChrisPCButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runUltimateWindowsTweaker4Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runUltimateWindowsTweaker4Button->setText(QApplication::translate("MainWindow", "Ultimate Windows Tweaker 4", nullptr));
#ifndef QT_NO_SHORTCUT
        runUltimateWindowsTweaker4Button->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runProcessExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runProcessExplorerButton->setText(QApplication::translate("MainWindow", "Process Explorer", nullptr));
#ifndef QT_NO_SHORTCUT
        runProcessExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runOptimizer->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runOptimizer->setText(QApplication::translate("MainWindow", "Optimizer", nullptr));
#ifndef QT_NO_SHORTCUT
        runOptimizer->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_46->setText(QApplication::translate("MainWindow", "thewindowsclub", nullptr));
#ifndef QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setText(QApplication::translate("MainWindow", "Run DriverPack Online", nullptr));
#ifndef QT_NO_SHORTCUT
        runDriverPackOnlineButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runAdwcleaner->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runAdwcleaner->setText(QApplication::translate("MainWindow", "AdwCleaner", nullptr));
#ifndef QT_NO_SHORTCUT
        runAdwcleaner->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runWPD->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runWPD->setText(QApplication::translate("MainWindow", "Windows Privacy Dashboard ", nullptr));
#ifndef QT_NO_SHORTCUT
        runWPD->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        run10AppsManager->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        run10AppsManager->setText(QApplication::translate("MainWindow", "10AppsManager", nullptr));
#ifndef QT_NO_SHORTCUT
        run10AppsManager->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        installChrisPCButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChrisPCButton->setText(QApplication::translate("MainWindow", "Install it", nullptr));
#ifndef QT_NO_SHORTCUT
        installChrisPCButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        installChocolateyButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChocolateyButton->setText(QApplication::translate("MainWindow", "Install Chocolatey", nullptr));
#ifndef QT_NO_SHORTCUT
        installChocolateyButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        runProcessHackerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runProcessHackerButton->setText(QApplication::translate("MainWindow", "Process Hacker", nullptr));
#ifndef QT_NO_SHORTCUT
        runProcessHackerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_50->setText(QApplication::translate("MainWindow", "ChrisPC Win Experience Index", nullptr));
#ifndef QT_NO_WHATSTHIS
        runStopUpdates10Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runStopUpdates10Button->setText(QApplication::translate("MainWindow", "Run it", nullptr));
#ifndef QT_NO_SHORTCUT
        runStopUpdates10Button->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_51->setText(QApplication::translate("MainWindow", "StopUpdates10", nullptr));
#ifndef QT_NO_WHATSTHIS
        installStopUpdates10Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installStopUpdates10Button->setText(QApplication::translate("MainWindow", "Install it", nullptr));
#ifndef QT_NO_SHORTCUT
        installStopUpdates10Button->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Install", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
        label_44->setText(QApplication::translate("MainWindow", "Log update scripts", nullptr));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_27), QApplication::translate("MainWindow", "Sources", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QString());
#ifndef QT_NO_WHATSTHIS
        searchUpdatesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        searchUpdatesButton->setText(QApplication::translate("MainWindow", "Search updates", nullptr));
#ifndef QT_NO_SHORTCUT
        searchUpdatesButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        knowLicenceExpirationButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        knowLicenceExpirationButton_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        knowLicenceExpirationButton_2->setText(QApplication::translate("MainWindow", "Know Windows Version", nullptr));
#ifndef QT_NO_SHORTCUT
        knowLicenceExpirationButton_2->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("MainWindow", "Normal user", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("MainWindow", "Advanced user", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QApplication::translate("MainWindow", "Developer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_2->setText(QApplication::translate("MainWindow", "Check system integrity", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "sfc /scannow", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Be careful, your system will reboot", nullptr));
#ifndef QT_NO_TOOLTIP
        integrityCheckButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff55ff;\">SFC</span><span style=\" color:#c0c0c0;\"/><span style=\" color:#ff55ff;\">/ScanNow</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        integrityCheckButton_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        integrityCheckButton_2->setText(QString());
#ifndef QT_NO_SHORTCUT
        integrityCheckButton_2->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "General", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_14), QApplication::translate("MainWindow", "Packages", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
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
#ifndef QT_NO_WHATSTHIS
        enableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFirewallButton->setText(QApplication::translate("MainWindow", "Enable firewall", nullptr));
#ifndef QT_NO_SHORTCUT
        enableFirewallButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        smartscreenWarnButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        smartscreenWarnButton->setText(QApplication::translate("MainWindow", "Smartscreen - Warn", nullptr));
#ifndef QT_NO_SHORTCUT
        smartscreenWarnButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        disableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFirewallButton->setText(QApplication::translate("MainWindow", "Disable firewall", nullptr));
#ifndef QT_NO_SHORTCUT
        disableFirewallButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        getFirewallStatusButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        getFirewallStatusButton->setText(QApplication::translate("MainWindow", "Get firewall status", nullptr));
#ifndef QT_NO_SHORTCUT
        getFirewallStatusButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_26), QApplication::translate("MainWindow", "Security", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_15), QString());
#ifndef QT_NO_WHATSTHIS
        enableSystemRestoreButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableSystemRestoreButton->setText(QApplication::translate("MainWindow", "Enable system restore", nullptr));
#ifndef QT_NO_SHORTCUT
        enableSystemRestoreButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        disableFastStartupButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFastStartupButton->setText(QApplication::translate("MainWindow", "Disable fast startup", nullptr));
#ifndef QT_NO_SHORTCUT
        disableFastStartupButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        disableSystemRestoreButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableSystemRestoreButton->setText(QApplication::translate("MainWindow", "Disable system restore", nullptr));
#ifndef QT_NO_SHORTCUT
        disableSystemRestoreButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        enableFastStartupButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFastStartupButton->setText(QApplication::translate("MainWindow", "Enable fast startup", nullptr));
#ifndef QT_NO_SHORTCUT
        enableFastStartupButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_31), QApplication::translate("MainWindow", "Power", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QString());
        checkBox_SysMain->setText(QApplication::translate("MainWindow", "Superfetch - SysMain", nullptr));
        checkBox_WSearch->setText(QApplication::translate("MainWindow", "Windows Search - WSearch", nullptr));
        checkBox_Bits->setText(QApplication::translate("MainWindow", "BITS", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "Services", nullptr));
        RestoreAllServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore all\n"
" services to Def.", nullptr));
        loadServicesSelectionButton->setText(QApplication::translate("MainWindow", "Load", nullptr));
        saveSelectionButton_2->setText(QApplication::translate("MainWindow", "Save", nullptr));
        RestoreThisServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore this\n"
" services to Def.", nullptr));
        enableAllServicesButton->setText(QApplication::translate("MainWindow", "Enable All", nullptr));
        disableAllServicesButton->setText(QApplication::translate("MainWindow", "Disable All", nullptr));
#ifndef QT_NO_WHATSTHIS
        openRegeditButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openRegeditButton->setText(QApplication::translate("MainWindow", "Open regedit", nullptr));
#ifndef QT_NO_SHORTCUT
        openRegeditButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openServicesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openServicesButton->setText(QApplication::translate("MainWindow", "Open services", nullptr));
#ifndef QT_NO_SHORTCUT
        openServicesButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        label_19->setText(QApplication::translate("MainWindow", "Shortcuts", nullptr));
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
#ifndef QT_NO_WHATSTHIS
        completeShutdownButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        completeShutdownButton->setText(QApplication::translate("MainWindow", "Complete shutdown", nullptr));
#ifndef QT_NO_SHORTCUT
        completeShutdownButton->setShortcut(QString());
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
#ifndef QT_NO_WHATSTHIS
        RestartButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RestartButton->setText(QApplication::translate("MainWindow", "Restart", nullptr));
#ifndef QT_NO_SHORTCUT
        RestartButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        openTaskmgrButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openTaskmgrButton->setText(QApplication::translate("MainWindow", "Open taskmgr", nullptr));
#ifndef QT_NO_SHORTCUT
        openTaskmgrButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        loadTweaksSelectionButton->setText(QApplication::translate("MainWindow", "Load", nullptr));
        RestoreTweaksToDefaultButton->setText(QApplication::translate("MainWindow", "Restore tweaks\n"
" to Default", nullptr));
        applyTweaksButton->setText(QApplication::translate("MainWindow", "Apply predefined\n"
" tweaks", nullptr));
        unloadTweaksSelectionButton->setText(QApplication::translate("MainWindow", "Unload", nullptr));
        checkBox_Wuauserv->setText(QApplication::translate("MainWindow", "Windows Update - Wuauserv", nullptr));
#ifndef QT_NO_TOOLTIP
        knowLicenceExpirationButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        knowLicenceExpirationButton_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        knowLicenceExpirationButton_3->setText(QApplication::translate("MainWindow", "Check Services Status", nullptr));
#ifndef QT_NO_SHORTCUT
        knowLicenceExpirationButton_3->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Extras", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Fonts", nullptr));
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
        label_16->setText(QApplication::translate("MainWindow", "Outlook", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Current Local Time", nullptr));
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
        updateSystemTimeButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateSystemTimeButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        updateSystemTimeButton->setText(QApplication::translate("MainWindow", "Update system time", nullptr));
#ifndef QT_NO_SHORTCUT
        updateSystemTimeButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        restartExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        restartExplorerButton->setText(QApplication::translate("MainWindow", "Restart explorer.exe", nullptr));
#ifndef QT_NO_SHORTCUT
        restartExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        startExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        startExplorerButton->setText(QApplication::translate("MainWindow", "Start explorer.exe", nullptr));
#ifndef QT_NO_SHORTCUT
        startExplorerButton->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("MainWindow", "Tests", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        label->setText(QApplication::translate("MainWindow", "v2018.12.08", nullptr));
        menuNuevo->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdici_n->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuRun->setTitle(QApplication::translate("MainWindow", "Run", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
