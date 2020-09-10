//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

TButton *B[100];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	Form1->Height = 1000;
	Form1->Width = 1200;

	BUTTON1 = new TButton(this);
	BUTTON1->Parent = this; // am legat butonu cu form1

	BUTTON1->Caption = "BUTTON1";
	BUTTON1->Top = 10;
	BUTTON1->Left = 10;


	BUTTON2 = new TButton(this);
	BUTTON2->Parent = this;
		BUTTON2->Caption = "BUTTON2";
		BUTTON2->Top = BUTTON1->Top + BUTTON1->Height + 10;
		BUTTON2->Left = 10;

	BUTTON3 = new TButton(this);
	BUTTON3->Parent = this;
		BUTTON3->Caption = "BUTTON3";
		BUTTON3->Top = BUTTON2->Top + BUTTON2->Height + 10;
		BUTTON3->Left = 10;

	E = new TEdit(this);
	E->Parent = this;
	E->Top = 10;
	E->Left = Button1->Left;
	E->Width = Button1->Width;
	E->Text = "5";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	for(int i=0;i<E->Text.ToInt(); i++)
	{
		B[i] = new TButton(this);
		B[i]->Parent = this;
			B[i]->Caption = "BUTTON "+IntToStr(i);
			B[i]->Top = Button1->Top+Button1->Height +
						10 + (B[i]->Height+10)*i;
			B[i]->Left = Button1->Left;
			B[i]->Width = Button1->Width;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    for(int i=0;i<E->Text.ToInt(); i++)
	{
		delete B[i];
	}
}
//---------------------------------------------------------------------------
