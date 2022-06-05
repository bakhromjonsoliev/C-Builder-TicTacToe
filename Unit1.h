//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel9;
	TButton *Button1;
	TGroupBox *GroupBox3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall Panel1Click(TObject *Sender);
	void __fastcall Panel2Click(TObject *Sender);
	void __fastcall Panel3Click(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel7Click(TObject *Sender);
	void __fastcall Panel8Click(TObject *Sender);
	void __fastcall Panel9Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void __fastcall TForm1::XvaNol(TPanel* g);
	void __fastcall TForm1::Tekshirish(TPanel* p1, TPanel* p2, TPanel* p3);
    void __fastcall TForm1::YangiOyin();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
