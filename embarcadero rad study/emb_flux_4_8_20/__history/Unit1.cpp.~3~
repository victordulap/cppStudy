//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
step *x;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    pb1->Position = 0;

	x = new step(true); // true - executie anulata, false - exec la creare

	x->Resume();

	Form1->Button1->Enabled = false;
	Form1->Button2->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	x->Terminate();

	Form1->Button1->Enabled = true;
	Form1->Button2->Enabled = false;
}
//---------------------------------------------------------------------------
