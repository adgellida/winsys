#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;

    about.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    about.setText(tr("<p align='left'><b>winsys</b></p></br>"
                  "<p align='left'>Configurable app referent to packages, updates and configurations</p></br>"
                  "<p align='left'>Built with Qt 5.8.0. Designed for Windows 10 x64."
				  "<p align='left'>Contains bugs. Alpha test status.</p></br>"
                  "<p align='left'>Based on <a href='https://github.com/adgellida/ubunsys'>ubunsys</a></p></br>"
                  "<p align='left'>Credits to <a href='https://thenounproject.com/bernar.novalyi/'>Bernar Novalyi</a> from Noun Project "
                  "that creates the app <a href='https://thenounproject.com/term/terminal/715962/'>icon</a> used here. Beautiful!</p></br>"
                  "<p align='left'>Thanks to:</p></br>"
                  "<p align='left'><a href='https://www.tenforums.com'>tenforums</a>. Any scripts obtained from here.</p></br>"
                  "<p align='left'><a href='https://chocolatey.org'>chocolatey</a>. This app is used.</p></br>"
                  "<p align='left'><a href='https://drp.su/en'>DriverPack</a>. Their executable is used.</p></br>"
                  "<p align='left'><a href='http://www.thewindowsclub.com'>thewindowsclub</a>. Any apps are used.</p></br>"
                  "<p align='left'><a href='https://wumt.blogspot.com.es/'>Windows Update MiniTool</a>. This app is used.</p></br>"

                  "<p align='left'><a href='https://github.com/adgellida/winsys'>Git Repo</a></p></br>"));

    about.setInformativeText(tr("Copyright (c) 2017 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\n"
                             "v2018.10.23"));

    about.setWindowTitle(tr("About"));
    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/winsys.png"));
    about.setWindowIcon(QIcon(":/images/winsys.png"));
    //about.setIcon(":/images/winsys.ico");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
