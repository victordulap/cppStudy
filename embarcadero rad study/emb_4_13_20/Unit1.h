//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TSpinEdit *aMin;
	TLabel *Label1;
	TSpinEdit *aMax;
	TLabel *Label2;
	TSpinEdit *bMin;
	TSpinEdit *bMax;
	TLabel *Label3;
	TSpinEdit *cMin;
	TSpinEdit *cMax;
	TButton *Button1;
	TListBox *ListBox1;
	TSpinEdit *SpinEdit1;
	TLabel *Label4;
	TPopupMenu *PopupMenu1;
	TMenuItem *Delete1;
	TMenuItem *Edit1;
	TEdit *Edit2;
	TMenuItem *Insert1;
	TTimer *Timer1;
	TButton *Button2;
	TPanel *Panel1;
	TSpinEdit *SpinEdit2;
	TLabel *Label5;
	TLabel *Label6;
	TSpinEdit *SpinEdit3;
	TLabel *Label7;
	TSpinEdit *SpinEdit4;
	TButton *Button3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall aMaxChange(TObject *Sender);
	void __fastcall bMaxChange(TObject *Sender);
	void __fastcall cMaxChange(TObject *Sender);
	void __fastcall Delete1Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Insert1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
