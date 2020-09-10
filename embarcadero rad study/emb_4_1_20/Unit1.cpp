//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
	int X=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		X=0;
		Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
       int a = MemoA->Lines->Strings[X].ToInt();
	   int b = MemoB->Lines->Strings[X].ToInt();
	   int c = MemoC->Lines->Strings[X].ToInt();
	   MemoRez->Lines->Add(IntToStr(a+b-c));

	   X++;

	   if(X==MemoA->Lines->Count) Timer1->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Timer2->Enabled = true;
	Timer3->Enabled = true;
	Timer4->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	MemoRez->Lines->Add(" - Timer 1 ");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
	MemoRez->Lines->Add(" - Timer 2 ");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
	MemoRez->Lines->Add(" - Timer 3 ");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Timer2->Enabled = false;
}
//---------------------------------------------------------------------------
