//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char str[10][255];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Memo2->Text = en->Encode(Memo1->Text);
	int i = 0;
	while(i!=Memo1->Lines->Count)
	{
		for(int j=0; j<Memo1->Lines[i].Count; j++)
		{
		strcpy(en->Encode(Memo1->Lines[i].Text.c_str()),str[i][j]);
		}
		//Memo2->Text = en->Encode(Memo1->Lines[i]);
		i++;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
		//Memo3->Text = de->DecodeString(Memo2->Text);
	int i = 0;
	while(i!=Memo1->Lines->Count)
	{
		Memo2->Text = en->Encode(Memo1->Lines[i]);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Button3->Caption = Memo4->Text.Length();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Button4->Caption = Memo1->Lines->Count;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Button5->Caption = Memo2->Lines->Count;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
    Button6->Caption = Memo3->Lines->Count;
}
//---------------------------------------------------------------------------
