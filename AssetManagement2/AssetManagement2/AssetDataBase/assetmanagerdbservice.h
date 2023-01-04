#pragma once

#include"AssetManagerDBServiceInterface.h"
#include<QString>
#include<QSqlDatabase>
#include<QObject>
#include<QMap>
class AssetManagerDBService:public AssetManagerDBServiceInterface
{

private:
    static AssetManagerDBService *Singletoneptr;

    AssetManagerDBService();
    bool Isconnected;
    QMap<QString,QString>map;
    //  QMap<QString,QString>map2;
    public:
        AssetManagerDBService(bool);
     QSqlDatabase databaseobj;
     static AssetManagerDBService *CreateInstance();
     bool passMap(QMap<QString,QString>);
     bool createTable();
     bool IsDBconnected();
     bool isopen();
};


