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
	if(RadioButton1->Checked)
	{
		FDTable2->Insert();
		FDTable2NUME->AsString = DBEdit2->Text;
	}
	else
		FDTable2->Edit();

	FDTable2->Post(); // post = ExecSQL;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	try
	{
		//FDConnection2->Connected = false;
		//FDConnection2->Connected = true;
		FDQuery1->Close();
        FDQuery1->Open();
	}
	catch(...)
	{
		ShowMessage("Conexiune suspendata");
		Application->Terminate();
	}
}
//---------------------------------------------------------------------------
