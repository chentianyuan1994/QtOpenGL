/********************************************************************************
** Form generated from reading UI file 'OpenGLMainWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGLMAINWND_H
#define UI_OPENGLMAINWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "MyOpenGLClass.h"

QT_BEGIN_NAMESPACE

class Ui_COpenGLMainWnd
{
public:
    QWidget *centralWidget;
    MyOpenGLClass *openGLWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *COpenGLMainWnd)
    {
        if (COpenGLMainWnd->objectName().isEmpty())
            COpenGLMainWnd->setObjectName(QStringLiteral("COpenGLMainWnd"));
        COpenGLMainWnd->resize(518, 363);
        centralWidget = new QWidget(COpenGLMainWnd);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openGLWidget = new MyOpenGLClass(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(30, 20, 471, 291));
        COpenGLMainWnd->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(COpenGLMainWnd);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 23));
        COpenGLMainWnd->setMenuBar(menuBar);
        mainToolBar = new QToolBar(COpenGLMainWnd);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        COpenGLMainWnd->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(COpenGLMainWnd);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        COpenGLMainWnd->setStatusBar(statusBar);

        retranslateUi(COpenGLMainWnd);

        QMetaObject::connectSlotsByName(COpenGLMainWnd);
    } // setupUi

    void retranslateUi(QMainWindow *COpenGLMainWnd)
    {
        COpenGLMainWnd->setWindowTitle(QApplication::translate("COpenGLMainWnd", "COpenGLMainWnd", 0));
    } // retranslateUi

};

namespace Ui {
    class COpenGLMainWnd: public Ui_COpenGLMainWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGLMAINWND_H
