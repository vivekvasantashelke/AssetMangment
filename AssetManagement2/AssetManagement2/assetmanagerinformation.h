#ifndef ASSETMANAGERINFORMATION_H
#define ASSETMANAGERINFORMATION_H
#include"AssetManagerInterface.h"
#include"AssetDataBase/AssetManagerDBServiceInterface.h"
#include"AssetDataBase/assetmanagerdbservice.h"
#include<assetreport.h>
#include<QMap>
#include<QSharedPointer>
#include<iostream>
using namespace std;
class AssetManagerInformation:public AssetManagerinterface
{
public:

     AssetManagerInformation();
      void Savedata(QMap<QString,QString>);
      void assetname(QString,QString);
      void assetype(QString,QString);
      void assetdescription(QString,QString);
      void assetowner(QString,QString);
      void assetmanufacture(QString,QString);
      void assetmodel(QString,QString);
      void assetserialnumber(QString,QString);
      void assetcondition(QString,QString);
      void aseetsite(QString,QString);
      void assetlocation(QString,QString);
      void assetimage(QString,QString);

private:
   AssetManagerDBServiceInterface  *ptrDB = AssetManagerDBService::CreateInstance();
   QMap<QString,QString> storage;

};

#endif // ASSETMANAGERINFORMATION_H
