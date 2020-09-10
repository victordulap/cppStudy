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
	Edit1->Enabled = false;
	Edit2->Enabled = false;

	Button1->Enabled = false;
	Button2->Enabled = true;

	ClientSocket1->Host = Edit1->Text;
	ClientSocket1->Port = Edit2->Text.ToInt();

	Form1->ClientSocket1->Active = true;

	Memo1->Lines->Add("Conectare reusita!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit1->Enabled = true;
	Edit2->Enabled = true;

	Button1->Enabled = true;
	Button2->Enabled = false;

	ClientSocket1->Active = false;

	Memo1->Lines->Add("Deconectare reusita!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Memo1->Lines->Add(Edit4->Text+": "+Edit3->Text);
	if( Edit3->Text == "/abc1" )
	ClientSocket1->Socket->SendText(Edit4->Text+": "+Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket)

{
	Memo1->Lines->Add(Socket->ReceiveText());
}
//---------------------------------------------------------------------------

