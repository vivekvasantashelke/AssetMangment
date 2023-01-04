#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "assetmanagerdbservice.h"
//#include "assetmanagerinformation.h"

TEST(AssetmanagmentDb_test,whenDBisConectedthencheckDBconnection)
{
   const bool expectedDbConnection=true;
AssetManagerDBService obj(expectedDbConnection);
EXPECT_EQ(expectedDbConnection,obj.IsDBconnected());
}


TEST(AssetmanagmentDb_test,whenDBisnotConectedthencheckDBconnection)
{
   const bool expectedDbConnection=false;
AssetManagerDBService obj(expectedDbConnection);
EXPECT_EQ(expectedDbConnection,obj.IsDBconnected());
}



//TEST(AssetmanagmentDb_test,whenDBismapConectedthencheckDBconnection)
//{

//    const bool expectedDbConnection=true;
// AssetManagerDBService *obj= AssetManagerDBService::CreateInstance();
//    EXPECT_EQ(expectedDbConnection,obj->passMap());
//}


TEST(AssetmanagmentDb_test,ischeckingistableCreatedornot)
{
   const bool expectedDbConnection=true;
AssetManagerDBService obj(expectedDbConnection);
EXPECT_EQ(expectedDbConnection,obj.createTable());
}

TEST(AssetmanagmentDb_test,isdatabaseopen)
{
   const bool expectedDbConnection=true;
AssetManagerDBService *obj= AssetManagerDBService::CreateInstance();
   EXPECT_EQ(expectedDbConnection,obj->isopen());
}


//TEST(AssetManagement1,whenassetnamefiledthenok)
//{
//   const bool expectedConnection=true;
//AssetManagerInformation obj(expectedConnection);
////AssetManagerInformation obj=new AssetManagerInformation();

//EXPECT_EQ(expectedConnection,obj.IsDBconnected());
//}
