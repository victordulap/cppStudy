//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int count = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	if(CheckBox1->Checked == true)
	{
		count++;
		if(count>2) {CheckBox1->Checked = false;}
	}
	 else if (CheckBox1->Checked == false)
	 {
		count--;
		if(count < 0){  count=0; }
	 }
   Edit5->Text=IntToStr(count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
	if(CheckBox2->Checked == true)
	{
		count++;
		if(count>2) {CheckBox2->Checked = false;}
	}
	 else if (CheckBox2->Checked == false)
	 {
		count--;
		if(count < 0){  count=0; }
	 }
  Edit5->Text=IntToStr(count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
	bool x=0;
	if(CheckBox3->Checked == true)
	{
		count++;
		if(count>2) {CheckBox3->Checked = false;}
	}
	else if (CheckBox3->Checked == false)
	{
		count--;
		if(count < 0){  count=0; }
	}
  Edit5->Text=IntToStr(count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
	if(CheckBox4->Checked == true)
	{
		count++;
		if(count>2) {CheckBox4->Checked = false;}
	}
	 else if (CheckBox4->Checked == false)
	 {
		count--;
		if(count < 0){  count=0; }
	 }
  Edit5->Text=IntToStr(count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int x = 0;
	if( CheckBox1->Checked == true )
	{x=1;
		Edit3->Text = IntToStr(Edit1->Text.ToInt() + Edit2->Text.ToInt());
	}
	else if( CheckBox2->Checked == true )
	{x=2;
		Edit3->Text = IntToStr(Edit1->Text.ToInt() - Edit2->Text.ToInt());
	}
	else if( CheckBox3->Checked == true )
	{x=3;
		Edit3->Text = IntToStr(Edit1->Text.ToInt() * Edit2->Text.ToInt());
	}
	else if( CheckBox4->Checked == true )
	{x=4;
		Edit3->Text = FloatToStr(Edit1->Text.ToDouble() / Edit2->Text.ToInt());
	}

	switch(x)
	{
		case 1:
		{
			if( CheckBox2->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() - Edit2->Text.ToInt());
			}
			else if( CheckBox3->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() * Edit2->Text.ToInt());
			}
			else if( CheckBox4->Checked == true )
			{
				Edit4->Text = FloatToStr(Edit1->Text.ToDouble() / Edit2->Text.ToInt());
			}
		} break;

		case 2:
		{
			if( CheckBox1->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() + Edit2->Text.ToInt());
			}
			else if( CheckBox3->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() * Edit2->Text.ToInt());
			}
			else if( CheckBox4->Checked == true )
			{
				Edit4->Text = FloatToStr(Edit1->Text.ToDouble() / Edit2->Text.ToDouble());
			}
		} break;

		case 3:
		{
			if( CheckBox1->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() + Edit2->Text.ToInt());
			}
			else if( CheckBox2->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() - Edit2->Text.ToInt());
			}
			else if( CheckBox4->Checked == true )
			{
				Edit4->Text = FloatToStr(Edit1->Text.ToDouble() / Edit2->Text.ToInt());
			}
		} break;

		case 4:
		{
			if( CheckBox1->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() + Edit2->Text.ToInt());
			}
			else if( CheckBox2->Checked == true )
			{
				Edit4->Text = IntToStr(Edit1->Text.ToInt() - Edit2->Text.ToInt());
			}
			else if( CheckBox3->Checked == true )
			{
				Edit4->Text = FloatToStr(Edit1->Text.ToDouble() * Edit2->Text.ToInt());
			}
		} break;
	}
}
//---------------------------------------------------------------------------
