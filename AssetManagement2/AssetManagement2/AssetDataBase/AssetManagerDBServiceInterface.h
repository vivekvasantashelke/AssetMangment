#pragma once
#include<iostream>
#include<QString>
  class AssetManagerDBServiceInterface
{
  public:
    virtual bool passMap(QMap<QString,QString>)=0;
    virtual bool createTable()=0;
  };
