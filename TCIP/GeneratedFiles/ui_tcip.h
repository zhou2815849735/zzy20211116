/********************************************************************************
** Form generated from reading UI file 'tcip.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCIP_H
#define UI_TCIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCIPClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_Port;
    QPushButton *pushButton_connect;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_addres;
    QLabel *label_2;
    QLineEdit *lineEdit_dValue;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_IWrite;
    QPushButton *pushButton_IRead;
    QPushButton *pushButton_SWrite;
    QPushButton *pushButton_FWrite;
    QPushButton *pushButton_SRead;
    QPushButton *pushButton_FRead;
    QPushButton *pushButton_CoilWrite;
    QPushButton *pushButton_CoilRead;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_addres_2;
    QLabel *label_7;
    QLineEdit *lineEdit_count;
    QPushButton *pushButton_test1;
    QPushButton *pushButton_test2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *textEdit_Write;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Write;
    QPushButton *pushButton_clear1;
    QTextEdit *textEdit_Read;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Read;
    QPushButton *pushButton_clear2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TCIPClass)
    {
        if (TCIPClass->objectName().isEmpty())
            TCIPClass->setObjectName(QStringLiteral("TCIPClass"));
        TCIPClass->resize(600, 530);
        centralWidget = new QWidget(TCIPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_IP = new QLineEdit(layoutWidget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        horizontalLayout_2->addWidget(lineEdit_IP);

        lineEdit_Port = new QLineEdit(layoutWidget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));

        horizontalLayout_2->addWidget(lineEdit_Port);

        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));

        horizontalLayout_2->addWidget(pushButton_connect);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 561, 121));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 271, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_addres = new QLineEdit(layoutWidget1);
        lineEdit_addres->setObjectName(QStringLiteral("lineEdit_addres"));

        horizontalLayout->addWidget(lineEdit_addres);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_dValue = new QLineEdit(layoutWidget1);
        lineEdit_dValue->setObjectName(QStringLiteral("lineEdit_dValue"));

        horizontalLayout->addWidget(lineEdit_dValue);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 320, 54));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_IWrite = new QPushButton(layoutWidget2);
        pushButton_IWrite->setObjectName(QStringLiteral("pushButton_IWrite"));

        gridLayout_2->addWidget(pushButton_IWrite, 0, 0, 1, 1);

        pushButton_IRead = new QPushButton(layoutWidget2);
        pushButton_IRead->setObjectName(QStringLiteral("pushButton_IRead"));

        gridLayout_2->addWidget(pushButton_IRead, 1, 0, 1, 1);

        pushButton_SWrite = new QPushButton(layoutWidget2);
        pushButton_SWrite->setObjectName(QStringLiteral("pushButton_SWrite"));

        gridLayout_2->addWidget(pushButton_SWrite, 0, 1, 1, 1);

        pushButton_FWrite = new QPushButton(layoutWidget2);
        pushButton_FWrite->setObjectName(QStringLiteral("pushButton_FWrite"));

        gridLayout_2->addWidget(pushButton_FWrite, 0, 2, 1, 1);

        pushButton_SRead = new QPushButton(layoutWidget2);
        pushButton_SRead->setObjectName(QStringLiteral("pushButton_SRead"));

        gridLayout_2->addWidget(pushButton_SRead, 1, 1, 1, 1);

        pushButton_FRead = new QPushButton(layoutWidget2);
        pushButton_FRead->setObjectName(QStringLiteral("pushButton_FRead"));

        gridLayout_2->addWidget(pushButton_FRead, 1, 2, 1, 1);

        pushButton_CoilWrite = new QPushButton(layoutWidget2);
        pushButton_CoilWrite->setObjectName(QStringLiteral("pushButton_CoilWrite"));

        gridLayout_2->addWidget(pushButton_CoilWrite, 0, 3, 1, 1);

        pushButton_CoilRead = new QPushButton(layoutWidget2);
        pushButton_CoilRead->setObjectName(QStringLiteral("pushButton_CoilRead"));

        gridLayout_2->addWidget(pushButton_CoilRead, 1, 3, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 170, 561, 301));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(190, 30, 271, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_addres_2 = new QLineEdit(layoutWidget_2);
        lineEdit_addres_2->setObjectName(QStringLiteral("lineEdit_addres_2"));

        horizontalLayout_4->addWidget(lineEdit_addres_2);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_count = new QLineEdit(layoutWidget_2);
        lineEdit_count->setObjectName(QStringLiteral("lineEdit_count"));

        horizontalLayout_4->addWidget(lineEdit_count);

        pushButton_test1 = new QPushButton(groupBox_2);
        pushButton_test1->setObjectName(QStringLiteral("pushButton_test1"));
        pushButton_test1->setGeometry(QRect(480, 20, 75, 23));
        pushButton_test2 = new QPushButton(groupBox_2);
        pushButton_test2->setObjectName(QStringLiteral("pushButton_test2"));
        pushButton_test2->setGeometry(QRect(480, 50, 75, 23));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 141, 22));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 80, 531, 212));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        textEdit_Write = new QTextEdit(widget1);
        textEdit_Write->setObjectName(QStringLiteral("textEdit_Write"));

        gridLayout->addWidget(textEdit_Write, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_Write = new QPushButton(widget1);
        pushButton_Write->setObjectName(QStringLiteral("pushButton_Write"));

        verticalLayout->addWidget(pushButton_Write);

        pushButton_clear1 = new QPushButton(widget1);
        pushButton_clear1->setObjectName(QStringLiteral("pushButton_clear1"));

        verticalLayout->addWidget(pushButton_clear1);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        textEdit_Read = new QTextEdit(widget1);
        textEdit_Read->setObjectName(QStringLiteral("textEdit_Read"));

        gridLayout->addWidget(textEdit_Read, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_Read = new QPushButton(widget1);
        pushButton_Read->setObjectName(QStringLiteral("pushButton_Read"));

        verticalLayout_2->addWidget(pushButton_Read);

        pushButton_clear2 = new QPushButton(widget1);
        pushButton_clear2->setObjectName(QStringLiteral("pushButton_clear2"));

        verticalLayout_2->addWidget(pushButton_clear2);


        gridLayout->addLayout(verticalLayout_2, 1, 3, 1, 1);

        TCIPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TCIPClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TCIPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TCIPClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TCIPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TCIPClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TCIPClass->setStatusBar(statusBar);

        retranslateUi(TCIPClass);

        QMetaObject::connectSlotsByName(TCIPClass);
    } // setupUi

    void retranslateUi(QMainWindow *TCIPClass)
    {
        TCIPClass->setWindowTitle(QApplication::translate("TCIPClass", "TCIP", Q_NULLPTR));
        lineEdit_IP->setText(QApplication::translate("TCIPClass", "127.0.0.1", Q_NULLPTR));
        lineEdit_Port->setText(QApplication::translate("TCIPClass", "502", Q_NULLPTR));
        pushButton_connect->setText(QApplication::translate("TCIPClass", "\350\277\236\346\216\245", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TCIPClass", "\345\215\225\344\270\252\346\225\260\345\200\274", Q_NULLPTR));
        label->setText(QApplication::translate("TCIPClass", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        lineEdit_addres->setText(QApplication::translate("TCIPClass", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("TCIPClass", "\345\200\274\357\274\232", Q_NULLPTR));
        lineEdit_dValue->setText(QApplication::translate("TCIPClass", "0", Q_NULLPTR));
        pushButton_IWrite->setText(QApplication::translate("TCIPClass", "IWrite", Q_NULLPTR));
        pushButton_IRead->setText(QApplication::translate("TCIPClass", "IRead", Q_NULLPTR));
        pushButton_SWrite->setText(QApplication::translate("TCIPClass", "SWrite", Q_NULLPTR));
        pushButton_FWrite->setText(QApplication::translate("TCIPClass", "FWrite", Q_NULLPTR));
        pushButton_SRead->setText(QApplication::translate("TCIPClass", "SRead", Q_NULLPTR));
        pushButton_FRead->setText(QApplication::translate("TCIPClass", "FRead", Q_NULLPTR));
        pushButton_CoilWrite->setText(QApplication::translate("TCIPClass", "CoilWrite", Q_NULLPTR));
        pushButton_CoilRead->setText(QApplication::translate("TCIPClass", "CoilRead", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TCIPClass", "\345\244\232\344\270\252\346\225\260\345\200\274", Q_NULLPTR));
        label_3->setText(QApplication::translate("TCIPClass", "\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        lineEdit_addres_2->setText(QApplication::translate("TCIPClass", "0", Q_NULLPTR));
        label_7->setText(QApplication::translate("TCIPClass", "\351\225\277\345\272\246\357\274\232", Q_NULLPTR));
        lineEdit_count->setText(QApplication::translate("TCIPClass", "10", Q_NULLPTR));
        pushButton_test1->setText(QApplication::translate("TCIPClass", "test", Q_NULLPTR));
        pushButton_test2->setText(QApplication::translate("TCIPClass", "test", Q_NULLPTR));
        label_4->setText(QApplication::translate("TCIPClass", "\346\225\260\346\215\256\347\261\273\345\236\213:", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("TCIPClass", "bool", Q_NULLPTR)
         << QApplication::translate("TCIPClass", "float", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("TCIPClass", "\345\206\231\345\205\245\345\200\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("TCIPClass", "\350\257\273\345\217\226\345\200\274", Q_NULLPTR));
        pushButton_Write->setText(QApplication::translate("TCIPClass", "\345\206\231\345\205\245", Q_NULLPTR));
        pushButton_clear1->setText(QApplication::translate("TCIPClass", "\346\270\205\347\251\272", Q_NULLPTR));
        pushButton_Read->setText(QApplication::translate("TCIPClass", "\350\257\273\345\217\226", Q_NULLPTR));
        pushButton_clear2->setText(QApplication::translate("TCIPClass", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TCIPClass: public Ui_TCIPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCIP_H
