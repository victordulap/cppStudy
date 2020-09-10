//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall TIWForm2::TIWForm2(TComponent* Owner)
        : TIWAppForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TIWForm2::IWButton1Click(TObject *Sender)
{
	TIWForm1 *F1 = new TIWForm1((TComponent*)Sender);
	F1->Show();
}
//---------------------------------------------------------------------------
