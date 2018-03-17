/********************************************************************************
** Form generated from reading UI file 'QTreadTest.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTREADTEST_H
#define UI_QTREADTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTreadTestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTreadTestClass)
    {
        if (QTreadTestClass->objectName().isEmpty())
            QTreadTestClass->setObjectName(QStringLiteral("QTreadTestClass"));
        QTreadTestClass->resize(624, 445);
        centralWidget = new QWidget(QTreadTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 47, 12));
        QTreadTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTreadTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 624, 21));
        QTreadTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTreadTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTreadTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTreadTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTreadTestClass->setStatusBar(statusBar);

        retranslateUi(QTreadTestClass);
        QObject::connect(pushButton, SIGNAL(clicked()), QTreadTestClass, SLOT(on_butten_click()));

        QMetaObject::connectSlotsByName(QTreadTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTreadTestClass)
    {
        QTreadTestClass->setWindowTitle(QApplication::translate("QTreadTestClass", "QTreadTest", nullptr));
        pushButton->setText(QApplication::translate("QTreadTestClass", "QThread Start", nullptr));
        label->setText(QApplication::translate("QTreadTestClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTreadTestClass: public Ui_QTreadTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTREADTEST_H
