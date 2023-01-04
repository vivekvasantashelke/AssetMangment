#include "assetmainwindow.h"
#include "./ui_assetmainwindow.h"
#include<QFileDialog>
#include "assetrecord.h"
#include<QMessageBox>
#include<QPixmap>
#include<QPixmapCache>
#include<QPixelFormat>
AssetMainWindow::AssetMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AssetMainWindow)
{
    ui->setupUi(this);
    connect(ui->Save,SIGNAL(clicked()),this,SLOT(Save()));
    connect(ui->Upload,SIGNAL(clicked()),this,SLOT(Update()));
    QPixmap pic(":/image/default.png");
    ui->Image->setPixmap(pic);
}


AssetMainWindow::~AssetMainWindow()
{
    delete ui;
}

void AssetMainWindow::Save()
{
  QString an=ui->lineEdit_assetname->text();
  QString at=ui->lineEdit_2_assettype->text();
  QString d=ui->lineEdit_3_descripation->text();
  QString sn=ui->lineEdit_4_serial_number->text();
  QString m=ui->lineEdit_5_manufacturer->text();
  QString model=ui->lineEdit_6_model->text();
  QString o=ui->lineEdit_7_owner->text();
  QString c=ui->comboBox_condition->currentText();
  QString s=ui->site->currentText();
  if( an.isEmpty() ||at.isEmpty()||d.isEmpty()||sn.isEmpty()||m.isEmpty()||model.isEmpty()||o.isEmpty())
    {
    QMessageBox::warning(this,"Fill Properly","Fill Mandatory....");
    }
  else
    {
   v.insert("AssetName",an);
   ptr->assetname("AssetName",an);
   v.insert("AssetType",at);
   ptr->assetype("AssetType",at);
   v.insert("Description",d);
   ptr->assetdescription("Description",d);
   v.insert("SerialNumber",sn);
   ptr->assetserialnumber("SerialNumber",sn);
   v.insert("Manufacturer",m);
   ptr->assetmanufacture("Manufacturer",m);
   v.insert("Model",model);
   ptr->assetmodel("Model",model);
   v.insert("Owner",o);
   ptr->assetowner("Owner",o);
   v.insert("Condition",c);
   ptr->assetcondition("Condition",c);
   v.insert("Site",s);
   ptr->aseetsite("Site",s);
   if(c=="Select")
   {
       QMessageBox::warning(this,"Alert","select Condition");

   }
   else if(s=="Select")
   {
       QMessageBox::warning(this,"Alert","select site");

   }
   else
   QMessageBox::information(this,"Information","SAVED");
   ptr->Savedata(v);
       }

}
void AssetMainWindow::on_site_currentIndexChanged(int index)
{
    if(index==0)
    {
        QMessageBox::warning(this,"Alert","Select site");
    }

   else if(index==1)
    {
      QString hyd="Address: Office# 203,2nd Floor Rockdale Compound, "
                  " Diamond Block ,Somajiguda,"
        "  Hyderabad, Telangana- 500082";
      ui->textEdit->setPlainText(hyd);
      ui->textEdit->setReadOnly(true);
      v.insert("Location",hyd);
      ptr->assetlocation("Location",hyd);
    }
  else if(index==2)
    {
      QString Pune="Address: Tower S4, Magarpatta City To Koregaon Park,"
                    " Back Side Road Cybercity, Magarpatta,"
                   " HadapsarPune, Maharashtra - 411028";
      ui->textEdit->setPlainText(Pune);
      ui->textEdit->setReadOnly(true);
      v.insert("Location",Pune);
      ptr->assetlocation("Location",Pune);

    }

}
void AssetMainWindow::Update()
{
   QString temp= QFileDialog::getOpenFileName(this,tr("Select Image"), "E:/101CANON", tr("Image Files (*.png *.jpg *.bmp)"));
    QPixmap pic(temp);
    ui->Image->setPixmap(pic);
     v.insert("imagedata",temp);
     ptr->assetimage("imagedata",temp);
}
void AssetMainWindow::on_View_clicked()
{

     AssetRecord *p;
    p=new AssetRecord();
    QPalette pal = p->palette();
    pal.setColor(QPalette::Window, Qt::white);
    p->setPalette(pal);
    p->hide();
    p->tabledata();
    p->show();

}



