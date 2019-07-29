/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *QWalk1D;
    QCustomPlot *customPlot;
    QPushButton *startButton;
    QComboBox *InitialCondition;
    QLabel *label;
    QWidget *QWalk2D;
    QCustomPlot *customPlot_2;
    QPushButton *startButton_2;
    QComboBox *InitialCondition_2b;
    QComboBox *InitialCondition_2;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(873, 906);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 871, 884));
        tabWidget->setMinimumSize(QSize(581, 821));
        tabWidget->setElideMode(Qt::ElideLeft);
        QWalk1D = new QWidget();
        QWalk1D->setObjectName(QStringLiteral("QWalk1D"));
        QWalk1D->setMinimumSize(QSize(581, 821));
        customPlot = new QCustomPlot(QWalk1D);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setEnabled(true);
        customPlot->setGeometry(QRect(0, 0, 871, 822));
        startButton = new QPushButton(QWalk1D);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(0, 820, 101, 31));
        InitialCondition = new QComboBox(QWalk1D);
        InitialCondition->setObjectName(QStringLiteral("InitialCondition"));
        InitialCondition->setGeometry(QRect(750, 820, 121, 31));
        InitialCondition->setMinimumSize(QSize(121, 31));
        InitialCondition->setMaxVisibleItems(3);
        label = new QLabel(QWalk1D);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 830, 501, 16));
        tabWidget->addTab(QWalk1D, QString());
        QWalk2D = new QWidget();
        QWalk2D->setObjectName(QStringLiteral("QWalk2D"));
        customPlot_2 = new QCustomPlot(QWalk2D);
        customPlot_2->setObjectName(QStringLiteral("customPlot_2"));
        customPlot_2->setEnabled(true);
        customPlot_2->setGeometry(QRect(0, 0, 871, 822));
        startButton_2 = new QPushButton(QWalk2D);
        startButton_2->setObjectName(QStringLiteral("startButton_2"));
        startButton_2->setGeometry(QRect(0, 820, 101, 31));
        InitialCondition_2b = new QComboBox(QWalk2D);
        InitialCondition_2b->setObjectName(QStringLiteral("InitialCondition_2b"));
        InitialCondition_2b->setGeometry(QRect(630, 820, 121, 31));
        InitialCondition_2b->setMinimumSize(QSize(121, 31));
        InitialCondition_2b->setMaxVisibleItems(3);
        InitialCondition_2 = new QComboBox(QWalk2D);
        InitialCondition_2->setObjectName(QStringLiteral("InitialCondition_2"));
        InitialCondition_2->setGeometry(QRect(750, 820, 121, 31));
        InitialCondition_2->setMinimumSize(QSize(121, 31));
        InitialCondition_2->setMaxVisibleItems(3);
        label_2 = new QLabel(QWalk2D);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 830, 501, 16));
        tabWidget->addTab(QWalk2D, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        InitialCondition->setCurrentIndex(-1);
        InitialCondition_2b->setCurrentIndex(-1);
        InitialCondition_2->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QCustomPlot plot examples", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0));
        InitialCondition->setCurrentText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(QWalk1D), QApplication::translate("MainWindow", "Line: Isotropic 1-D lattice", 0));
        startButton_2->setText(QApplication::translate("MainWindow", "Start", 0));
        InitialCondition_2b->setCurrentText(QString());
        InitialCondition_2->setCurrentText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<url>https://arxiv.org/pdf/quant-ph/0304204.pdf<url>", 0));
        tabWidget->setTabText(tabWidget->indexOf(QWalk2D), QApplication::translate("MainWindow", "Plane: Isotropic 2-D lattice", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
