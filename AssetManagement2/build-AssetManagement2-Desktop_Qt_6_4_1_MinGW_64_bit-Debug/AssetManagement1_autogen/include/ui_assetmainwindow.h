/********************************************************************************
** Form generated from reading UI file 'assetmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSETMAINWINDOW_H
#define UI_ASSETMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssetMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label_22;
    QLabel *label_19;
    QLabel *label_11;
    QLabel *Image;
    QPushButton *Upload;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_13;
    QLineEdit *lineEdit_assetname;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_2_assettype;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_14;
    QLineEdit *lineEdit_3_descripation;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_12;
    QLineEdit *lineEdit_7_owner;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_15;
    QLineEdit *lineEdit_5_manufacturer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *label_16;
    QLineEdit *lineEdit_6_model;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_17;
    QLineEdit *lineEdit_4_serial_number;
    QLabel *label_8;
    QComboBox *comboBox_condition;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *site;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QTextEdit *textEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Save;
    QPushButton *View;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AssetMainWindow)
    {
        if (AssetMainWindow->objectName().isEmpty())
            AssetMainWindow->setObjectName("AssetMainWindow");
        AssetMainWindow->resize(753, 581);
        centralwidget = new QWidget(AssetMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8(""));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(0, 330, 751, 31));
        label_22->setStyleSheet(QString::fromUtf8("background-color:lightblue;"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(0, 0, 751, 31));
        label_19->setStyleSheet(QString::fromUtf8("background-color:lightblue;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(340, 160, 80, 17));
        Image = new QLabel(groupBox);
        Image->setObjectName("Image");
        Image->setGeometry(QRect(550, 90, 181, 141));
        Image->setStyleSheet(QString::fromUtf8(""));
        Upload = new QPushButton(groupBox);
        Upload->setObjectName("Upload");
        Upload->setGeometry(QRect(610, 260, 80, 25));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        Upload->setFont(font);
        Upload->setStyleSheet(QString::fromUtf8("background-color:blue;"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 40, 301, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout->addWidget(label_13);

        lineEdit_assetname = new QLineEdit(layoutWidget);
        lineEdit_assetname->setObjectName("lineEdit_assetname");

        horizontalLayout->addWidget(lineEdit_assetname);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        lineEdit_2_assettype = new QLineEdit(layoutWidget);
        lineEdit_2_assettype->setObjectName("lineEdit_2_assettype");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2_assettype);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_5->addWidget(label_14);

        lineEdit_3_descripation = new QLineEdit(layoutWidget);
        lineEdit_3_descripation->setObjectName("lineEdit_3_descripation");

        horizontalLayout_5->addWidget(lineEdit_3_descripation);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_7->addWidget(label_12);

        lineEdit_7_owner = new QLineEdit(layoutWidget);
        lineEdit_7_owner->setObjectName("lineEdit_7_owner");

        horizontalLayout_7->addWidget(lineEdit_7_owner);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_3->addWidget(label_15);

        lineEdit_5_manufacturer = new QLineEdit(layoutWidget);
        lineEdit_5_manufacturer->setObjectName("lineEdit_5_manufacturer");

        horizontalLayout_3->addWidget(lineEdit_5_manufacturer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_6->addWidget(label_16);

        lineEdit_6_model = new QLineEdit(layoutWidget);
        lineEdit_6_model->setObjectName("lineEdit_6_model");

        horizontalLayout_6->addWidget(lineEdit_6_model);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_4->addWidget(label_17);

        lineEdit_4_serial_number = new QLineEdit(layoutWidget);
        lineEdit_4_serial_number->setObjectName("lineEdit_4_serial_number");

        horizontalLayout_4->addWidget(lineEdit_4_serial_number);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        comboBox_condition = new QComboBox(layoutWidget);
        comboBox_condition->addItem(QString());
        comboBox_condition->addItem(QString());
        comboBox_condition->addItem(QString());
        comboBox_condition->setObjectName("comboBox_condition");
        comboBox_condition->setStyleSheet(QString::fromUtf8("background-color:gray;"));

        verticalLayout_3->addWidget(comboBox_condition);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 370, 301, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        site = new QComboBox(layoutWidget1);
        site->addItem(QString());
        site->addItem(QString());
        site->addItem(QString());
        site->setObjectName("site");
        site->setStyleSheet(QString::fromUtf8("background-color:gray;"));

        horizontalLayout_2->addWidget(site);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_9->addWidget(label_10);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName("textEdit");

        horizontalLayout_9->addWidget(textEdit);


        verticalLayout_4->addLayout(horizontalLayout_9);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(560, 490, 171, 26));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        Save = new QPushButton(layoutWidget2);
        Save->setObjectName("Save");
        Save->setFont(font);
        Save->setStyleSheet(QString::fromUtf8("background-color:yellow;"));

        horizontalLayout_8->addWidget(Save);

        View = new QPushButton(layoutWidget2);
        View->setObjectName("View");
        View->setFont(font);
        View->setStyleSheet(QString::fromUtf8("background-color:yellow;"));

        horizontalLayout_8->addWidget(View);


        verticalLayout->addWidget(groupBox);

        AssetMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AssetMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 753, 22));
        AssetMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AssetMainWindow);
        statusbar->setObjectName("statusbar");
        AssetMainWindow->setStatusBar(statusbar);

        retranslateUi(AssetMainWindow);

        QMetaObject::connectSlotsByName(AssetMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AssetMainWindow)
    {
        AssetMainWindow->setWindowTitle(QCoreApplication::translate("AssetMainWindow", "AssetMainWindow", nullptr));
        groupBox->setTitle(QString());
        label_22->setText(QCoreApplication::translate("AssetMainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Asset Location</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("AssetMainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Asset Information</span></p></body></html>", nullptr));
        label_11->setText(QString());
        Image->setText(QString());
        Upload->setText(QCoreApplication::translate("AssetMainWindow", "Update", nullptr));
        label->setText(QCoreApplication::translate("AssetMainWindow", "Asset Name", nullptr));
        label_13->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_2->setText(QCoreApplication::translate("AssetMainWindow", "Asset Type", nullptr));
        label_3->setText(QCoreApplication::translate("AssetMainWindow", "Description", nullptr));
        label_14->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_7->setText(QCoreApplication::translate("AssetMainWindow", "Ower       ", nullptr));
        label_12->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_5->setText(QCoreApplication::translate("AssetMainWindow", "Manufacturer", nullptr));
        label_15->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_6->setText(QCoreApplication::translate("AssetMainWindow", "Model       ", nullptr));
        label_16->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_4->setText(QCoreApplication::translate("AssetMainWindow", "Serial Number", nullptr));
        label_17->setText(QCoreApplication::translate("AssetMainWindow", "*", nullptr));
        label_8->setText(QCoreApplication::translate("AssetMainWindow", "Condition", nullptr));
        comboBox_condition->setItemText(0, QCoreApplication::translate("AssetMainWindow", "Select", nullptr));
        comboBox_condition->setItemText(1, QCoreApplication::translate("AssetMainWindow", "Good", nullptr));
        comboBox_condition->setItemText(2, QCoreApplication::translate("AssetMainWindow", "Broken", nullptr));

        label_9->setText(QCoreApplication::translate("AssetMainWindow", "Site", nullptr));
        site->setItemText(0, QCoreApplication::translate("AssetMainWindow", "Select", nullptr));
        site->setItemText(1, QCoreApplication::translate("AssetMainWindow", "Hyderabad", nullptr));
        site->setItemText(2, QCoreApplication::translate("AssetMainWindow", "Pune", nullptr));

        label_10->setText(QCoreApplication::translate("AssetMainWindow", "Location", nullptr));
        Save->setText(QCoreApplication::translate("AssetMainWindow", "Save", nullptr));
        View->setText(QCoreApplication::translate("AssetMainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssetMainWindow: public Ui_AssetMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSETMAINWINDOW_H
