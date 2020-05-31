/********************************************************************************
** Form generated from reading UI file 'qteasylogdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTEASYLOGDEMO_H
#define UI_QTEASYLOGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtEasyLogDemoClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *logLyt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtEasyLogDemoClass)
    {
        if (QtEasyLogDemoClass->objectName().isEmpty())
            QtEasyLogDemoClass->setObjectName(QStringLiteral("QtEasyLogDemoClass"));
        QtEasyLogDemoClass->resize(600, 400);
        centralWidget = new QWidget(QtEasyLogDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        logLyt = new QGridLayout();
        logLyt->setSpacing(6);
        logLyt->setObjectName(QStringLiteral("logLyt"));

        gridLayout_2->addLayout(logLyt, 0, 0, 1, 1);

        QtEasyLogDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtEasyLogDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        QtEasyLogDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtEasyLogDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtEasyLogDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtEasyLogDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtEasyLogDemoClass->setStatusBar(statusBar);

        retranslateUi(QtEasyLogDemoClass);

        QMetaObject::connectSlotsByName(QtEasyLogDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtEasyLogDemoClass)
    {
        QtEasyLogDemoClass->setWindowTitle(QApplication::translate("QtEasyLogDemoClass", "QtEasyLogDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtEasyLogDemoClass: public Ui_QtEasyLogDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTEASYLOGDEMO_H
