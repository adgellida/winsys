/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
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
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QPushButton *enableFirewallButton;
    QLabel *label_12;
    QPushButton *disableFirewallButton;
    QPushButton *getFirewallStatusButton;
    QPushButton *completeShutdownButton;
    QPushButton *openRegeditButton;
    QPushButton *openTaskmgrButton;
    QPushButton *restartExplorerButton;
    QPushButton *startExplorerButton;
    QPushButton *knowLicenceExpirationButton;
    QLabel *label_13;
    QLabel *label_19;
    QPushButton *openServicesButton;
    QPushButton *openCmdButton;
    QPushButton *openPowershellButton;
    QPushButton *fixTimeOnDualbootButton;
    QPushButton *updateSystemTimeButton;
    QPushButton *restoreDefaultsServicesButton;
    QLabel *label_20;
    QPushButton *RestartButton;
    QPushButton *searchUpdatesButton;
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
    QPushButton *RestoreServicesToDefaultButton;
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
        runDriverPackOnlineButton->setGeometry(QRect(10, 70, 120, 36));
        runDriverPackOnlineButton->setIconSize(QSize(30, 30));
        runDriverPackOnlineButton->setCheckable(false);
        installChocolateyButton = new QPushButton(tab_11);
        installChocolateyButton->setObjectName(QStringLiteral("installChocolateyButton"));
        installChocolateyButton->setEnabled(true);
        installChocolateyButton->setGeometry(QRect(10, 30, 120, 36));
        installChocolateyButton->setIconSize(QSize(30, 30));
        installChocolateyButton->setCheckable(false);
        tabWidget_2->addTab(tab_11, QString());
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 691, 441));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_3->setFont(font1);
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        enableFirewallButton = new QPushButton(tab_6);
        enableFirewallButton->setObjectName(QStringLiteral("enableFirewallButton"));
        enableFirewallButton->setGeometry(QRect(10, 70, 120, 36));
        enableFirewallButton->setIconSize(QSize(30, 30));
        enableFirewallButton->setCheckable(false);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 51, 16));
        label_12->setFont(font);
        disableFirewallButton = new QPushButton(tab_6);
        disableFirewallButton->setObjectName(QStringLiteral("disableFirewallButton"));
        disableFirewallButton->setGeometry(QRect(10, 110, 120, 36));
        disableFirewallButton->setIconSize(QSize(30, 30));
        disableFirewallButton->setCheckable(false);
        getFirewallStatusButton = new QPushButton(tab_6);
        getFirewallStatusButton->setObjectName(QStringLiteral("getFirewallStatusButton"));
        getFirewallStatusButton->setEnabled(false);
        getFirewallStatusButton->setGeometry(QRect(10, 150, 120, 36));
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
        completeShutdownButton = new QPushButton(tab_6);
        completeShutdownButton->setObjectName(QStringLiteral("completeShutdownButton"));
        completeShutdownButton->setGeometry(QRect(270, 30, 120, 36));
        completeShutdownButton->setIconSize(QSize(30, 30));
        completeShutdownButton->setCheckable(false);
        openRegeditButton = new QPushButton(tab_6);
        openRegeditButton->setObjectName(QStringLiteral("openRegeditButton"));
        openRegeditButton->setGeometry(QRect(10, 320, 120, 36));
        openRegeditButton->setIconSize(QSize(30, 30));
        openRegeditButton->setCheckable(false);
        openTaskmgrButton = new QPushButton(tab_6);
        openTaskmgrButton->setObjectName(QStringLiteral("openTaskmgrButton"));
        openTaskmgrButton->setGeometry(QRect(140, 280, 120, 36));
        openTaskmgrButton->setIconSize(QSize(30, 30));
        openTaskmgrButton->setCheckable(false);
        restartExplorerButton = new QPushButton(tab_6);
        restartExplorerButton->setObjectName(QStringLiteral("restartExplorerButton"));
        restartExplorerButton->setEnabled(false);
        restartExplorerButton->setGeometry(QRect(270, 240, 120, 36));
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
        restartExplorerButton->setPalette(palette1);
        restartExplorerButton->setIconSize(QSize(30, 30));
        restartExplorerButton->setCheckable(false);
        startExplorerButton = new QPushButton(tab_6);
        startExplorerButton->setObjectName(QStringLiteral("startExplorerButton"));
        startExplorerButton->setEnabled(false);
        startExplorerButton->setGeometry(QRect(270, 280, 120, 36));
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
        knowLicenceExpirationButton = new QPushButton(tab_6);
        knowLicenceExpirationButton->setObjectName(QStringLiteral("knowLicenceExpirationButton"));
        knowLicenceExpirationButton->setGeometry(QRect(140, 30, 120, 36));
        knowLicenceExpirationButton->setIconSize(QSize(30, 30));
        knowLicenceExpirationButton->setCheckable(false);
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(140, 10, 51, 16));
        label_13->setFont(font);
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 220, 61, 16));
        label_19->setFont(font);
        openServicesButton = new QPushButton(tab_6);
        openServicesButton->setObjectName(QStringLiteral("openServicesButton"));
        openServicesButton->setGeometry(QRect(140, 240, 120, 36));
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
        fixTimeOnDualbootButton = new QPushButton(tab_6);
        fixTimeOnDualbootButton->setObjectName(QStringLiteral("fixTimeOnDualbootButton"));
        fixTimeOnDualbootButton->setEnabled(false);
        fixTimeOnDualbootButton->setGeometry(QRect(140, 70, 120, 36));
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
        fixTimeOnDualbootButton->setPalette(palette3);
        fixTimeOnDualbootButton->setIconSize(QSize(30, 30));
        fixTimeOnDualbootButton->setCheckable(false);
        updateSystemTimeButton = new QPushButton(tab_6);
        updateSystemTimeButton->setObjectName(QStringLiteral("updateSystemTimeButton"));
        updateSystemTimeButton->setEnabled(false);
        updateSystemTimeButton->setGeometry(QRect(140, 110, 120, 36));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        updateSystemTimeButton->setPalette(palette4);
        updateSystemTimeButton->setIconSize(QSize(30, 30));
        updateSystemTimeButton->setCheckable(false);
        restoreDefaultsServicesButton = new QPushButton(tab_6);
        restoreDefaultsServicesButton->setObjectName(QStringLiteral("restoreDefaultsServicesButton"));
        restoreDefaultsServicesButton->setEnabled(false);
        restoreDefaultsServicesButton->setGeometry(QRect(270, 320, 120, 36));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        restoreDefaultsServicesButton->setPalette(palette5);
        restoreDefaultsServicesButton->setIconSize(QSize(30, 30));
        restoreDefaultsServicesButton->setCheckable(false);
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(270, 10, 51, 16));
        label_20->setFont(font);
        RestartButton = new QPushButton(tab_6);
        RestartButton->setObjectName(QStringLiteral("RestartButton"));
        RestartButton->setGeometry(QRect(270, 70, 120, 36));
        RestartButton->setIconSize(QSize(30, 30));
        RestartButton->setCheckable(false);
        searchUpdatesButton = new QPushButton(tab_6);
        searchUpdatesButton->setObjectName(QStringLiteral("searchUpdatesButton"));
        searchUpdatesButton->setGeometry(QRect(10, 30, 120, 36));
        searchUpdatesButton->setIconSize(QSize(30, 30));
        searchUpdatesButton->setCheckable(false);
        tabWidget_3->addTab(tab_6, QString());
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
        checkBox_004->setGeometry(QRect(270, 30, 181, 23));
        checkBox_008 = new QCheckBox(tab_14);
        checkBox_008->setObjectName(QStringLiteral("checkBox_008"));
        checkBox_008->setGeometry(QRect(270, 70, 240, 23));
        checkBox_002 = new QCheckBox(tab_14);
        checkBox_002->setObjectName(QStringLiteral("checkBox_002"));
        checkBox_002->setGeometry(QRect(270, 10, 201, 23));
        checkBox_001 = new QCheckBox(tab_14);
        checkBox_001->setObjectName(QStringLiteral("checkBox_001"));
        checkBox_001->setGeometry(QRect(10, 10, 201, 23));
        checkBox_007 = new QCheckBox(tab_14);
        checkBox_007->setObjectName(QStringLiteral("checkBox_007"));
        checkBox_007->setGeometry(QRect(10, 70, 240, 23));
        checkBox_003 = new QCheckBox(tab_14);
        checkBox_003->setObjectName(QStringLiteral("checkBox_003"));
        checkBox_003->setGeometry(QRect(10, 30, 141, 23));
        checkBox_006 = new QCheckBox(tab_14);
        checkBox_006->setObjectName(QStringLiteral("checkBox_006"));
        checkBox_006->setGeometry(QRect(270, 50, 230, 23));
        checkBox_005 = new QCheckBox(tab_14);
        checkBox_005->setObjectName(QStringLiteral("checkBox_005"));
        checkBox_005->setGeometry(QRect(10, 50, 240, 23));
        tabWidget_6->addTab(tab_14, QString());
        loadServicesSelectionButton = new QPushButton(tab_5);
        loadServicesSelectionButton->setObjectName(QStringLiteral("loadServicesSelectionButton"));
        loadServicesSelectionButton->setGeometry(QRect(600, 210, 90, 23));
        disableAllServicesButton = new QPushButton(tab_5);
        disableAllServicesButton->setObjectName(QStringLiteral("disableAllServicesButton"));
        disableAllServicesButton->setGeometry(QRect(600, 30, 91, 23));
        enableAllServicesButton = new QPushButton(tab_5);
        enableAllServicesButton->setObjectName(QStringLiteral("enableAllServicesButton"));
        enableAllServicesButton->setGeometry(QRect(600, 60, 90, 23));
        saveSelectionButton_2 = new QPushButton(tab_5);
        saveSelectionButton_2->setObjectName(QStringLiteral("saveSelectionButton_2"));
        saveSelectionButton_2->setEnabled(false);
        saveSelectionButton_2->setGeometry(QRect(600, 240, 90, 23));
        applyButton = new QPushButton(tab_5);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(600, 120, 90, 23));
        RestoreServicesToDefaultButton = new QPushButton(tab_5);
        RestoreServicesToDefaultButton->setObjectName(QStringLiteral("RestoreServicesToDefaultButton"));
        RestoreServicesToDefaultButton->setGeometry(QRect(600, 150, 90, 41));
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
        label_63->setGeometry(QRect(10, 10, 41, 21));
        label_63->setFont(font1);
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_62 = new QLabel(tab_9);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(10, 10, 41, 21));
        label_62->setFont(font1);
        tabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_61 = new QLabel(tab_10);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(10, 10, 41, 21));
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

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(2);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "winsys", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
        actionCut->setIconText(QApplication::translate("MainWindow", "Cortar", Q_NULLPTR));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", Q_NULLPTR));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", Q_NULLPTR));
        unselectAllButton->setText(QApplication::translate("MainWindow", "Unselect All", Q_NULLPTR));
        selectAllButton->setText(QApplication::translate("MainWindow", "Select All", Q_NULLPTR));
        installSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Install", Q_NULLPTR));
        uninstallSelectedPackagesButton->setText(QApplication::translate("MainWindow", "Uninstall", Q_NULLPTR));
        loadSelectionButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        saveSelectionButton->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Utilities", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runDriverPackOnlineButton->setText(QApplication::translate("MainWindow", "Run DriverPack Online", Q_NULLPTR));
        runDriverPackOnlineButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        installChocolateyButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installChocolateyButton->setText(QApplication::translate("MainWindow", "Install Chocolatey", Q_NULLPTR));
        installChocolateyButton->setShortcut(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Packages 1/1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Install packages", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        enableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFirewallButton->setText(QApplication::translate("MainWindow", "Enable firewall", Q_NULLPTR));
        enableFirewallButton->setShortcut(QString());
        label_12->setText(QApplication::translate("MainWindow", "Security", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        disableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFirewallButton->setText(QApplication::translate("MainWindow", "Disable firewall", Q_NULLPTR));
        disableFirewallButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        getFirewallStatusButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        getFirewallStatusButton->setText(QApplication::translate("MainWindow", "Get firewall status", Q_NULLPTR));
        getFirewallStatusButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        completeShutdownButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        completeShutdownButton->setText(QApplication::translate("MainWindow", "Complete shutdown", Q_NULLPTR));
        completeShutdownButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openRegeditButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openRegeditButton->setText(QApplication::translate("MainWindow", "Open regedit", Q_NULLPTR));
        openRegeditButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openTaskmgrButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openTaskmgrButton->setText(QApplication::translate("MainWindow", "Open taskmgr", Q_NULLPTR));
        openTaskmgrButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        restartExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        restartExplorerButton->setText(QApplication::translate("MainWindow", "Restart explorer.exe", Q_NULLPTR));
        restartExplorerButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        startExplorerButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        startExplorerButton->setText(QApplication::translate("MainWindow", "Start explorer.exe", Q_NULLPTR));
        startExplorerButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        knowLicenceExpirationButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        knowLicenceExpirationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        knowLicenceExpirationButton->setText(QApplication::translate("MainWindow", "Know licence expiration", Q_NULLPTR));
        knowLicenceExpirationButton->setShortcut(QString());
        label_13->setText(QApplication::translate("MainWindow", "Extra", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Shortcuts", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        openServicesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openServicesButton->setText(QApplication::translate("MainWindow", "Open services", Q_NULLPTR));
        openServicesButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openCmdButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openCmdButton->setText(QApplication::translate("MainWindow", "Open cmd", Q_NULLPTR));
        openCmdButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openPowershellButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openPowershellButton->setText(QApplication::translate("MainWindow", "Open Powershell", Q_NULLPTR));
        openPowershellButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        fixTimeOnDualbootButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fixTimeOnDualbootButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixTimeOnDualbootButton->setText(QApplication::translate("MainWindow", "Fix time on dualboot", Q_NULLPTR));
        fixTimeOnDualbootButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        updateSystemTimeButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When your Windows license expires?</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateSystemTimeButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        updateSystemTimeButton->setText(QApplication::translate("MainWindow", "Update system time", Q_NULLPTR));
        updateSystemTimeButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        restoreDefaultsServicesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        restoreDefaultsServicesButton->setText(QApplication::translate("MainWindow", "Restore Defaults\n"
"Services", Q_NULLPTR));
        restoreDefaultsServicesButton->setShortcut(QString());
        label_20->setText(QApplication::translate("MainWindow", "Energy", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        RestartButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RestartButton->setText(QApplication::translate("MainWindow", "Restart", Q_NULLPTR));
        RestartButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        searchUpdatesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        searchUpdatesButton->setText(QApplication::translate("MainWindow", "Search updates", Q_NULLPTR));
        searchUpdatesButton->setShortcut(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Tweaks 1/1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tweaks", Q_NULLPTR));
        checkBox_004->setText(QApplication::translate("MainWindow", "004.BITS - DISABLE", Q_NULLPTR));
        checkBox_008->setText(QApplication::translate("MainWindow", "008.Windows Update - wuauserv - DISABLE", Q_NULLPTR));
        checkBox_002->setText(QApplication::translate("MainWindow", "002.Superfetch - SysMain - DISABLE", Q_NULLPTR));
        checkBox_001->setText(QApplication::translate("MainWindow", "001.Superfetch - SysMain - ENABLE", Q_NULLPTR));
        checkBox_007->setText(QApplication::translate("MainWindow", "007.Windows Update - wuauserv - ENABLE", Q_NULLPTR));
        checkBox_003->setText(QApplication::translate("MainWindow", "003.BITS - ENABLE", Q_NULLPTR));
        checkBox_006->setText(QApplication::translate("MainWindow", "006.Windows Search - WSearch - DISABLE", Q_NULLPTR));
        checkBox_005->setText(QApplication::translate("MainWindow", "005.Windows Search - WSearch - ENABLE", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_14), QApplication::translate("MainWindow", "Services 1/1", Q_NULLPTR));
        loadServicesSelectionButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        disableAllServicesButton->setText(QApplication::translate("MainWindow", "Disable All", Q_NULLPTR));
        enableAllServicesButton->setText(QApplication::translate("MainWindow", "Enable All", Q_NULLPTR));
        saveSelectionButton_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", Q_NULLPTR));
        RestoreServicesToDefaultButton->setText(QApplication::translate("MainWindow", "Restore\n"
" to Default", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Services", Q_NULLPTR));
        label_63->setText(QApplication::translate("MainWindow", "Pending", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("MainWindow", "Normal user", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "Pending", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("MainWindow", "Advanced user", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "Pending", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QApplication::translate("MainWindow", "Developer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "System", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Check system integrity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        integrityCheckButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff55ff;\">SFC</span><span style=\" color:#c0c0c0;\"/><span style=\" color:#ff55ff;\">/ScanNow</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        integrityCheckButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        integrityCheckButton->setText(QString());
        integrityCheckButton->setShortcut(QString());
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "Repair  1/1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Repair", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "v2017.04.27", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        updateAppButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update program</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updateAppButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        updateScriptsButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update scripts</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        updateScriptsButton->setText(QString());
        menuNuevo->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdici_n->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
