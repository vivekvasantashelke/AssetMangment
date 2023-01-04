#include "assetmainwindow.h"
#include<iostream>
#include"assetmanagerinformation.h"
#include"AssetDataBase/assetmanagerdbservice.h"
#include"AssetDataBase/AssetManagerDBServiceInterface.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AssetMainWindow w;
    QPalette pal = w.palette();
    pal.setColor(QPalette::Window, Qt::white);
    w.setPalette(pal);
    w.hide();
    w.show();
    return a.exec();
}
