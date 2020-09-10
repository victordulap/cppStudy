//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "SHDocVw_OCX.h"
#include <Vcl.OleCtrls.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TButton *Button1;
	TCppWebBrowser *CppWebBrowser1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TComboBox *ComboBox1;
	TPanel *Panel3;
	TToggleSwitch *ToggleSwitch1;
	TLabel *Label1;
	TListBox *ListBox1;
	TSplitView *SplitView1;
	TListBox *ListBox2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall ComboBox1Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall ToggleSwitch1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
