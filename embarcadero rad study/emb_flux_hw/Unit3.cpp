//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall flux2::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall flux2::flux2(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall flux2::Execute()
{
	//---- Place thread code here ----
	//---- Place thread code here ----
	for(int i=1000; i<2000; i++)
	{
		Form1->Memo2->Lines->Add(IntToStr(i));
	}
	//if(Terminated)
	Form1->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------
