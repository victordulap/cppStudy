//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall red(TObject *Sender);
	void __fastcall B2Click(TObject *Sender);
private:	// User declarations
	void __fastcall BClick(TObject *Sender);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

	TEdit *Ea;
	TEdit *Eb;
	TEdit *Ec;
	TLabel *Rez;
	TButton *B;
	TButton *B2;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
