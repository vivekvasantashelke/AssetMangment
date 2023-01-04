
#include<QSqlQuery>
#include<qsqlrecord.h>
#include<QSqlError>
#include<QSqlDatabase>
#include<QSqlRecord>
#include<QByteArray>
#include<QBuffer>
#include "assetmanagerdbservice.h"
AssetManagerDBService *AssetManagerDBService::Singletoneptr=nullptr;



AssetManagerDBService::AssetManagerDBService(bool connectstatus)
    :Isconnected(connectstatus)
{

}

bool AssetManagerDBService::IsDBconnected()
{
    return Isconnected;
}

bool AssetManagerDBService::isopen()
{
    return databaseobj.isOpen();

}





AssetManagerDBService::AssetManagerDBService()
{
createTable();
}

AssetManagerDBService *AssetManagerDBService::CreateInstance()
{
  if(Singletoneptr==nullptr)
  {
      Singletoneptr=new AssetManagerDBService();
      return Singletoneptr;
  }
  else
  {
      return Singletoneptr;
  }
}


bool AssetManagerDBService::passMap(QMap<QString, QString> data)
{
   bool success = false;
   map=data;
   //map2=data;
    QString dat[100],dataid[100];

    int j=0;
    QMap<QString,QString>::Iterator i;
    for(j,i=map.begin();i!=map.end();j++,i++)
    {
      dat[j]=i.value();
     // qDebug()<<i.key();
      dataid[j]=i.key();

    }
    qDebug()<<map["AssetName"];

    QSqlQuery queryAdd;
queryAdd.prepare("INSERT INTO AssetInformation (AssetName,AssetType,Description,SerialNumber,Manufacturer,Model,Owner,Condition,Site,Location,imagedata) values ('"+dat[0]+"','"+dat[1]+"','"+dat[3]+"','"+dat[8]+"','"+dat[5]+"','"+dat[6]+"','"+dat[7]+"','"+dat[2]+"','"+dat[9]+"','"+dat[4]+"','"+dat[10]+"')");

   queryAdd.bindValue(":AssetName",dat[0]);
   queryAdd.bindValue(":AssetType",dat[1]);
   queryAdd.bindValue(":Description",dat[3]);
   queryAdd.bindValue(":SerialNumber",dat[8]);
   queryAdd.bindValue(":Manufacturer",dat[5]);
   queryAdd.bindValue(":Model",dat[6]);
   queryAdd.bindValue(":Owner",dat[7]);
   queryAdd.bindValue(":Condition",dat[2]);
   queryAdd.bindValue(":Site",dat[9]);
   queryAdd.bindValue(":Location",dat[4]);
   queryAdd.bindValue(":imagedata",dat[10]);
    if(queryAdd.exec())
      {
       success = true;
      }
      else
      {
       qDebug() << "add AssetInformation failed: " << queryAdd.lastError();
      }
      return success;
      return Isconnected;
}

bool AssetManagerDBService::createTable(){
    bool succes=true;
    databaseobj=QSqlDatabase::addDatabase("QSQLITE");
    databaseobj.setDatabaseName("F:/vivek/AssetManagement2/AssetManagement2.db");
    databaseobj.open();
    QSqlQuery query;
    query.prepare("CREATE TABLE AssetInformation(AssetID INTEGER PRIMARY KEY, AssetName TEXT,AssetType TEXT,Description TEXT,SerialNumber TEXT,Manufacturer TEXT,Model TEXT,Owner TEXT,Condition TEXT,Site TEXT,Location TEXT, imagedata BLOB);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'people': one might already exist.";
        succes = false;
        return succes;
    }
}

