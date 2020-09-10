//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
flux1 *f1;
flux2 *f2;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Button1->Enabled = false;

	Memo1->Clear();
	Memo2->Clear();

	f1 = new flux1(false);
	Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	// ii corect prin memo->onchange ddar pt experiment facem prin timer
	if( Memo1->Lines->Count >= 1000 )
	{
		f1->Terminate();
		f2 = new flux2(false);
		Timer1->Enabled = false;
		Timer2->Enabled = true;
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	if( Memo2->Lines->Count >= 1000 )
	{
		 f2->Terminate();
		 Button1->Enabled = true;
		 Timer2->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1Change(TObject *Sender)
{
//    if( Memo1->Lines->Count >= 1000 )
//	{
//		f1->Terminate();
//		f2 = new flux2(false);
//	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo2Change(TObject *Sender)
{
//    if( Memo1->Lines->Count >= 1000 )
//	{
//		f2->Terminate();
//		Button1->Enabled = true;
//	}
}
//---------------------------------------------------------------------------
