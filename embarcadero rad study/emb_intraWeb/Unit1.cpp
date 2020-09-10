//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall TIWForm1::TIWForm1(TComponent* Owner)
        : TIWAppForm(Owner)
{

}
//---------------------------------------------------------------------------

void setAsMainForm() {
  TIWForm1::SetAsMainForm();
 }
#pragma startup setAsMainForm
void __fastcall TIWForm1::IWButton1Click(TObject *Sender)
{
	IWEdit4->Text = IntToStr(IWEdit1->Text.ToInt()+IWEdit2->Text.ToInt()-
								IWEdit3->Text.ToInt());
}
//---------------------------------------------------------------------------
void __fastcall TIWForm1::IWButton2Click(TObject *Sender)
{
	TIWForm2 *F2 = new TIWForm2((TComponent*)Sender);
	F2->Show();
}
//---------------------------------------------------------------------------
