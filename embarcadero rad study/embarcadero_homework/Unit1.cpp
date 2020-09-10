//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>
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
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	//Label2->Caption = "123123";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Label2->Caption = "rez 1 operation: ";
					Label5->Caption = "= ";
	Label4->Caption = "rez 2 operation: ";
					Label3->Caption = "= ";

	Label6->Hide();Label7->Hide(); Label8->Hide();
	if( Edit1->Text.Length() == 0 ) {Label7->Show();}
	if( Edit2->Text.Length() == 0 ) {Label8->Show(); return;}

	int x=0;
	int cb[2]={0, 0};



	if( CheckBox1->Checked == true ) {x++; cb[0]=1;}
	if( CheckBox2->Checked == true ) {x++; cb[0]=2;}
	if( CheckBox3->Checked == true ) {x++; cb[0]=3;}
	if( CheckBox4->Checked == true ) {x++; cb[0]=4;}

	if (x!=2)
	{
		Label6->Show();
		//Label6->Hide();
	}
	else
	{
		switch(cb[0])
		{
			case 1:
				{
					if( CheckBox2->Checked == true ) {x++; cb[1]=2;}
					if( CheckBox3->Checked == true ) {x++; cb[1]=3;}
					if( CheckBox4->Checked == true ) {x++; cb[1]=4;}
				} break;
			case 2:
				{
					if( CheckBox1->Checked == true ) {x++; cb[1]=1;}
					if( CheckBox3->Checked == true ) {x++; cb[1]=3;}
					if( CheckBox4->Checked == true ) {x++; cb[1]=4;}
				} break;
			case 3:
				{
					if( CheckBox1->Checked == true ) {x++; cb[1]=1;}
					if( CheckBox2->Checked == true ) {x++; cb[1]=2;}
					if( CheckBox4->Checked == true ) {x++; cb[1]=4;}
				} break;
			case 4:
				{
					if( CheckBox1->Checked == true ) {x++; cb[1]=1;}
					if( CheckBox2->Checked == true ) {x++; cb[1]=2;}
					if( CheckBox3->Checked == true ) {x++; cb[1]=3;}
				} break;
		}

		switch(cb[0])
		{
			case 1:
				{
					Label2->Caption = "rez 1 operation: +";
					Label5->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() + Edit2->Text.ToInt() );
				} break;
			case 2:
				{
					Label2->Caption = "rez 1 operation: -";
					Label5->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() - Edit2->Text.ToInt() );
				} break;
			case 3:
				{
					Label2->Caption = "rez 1 operation: *";
					Label5->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() * Edit2->Text.ToInt() );
				} break;
			case 4:
				{
					Label2->Caption = "rez 1 operation: /";
					Label5->Caption = "= " +
					FloatToStr( Edit1->Text.ToDouble() / Edit2->Text.ToDouble() );
				} break;
		}

		switch(cb[1])
		{
			case 1:
				{
					Label4->Caption = "rez 2 operation: +";
					Label3->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() + Edit2->Text.ToInt() );
				} break;
			case 2:
				{
					Label4->Caption = "rez 2 operation: -";
					Label3->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() - Edit2->Text.ToInt() );
				} break;
			case 3:
				{
					Label4->Caption = "rez 2 operation: *";
					Label3->Caption = "= " +
					IntToStr( Edit1->Text.ToInt() * Edit2->Text.ToInt() );
				} break;
			case 4:
				{
					Label4->Caption = "rez 2 operation: /";
					Label3->Caption = "= " +
					FloatToStr( Edit1->Text.ToDouble() / Edit2->Text.ToDouble() );
				} break;
		}


	}


}
//---------------------------------------------------------------------------


