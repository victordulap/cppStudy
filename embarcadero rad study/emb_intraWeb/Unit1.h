//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <IWAppForm.hpp>
#include <IWBaseControl.hpp>
#include <IWBaseHTMLControl.hpp>
#include <IWCompButton.hpp>
#include <IWControl.hpp>
#include <IWVCLBaseControl.hpp>
#include <IWCompEdit.hpp>
#include <IWCompExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <IWCompMPEG.hpp>
#include <IWCompObject.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.ODBC.hpp>
#include <FireDAC.Phys.ODBCDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <IWCompGrids.hpp>
#include <IWDBGrids.hpp>
#include <IWDBStdCtrls.hpp>

//---------------------------------------------------------------------------
class TIWForm1: public TIWAppForm
{
__published:	// IDE-managed Components
	TIWButton *IWButton1;
	TIWEdit *IWEdit1;
	TIWEdit *IWEdit2;
	TIWEdit *IWEdit3;
	TIWEdit *IWEdit4;
	TIWImage *IWImage1;
	TIWDBGrid *IWDBGrid1;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TDataSource *DataSource1;
	TIWDBNavigator *IWDBNavigator1;
	TIWDBEdit *IWDBEdit1;
	TIWButton *IWButton2;
	void __fastcall IWButton1Click(TObject *Sender);
	void __fastcall IWButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TIWForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
#endif
