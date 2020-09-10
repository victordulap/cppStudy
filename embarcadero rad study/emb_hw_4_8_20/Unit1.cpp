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
void __fastcall TForm1::FormShow(TObject *Sender)
{
    Form1->Height = 1000;
	Form1->Width = 1200;

	Ea = new TEdit(this);
	Ea->Parent = Form1; // lucreaza si daca punem in loc de this Form 1
		Ea->Left = 10;
		Ea->Top = 10;
		Ea->TextHint = "a";

	Eb = new TEdit(this);
	Eb->Parent = this;
		Eb->Left = 10;
		Eb->Top = Ea->Top + Ea->Height + 10;
		Eb->TextHint = "b";

	Ec = new TEdit(this);
	Ec->Parent = this;
		Ec->Left = 10;
		Ec->Top = Eb->Top + Eb->Height + 10;
		Ec->TextHint = "c";

	Rez = new TLabel(this);
	Rez->Parent = this;
		Rez->Left = 10;
		Rez->Top = Ec->Top + Ec->Height + 10;
		Rez->Caption = "a+b-c = ";
		Rez->Font->Size = 16;

	B = new TButton(this);
	B->Parent = this;
		B->OnClick = BClick;
		B->Left = Ea->Left + Ea->Width + 10;
		B->Top = Ea->Top;
		B->Height = Ea->Height + Eb->Height + Ec->Height + (Ea->Top+Eb->Top+Ec->Top)/6;

	B2 = new TButton(this);
	B2->Parent = this;
		B2->Left = Ea->Left + Ea->Width + 10;
		B2->Top = Ea->Top+B->Top;
		B2->Height = Ea->Height + Eb->Height + Ec->Height + (Ea->Top+Eb->Top+Ec->Top)/6;
		 void *nf = this->MethodAddress("B2Click");
		 TMethod en;
		 en.Data = this;
		 en.Code = nf;
		 B2->OnClick = *(TNotifyEvent*)&en;

   /*void *numefunctie = this->MethodAddress("red");   /// creem un pointer si ii atribuim adresa functiei red()

   TMethod evenimentul_nostru;
   evenimentul_nostru.Data = this;         ///   proprietatea de legatura a informatiei
   evenimentul_nostru.Code = numefunctie;  ///  adresa metodei

   BUTON->OnClick =  *(TNotifyEvent*)&evenimentul_nostru;*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BClick(TObject *Sender)
{
	Rez->Caption = "a+b-c = "+IntToStr(Ea->Text.ToInt()+Eb->Text.ToInt()-Ec->Text.ToInt());
}
void __fastcall TForm1::B2Click(TObject *Sender)
{
	ShowMessage(" B2! ");
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Rez->Caption = "a+b-c = "
		+IntToStr(Ea->Text.ToInt()+Eb->Text.ToInt()-Ec->Text.ToInt());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::red(TObject *Sender)
{
	ShowMessage(" OK! ");
}
