/********************************************************************************
** Form generated from reading UI file 'LogUI.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGUI_H
#define UI_LOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogUI
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *msgEdt;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *errorEdt;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *warnEdt;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QPlainTextEdit *infEdt;

    void setupUi(QWidget *LogUI)
    {
        if (LogUI->objectName().isEmpty())
            LogUI->setObjectName(QStringLiteral("LogUI"));
        LogUI->resize(671, 199);
        horizontalLayout = new QHBoxLayout(LogUI);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msgEdt = new QTabWidget(LogUI);
        msgEdt->setObjectName(QStringLiteral("msgEdt"));
        msgEdt->setTabPosition(QTabWidget::North);
        msgEdt->setTabShape(QTabWidget::Rounded);
        msgEdt->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        errorEdt = new QPlainTextEdit(tab);
        errorEdt->setObjectName(QStringLiteral("errorEdt"));

        horizontalLayout_2->addWidget(errorEdt);

        msgEdt->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        warnEdt = new QPlainTextEdit(tab_2);
        warnEdt->setObjectName(QStringLiteral("warnEdt"));

        horizontalLayout_3->addWidget(warnEdt);

        msgEdt->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        infEdt = new QPlainTextEdit(tab_3);
        infEdt->setObjectName(QStringLiteral("infEdt"));

        horizontalLayout_4->addWidget(infEdt);

        msgEdt->addTab(tab_3, QString());

        horizontalLayout->addWidget(msgEdt);


        retranslateUi(LogUI);

        msgEdt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogUI);
    } // setupUi

    void retranslateUi(QWidget *LogUI)
    {
        LogUI->setWindowTitle(QApplication::translate("LogUI", "LogUI", Q_NULLPTR));
        msgEdt->setTabText(msgEdt->indexOf(tab), QApplication::translate("LogUI", "\351\224\231\350\257\257", Q_NULLPTR));
        msgEdt->setTabText(msgEdt->indexOf(tab_2), QApplication::translate("LogUI", "\350\255\246\345\221\212", Q_NULLPTR));
        msgEdt->setTabText(msgEdt->indexOf(tab_3), QApplication::translate("LogUI", "\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogUI: public Ui_LogUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGUI_H
