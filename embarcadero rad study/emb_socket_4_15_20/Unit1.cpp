//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>
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
	Edit2->Enabled = false;
	Button1->Enabled = false;
	Button2->Enabled = true;

	Form1->ServerSocket1->Port = Edit2->Text.ToInt();
	ServerSocket1->Active = true;

	Memo1->Lines->Add("Serverul sa creat cu succes!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit2->Enabled = true;
	Button1->Enabled = true;
	Button2->Enabled = false;

	ServerSocket1->Active = false;

	Memo1->Lines->Add("Serverul sa dizactivat cu succes!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	AnsiString s = Socket->ReceiveText();

	//Memo1->Lines->Add(Socket->ReceiveText());
	if( s  == "nick: /abc1" )
	{
		//Memo1->Lines->Add(Socket->ReceiveText());
		Memo1->Lines->Add(s);
		int a,b,c;
		a = rand()%10;
		b = rand()%10;
		c = rand()%10;
		ServerSocket1->Socket->Connections[0]->SendText("a+b-c = "+IntToStr(a+b-c));
	}
	else if( s  == "nick: /abc2" )
	{
		//Memo1->Lines->Add(Socket->ReceiveText());
		Memo1->Lines->Add(s);
		int a,b,c;
		a = rand()%10+10;
		b = rand()%10+10;
		c = rand()%10+10;
		ServerSocket1->Socket->Connections[0]->SendText("a+b-c = "+IntToStr(a+b-c));
	}
	else if( s  == "nick: /abc3" )
	{
		//Memo1->Lines->Add(Socket->ReceiveText());
		Memo1->Lines->Add(s);
		int a,b,c;
		a = rand()%10+20;
		b = rand()%10+20;
		c = rand()%10+20;
		ServerSocket1->Socket->Connections[0]->SendText("a+b-c = "+IntToStr(a+b-c));
	}
	else {Memo1->Lines->Add(s);}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	ServerSocket1->Socket->Connections[0]->SendText(Edit3->Text);
}
//---------------------------------------------------------------------------
