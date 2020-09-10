//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TDateTime *XXX;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ListBox1->Clear();
	int a,b,c;
	for(int i=0; i< SpinEdit1->Text.ToInt(); i++)
	{
		a = rand()%(aMax->Value-aMin->Value) + aMin->Value;
		b = rand()%(bMax->Value-bMin->Value) + bMin->Value;
		c = rand()%(cMax->Value-cMin->Value) + cMin->Value;

		ListBox1->Items->Add(
		IntToStr(a)+"+"+IntToStr(b)+"-"+IntToStr(c)+" = "
		+IntToStr(a+b-c)+" || ora: "+TimeToStr(Now())+
		+" data: "+DateToStr(Now())+" ora+ms: "+Time().FormatString("hh:mm:ss:zz"));
	}

	FILE *f;
	//AnsiString str_temp;
	f = fopen("LOG.txt","w+");
	//for(int i=0; i<ListBox1->Items->Count; i++)
	//{
	//str_temp = "";
	//str_temp = ListBox1->Items[i].ToString;
	//strcpy( ListBox1->Items[i].ToString, str_temp );
	//fprintf(f,"%s",str_temp);
	//fprintf(f,"%s","\n ");
	//}
	fprintf(f,"%s",ListBox1->Items->ToString());
	// nu luicreaza nicicum ^
	//ListBox1->Items->SaveToFile(ExtractFilePath(Application->ExeName)+"\\LOG.txt" );
	fclose(f);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::aMaxChange(TObject *Sender)
{
	aMax->MinValue = aMin->Value+1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::bMaxChange(TObject *Sender)
{
	bMax->MinValue = bMin->Value+1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cMaxChange(TObject *Sender)
{
	cMax->MinValue = cMin->Value+1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Delete1Click(TObject *Sender)
{
	if(ListBox1->ItemIndex != -1)
	{
	   ListBox1->Items->Delete(ListBox1->ItemIndex);
	}
    else ShowMessage("Alege un item");

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Button2->Enabled = true;
	AnsiString str = ListBox1->Items[ListBox1->ItemIndex].ToString();
	Edit2->Text = str;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Form1->Caption = TimeToStr(Now());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ListBox1->Items[ListBox1->ItemIndex].Text = Edit2->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Insert1Click(TObject *Sender)
{
	Panel1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	int a = SpinEdit2->Value;
	int b = SpinEdit3->Value;
	int c = SpinEdit4->Value;
	ListBox1->Items->Add(IntToStr(a)+"+"+IntToStr(b)+"-"+IntToStr(c)+" = "
		+IntToStr(a+b-c)+" || ora: "+TimeToStr(Now())+
		+" data: "+DateToStr(Now())+" ora+ms: "+Time().FormatString("hh:mm:ss:zz"));
	Panel1->Visible = false;
}
//---------------------------------------------------------------------------

