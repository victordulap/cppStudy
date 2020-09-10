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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   try
   {
	if( Form1->RadioButton1->Checked == true)
	{
		Form1->Button1->Caption = "REZ = " + IntToStr
		(Form1->Edit1->Text.ToInt() + Form1->Edit2->Text.ToInt());
	}
	else if( Form1->RadioButton2->Checked == true)
	{
		Form1->Button1->Caption = "REZ = " + FloatToStr
		(Form1->Edit1->Text.ToDouble() / Form1->Edit2->Text.ToInt());
	}
	else if( Form1->RadioButton3->Checked == true)
	{
		Form1->Button1->Caption = "REZ = " + IntToStr
		(Form1->Edit1->Text.ToInt() - Form1->Edit2->Text.ToInt());
	}
	else if( Form1->RadioButton4->Checked == true)
	{
		Form1->Button1->Caption = "REZ = " + IntToStr
		(Form1->Edit1->Text.ToInt() * Form1->Edit2->Text.ToInt());
	}
	else
	{
		Form1->Button1->Caption = "REZ = nu sa ales operatia";
	}
   }

   catch(...)
   {
        ShowMessage("Error:: 404");
		//Form1->Button1->Caption = "REZ = nu sa ales operatia";
   }
}
//---------------------------------------------------------------------------
