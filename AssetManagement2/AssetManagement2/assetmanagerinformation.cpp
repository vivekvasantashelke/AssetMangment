#include "assetmanagerinformation.h"
#include<QDebug>
#include"assetmainwindow.h"


AssetManagerInformation::AssetManagerInformation()
{
//ptrDB->createTable("F:/vivek/AssetManagement2/AssetManagement2.db");
}

void AssetManagerInformation::Savedata(QMap<QString, QString> data)
{
  ptrDB->passMap(data);

}

void AssetManagerInformation::assetname(QString i,QString j)
{
    storage.insert(i,j);
}

void AssetManagerInformation::assetype(QString i, QString j)
{
    storage.insert(i,j);
}

void AssetManagerInformation::assetdescription(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetowner(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetmanufacture(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetmodel(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetserialnumber(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetcondition(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::aseetsite(QString i, QString j)
{
storage.insert(i,j);
}

void AssetManagerInformation::assetlocation(QString i, QString j)
{
    storage.insert(i,j);
}

void AssetManagerInformation::assetimage(QString i, QString j)
{
    storage.insert(i,j);

}

