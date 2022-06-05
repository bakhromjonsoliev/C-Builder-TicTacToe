//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
bool x=true, oyin=true;
int x1=0, o1=0, t=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
// 1,2,3, 4,5,6, 7,8,9, 1,4,7, 2,5,8, 3,6,9, 1,5,9, 3,5,7
void __fastcall TForm1::XvaNol(TPanel* g)
{
	if (oyin)
	{
	t++;
	x=!x;
	if (x) { g->Caption = "X"; }
	else { g->Caption = "O";}
	g->Enabled = false;
	g->Color = clSilver;
	Tekshirish(Panel1, Panel2, Panel3);
	Tekshirish(Panel4, Panel5, Panel6);
	Tekshirish(Panel7, Panel8, Panel9);
	Tekshirish(Panel1, Panel4, Panel7);
	Tekshirish(Panel2, Panel5, Panel8);
	Tekshirish(Panel3, Panel6, Panel9);
	Tekshirish(Panel1, Panel5, Panel9);
	Tekshirish(Panel3, Panel5, Panel7);
	if (t>=9)
	{
		if (MessageDlg("O'yin tugadi. Yana o'ynaysizmi?", mtConfirmation,
		TMsgDlgButtons()<<mbYes<<mbNo, 0) == mrYes)
		{YangiOyin();}
		else
		{oyin=false;}
    }

	}
}

void __fastcall TForm1::YangiOyin()
{
  Panel1->Caption = ""; Panel2->Caption = ""; Panel3->Caption = "";
  Panel4->Caption = ""; Panel5->Caption = ""; Panel6->Caption = "";
  Panel7->Caption = ""; Panel8->Caption = ""; Panel9->Caption = "";
  Panel1->Color = clInactiveCaption; Panel2->Color = clInactiveCaption;
  Panel3->Color = clInactiveCaption; Panel4->Color = clInactiveCaption;
  Panel5->Color = clInactiveCaption; Panel6->Color = clInactiveCaption;
  Panel7->Color = clInactiveCaption; Panel8->Color = clInactiveCaption;
  Panel9->Color = clInactiveCaption;
  Panel1->Enabled = true; Panel2->Enabled = true;
  Panel3->Enabled = true; Panel4->Enabled = true;
  Panel5->Enabled = true; Panel6->Enabled = true;
  Panel7->Enabled = true; Panel8->Enabled = true;
  Panel9->Enabled = true;
  x = true;
  oyin = true;
  t=0;

}

void __fastcall TForm1::Tekshirish(TPanel* p1, TPanel* p2, TPanel* p3)
{
	if (oyin)
	{
	if (p1->Caption == p2->Caption && p2->Caption == p3->Caption &&
	p1->Caption != "")
	{
	  if (p1->Caption == "X") {x1++;}
	  if (p1->Caption == "O") {o1++;}
	  if (MessageDlg("O'yin tugadi. Yana o'ynaysizmi?", mtConfirmation,
		TMsgDlgButtons()<<mbYes<<mbNo, 0) == mrYes)
		{YangiOyin();}
		else
		{oyin=false;}
	  Form1->Label3->Caption = o1;
      Form1->Label4->Caption = x1;
	}
	}
}

void __fastcall TForm1::Panel1Click(TObject *Sender)
{
XvaNol(Panel1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel2Click(TObject *Sender)
{
XvaNol(Panel2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel3Click(TObject *Sender)
{
XvaNol(Panel3);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel4Click(TObject *Sender)
{
XvaNol(Panel4);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel5Click(TObject *Sender)
{
XvaNol(Panel5);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6Click(TObject *Sender)
{
XvaNol(Panel6);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel7Click(TObject *Sender)
{
XvaNol(Panel7);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel8Click(TObject *Sender)
{
XvaNol(Panel8);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel9Click(TObject *Sender)
{
XvaNol(Panel9);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
YangiOyin();
}
//---------------------------------------------------------------------------
