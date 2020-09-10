//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
	if( Form1->OpenDialog1->Execute() )
	{
		Memo1->Lines->LoadFromFile( OpenDialog1->FileName );
		Form1->StatusBar1->Panels->Items[1]->Text = OpenDialog1->FileName;
		//Form1->StatusBar1->Panels->Items[2]->Text = OpenDialog1->Files;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
	if( Form1->SaveDialog1->Execute() )
	{
		Memo1->Lines->SaveToFile( SaveDialog1->FileName );
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Font1Click(TObject *Sender)
{
	FontDialog1->Font = Memo1->Font;
	if( FontDialog1->Execute() )
	{
		Memo1->Font = FontDialog1->Font;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BGcolor1Click(TObject *Sender)
{
	if( ColorDialog1->Execute() )
	{
        Memo1->Color = ColorDialog1->Color;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SelectAll1Click(TObject *Sender)
{
	Memo1->SelectAll();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WordWrap1Click(TObject *Sender)
{
	if( Form1->WordWrap1->Checked == false )
	{
		Form1->WordWrap1->Checked = true;
		Memo1->ScrollBars = ssVertical;
		Memo1->WordWrap = true;
	}
	else if( Form1->WordWrap1->Checked == true )
	{
		Form1->WordWrap1->Checked = false;
		Memo1->ScrollBars = ssBoth;
		Memo1->WordWrap = false;
	}
}
//---------------------------------------------------------------------------
/*


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{


try    {
  if( Form1->RadioButton1->Checked == true )
  {
      Form1->Button1->Caption="REZ=x+y="+IntToStr(Edit1->Text.ToInt()+Edit2->Text.ToInt());
  }
else if( Form1->RadioButton2->Checked == true )
  {
      Form1->Button1->Caption="REZ=x-y="+IntToStr(Edit1->Text.ToInt()-Edit2->Text.ToInt());
  }
else if( Form1->RadioButton3->Checked == true )
  {
      Form1->Button1->Caption="REZ=x*y="+IntToStr(Edit1->Text.ToInt()*Edit2->Text.ToInt());
  }
else if( Form1->RadioButton4->Checked == true )
  {
      Form1->Button1->Caption="REZ=x/y="+FloatToStr(Edit1->Text.ToDouble()/Edit2->Text.ToInt());
  }
else
  {
      Form1->Button1->Caption="REZ=Nu sa ales operatia";
  }


 }catch(...) { ShowMessage("Erorr:: Windows 0x00009132831");   }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::xxx(bool x1,bool x2,bool x3, bool x4)
 {
   c1->Checked=x1;
   c2->Checked=x2;
   c3->Checked=x3;
   c4->Checked=x4;


 }



//---------------------------------------------------------------------------


void __fastcall TForm1::c1Click(TObject *Sender)
{
   xxx(1,0,0,0);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::c2Click(TObject *Sender)
{
xxx(0,1,0,0);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::c3Click(TObject *Sender)
{
xxx(0,0,1,0);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::c4Click(TObject *Sender)
{
xxx(0,0,0,1);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{


    if(CheckBox1->Checked == true)
	{


     if(count < 2){ count++; }
	 else { CheckBox1->Checked=false; ShowMessage("Erorr:: Sunt 1  2 setate"); }
	}
	 else
     {
	 count--;


      if(count < 0){  count=0; }
	  //else { CheckBox1->Checked=false; ShowMessage("Erorr:: Sunt 2  2 setate"); }


      }


   Edit3->Text=IntToStr(count);


}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
   if(CheckBox2->Checked == true)
	{


     if(count < 2){ count++; }
	 else { CheckBox2->Checked=false; ShowMessage("Erorr:: Sunt 1  2 setate"); }
    }
	 else
	 {
	 count--;


      if(count < 0){  count=0; }
	  //else { CheckBox1->Checked=false; ShowMessage("Erorr:: Sunt 2  2 setate"); }


      }


  Edit3->Text=IntToStr(count);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
	if(CheckBox3->Checked == true)
	{


	 if(count < 2){ count++; }
     else {  CheckBox3->Checked=false;  ShowMessage("Erorr:: Sunt 2 setate");  }
    }
	 else{
     count--;


      if(count < 0){  count=0; }
      //else { CheckBox1->Checked=false; ShowMessage("Erorr:: Sunt 2  2 setate"); }


      }


     Edit3->Text=IntToStr(count);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
    if(CheckBox4->Checked == true)
    {


     if(count < 2){ count++; }
     else {  CheckBox4->Checked=false;  ShowMessage("Erorr:: Sunt 2 setate"); Edit3->Text=IntToStr(count); }
    }
	 else {
     count--;


      if(count < 0){  count=0; }
	  //else { CheckBox1->Checked=false; ShowMessage("Erorr:: Sunt 2  2 setate"); }


      }


    Edit3->Text=IntToStr(count);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit3Click(TObject *Sender)
{
  Edit3->Text=IntToStr(count);
}
//---------------------------------------------------------------------------







































(1 liked)<https://teams.microsoft.com/l/message/19:43e6003607d8480497471713663eeb3d@thread.tacv2/1585757374641?tenantId=e5c9aa9f-2842-4026-b725-d00c8f83e32f&amp;groupId=238fd9b0-bd75-4c68-b56d-034ed92410a1&amp;parentMessageId=1585750762535&amp;teamName=LPS1911ro&amp;channelName=OOP - CPP&amp;createdTime=1585757374641>
*/
