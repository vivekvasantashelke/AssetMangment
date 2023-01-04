/********************************************************************************
** Form generated from reading UI file 'assetrecord.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSETRECORD_H
#define UI_ASSETRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AssetRecord
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *AssetRecord)
    {
        if (AssetRecord->objectName().isEmpty())
            AssetRecord->setObjectName("AssetRecord");
        AssetRecord->resize(968, 513);
        pushButton = new QPushButton(AssetRecord);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(850, 480, 89, 25));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        tableView = new QTableView(AssetRecord);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 90, 931, 371));
        tableView->setStyleSheet(QString::fromUtf8("background-color:lightblue;"));
        label = new QLabel(AssetRecord);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 921, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";\n"
"background-color:yellow;"));

        retranslateUi(AssetRecord);

        QMetaObject::connectSlotsByName(AssetRecord);
    } // setupUi

    void retranslateUi(QDialog *AssetRecord)
    {
        AssetRecord->setWindowTitle(QCoreApplication::translate("AssetRecord", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("AssetRecord", "Report", nullptr));
        label->setText(QCoreApplication::translate("AssetRecord", "Asset Managment All Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssetRecord: public Ui_AssetRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSETRECORD_H
