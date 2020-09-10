//---------------------------------------------------------------------------

#ifndef proj_1_test_lectieH
#define proj_1_test_lectieH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *help1;
	TMenuItem *file1;
	TMenuItem *file2;
	TMenuItem *new1;
	TMenuItem *open1;
	TMenuItem *exit1;
	TMenuItem *N1;
	TPopupMenu *PopupMenu1;
	TMenuItem *copy1;
	TMenuItem *paste1;
	TMenuItem *cut1;
	TMenuItem *undo1;
	TLabel *Label1;
	TEdit *Edit1;
	TButton *Button1;
	TMemo *Memo1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TPanel *Panel1;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TPanel *Panel2;
	TRadioButton *RadioButton7;
	TRadioButton *RadioButton8;
	TRadioButton *RadioButton9;
	TListBox *ListBox1;
	TComboBox *ComboBox1;
	TMenuItem *a1;
	TMenuItem *b1;
	TMenuItem *c1;
	TMenuItem *x1;
	TMenuItem *y1;
	TMenuItem *z1;
	TPanel *Panel3;
	TEdit *Edit2;
	TButton *Button2;
	void __fastcall exit1Click(TObject *Sender);
	void __fastcall help1Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Edit1Enter(TObject *Sender);
	void __fastcall x1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
