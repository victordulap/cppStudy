//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "proj_1_test_lectie.h"
#include "Unit2.h"
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
void __fastcall TForm1::exit1Click(TObject *Sender)
{
	Application->Terminate(); //inchide aplicatia
}
//---------------------------------------------------------------------------
void __fastcall TForm1::help1Click(TObject *Sender)
{
	Form2->ShowModal(); // nu putem trece la form 1 pana nu inchidem form 2

	//Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Memo1->Lines->Add(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Enter(TObject *Sender)
{
    //Memo1->Lines->Add(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::x1Click(TObject *Sender)
{
	Panel3->Left = 5; // 5 pixeli din stanga lasam
	Panel3->Top = 5;
	Panel3->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Panel3->Visible = false;
}
//---------------------------------------------------------------------------
