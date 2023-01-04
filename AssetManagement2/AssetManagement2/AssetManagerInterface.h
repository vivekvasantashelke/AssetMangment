#ifndef ASSETMANAGERINTERFACE_H
#define ASSETMANAGERINTERFACE_H

#include<iostream>
#include<QString>
class AssetManagerinterface
{
public:

     virtual void Savedata(QMap<QString,QString>)=0;
     virtual void assetname(QString,QString)=0;
     virtual void assetype(QString,QString)=0;
     virtual void assetdescription(QString,QString)=0;
     virtual void assetowner(QString,QString)=0;
     virtual void assetmanufacture(QString,QString)=0;
     virtual void assetmodel(QString,QString)=0;
     virtual void assetserialnumber(QString,QString)=0;
     virtual void assetcondition(QString,QString)=0;
     virtual void aseetsite(QString,QString)=0;
     virtual void assetlocation(QString,QString)=0;
     virtual void assetimage(QString,QString)=0;
};

#endif // ASSETMANAGERINTERFACE_H
