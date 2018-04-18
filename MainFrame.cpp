#include "MainFrame.hpp"
#include "calculator.hpp"
#include <string.h>
std::string mon_calcul;

void MainFrame::OnButtonQuitterClicked(wxCommandEvent &event)
{ //Quitter
    Close();
}

void MainFrame::OnButton0(wxCommandEvent &event)
{

		
		num=+"0";
	    txtValeur->SetValue(num);
	   //wxMessageBox(_T("Bienvenue sur wxWidgets 0 !"));
}

void MainFrame::OnButton1(wxCommandEvent &event)
{
	    num=+"1";
	    txtValeur->SetValue(num);
	    
}
void MainFrame::OnButton2(wxCommandEvent &event)
{
	 	num=+"2";
	    txtValeur->SetValue(num);
	    
}
void MainFrame::OnButton3(wxCommandEvent &event)
{
	    num=+"3";
	    txtValeur->SetValue(num);
	    
}
void MainFrame::OnButton4(wxCommandEvent &event)
{
	    num=+"4";
	    txtValeur->SetValue(num);
	    //wxMessageBox(_T("Bienvenue sur wxWidgets 4"));
}
void MainFrame::OnButton5(wxCommandEvent &event)
{
	    num=+"5";
	    txtValeur->SetValue(num);
	   // wxMessageBox(_T("Bienvenue sur wxWidgets 5"));
}
void MainFrame::OnButton6(wxCommandEvent &event)
{
	    num=+"6";
	    txtValeur->SetValue(num);
	    //wxMessageBox(_T("Bienvenue sur wxWidgets 6"));
}
void MainFrame::OnButton7(wxCommandEvent &event)
{
	    num=+"7";
	    txtValeur->SetValue(num);
	    //wxMessageBox(_T("Bienvenue sur wxWidgets 7"));
}

void MainFrame::OnButton8(wxCommandEvent &event)
{		
		num=+"8";
	    txtValeur->SetValue(num);
	    //wxMessageBox(_T("Bienvenue sur wxWidgets 8"));
}

void MainFrame::OnButton9(wxCommandEvent &event)
{
		num=+"9";
	    txtValeur->SetValue(num);
               
	  
}

void MainFrame::OnButtonLn(wxCommandEvent &event)
{
	    txtValeur->SetValue(op_size_2);              
}

void MainFrame::OnButtonPuissance(wxCommandEvent &event)
{  
	    txtValeur->SetValue(op_size_1[8]);
}

void MainFrame::OnButtonRacine(wxCommandEvent &event)
{
	    
	  
}

void MainFrame::OnButtonFacto(wxCommandEvent &event)
{
         
}



MainFrame::MainFrame(const wxString title) : wxFrame(NULL,wxID_ANY,title){

	wxBoxSizer *sizer_intermed, *sizer_boutons;
	wxStaticBoxSizer *cadre;
	wxFlexGridSizer *grille;
	wxButton *btnQuitter;


	panel = new wxPanel(this); // Création du panel d'affichage
	sizer_intermed = new wxBoxSizer(wxVERTICAL); // Création du wxBoxSizer intermédiaire

	cadre = new wxStaticBoxSizer(wxVERTICAL, panel, _T("")); // wxStaticBoxSizer dans cadre    
	grille = new wxFlexGridSizer(5, 5, 5, 5); // Création du wxFlexGridSizer

	//////L I G N E    1////////
	txtValeur = new wxTextCtrl(panel, ID_TXT_VALEUR, _T("")); // wxTextCtrl pour la valeur
	grille->Add(txtValeur, 0, wxEXPAND); //Ajout txtValeur à la grille
	////////////////////////////

	//////L I G N E    2////////

	sizer_boutons = new wxBoxSizer(wxHORIZONTAL); // Création du wxBoxSizer pour les boutons

	btnVide = new wxButton(panel, ID_BTN_TAUX, _T(" "), wxPoint(10,60), wxSize(50,30)); // Création du bouton vide
	btnVide2 = new wxButton(panel, ID_BTN_VALIDER, _T(" "), wxPoint(65,60), wxSize(50,30)); // Création du bouton  vide 2
	btnSin1 = new wxButton(panel, ID_BTN_QUITTER, _T("Sin-1"), wxPoint(120,60), wxSize(50,30)); // Création du bouton sin-1
	btnCos1 = new wxButton(panel, ID_BTN_QUITTER, _T("Cos-1"), wxPoint(175,60), wxSize(50,30)); // Création du bouton cos-1
	btnTan1 = new wxButton(panel, ID_BTN_QUITTER, _T("Tan-1"), wxPoint(230,60), wxSize(50,30)); // Création du bouton tan6-1

	sizer_boutons->Add(btnVide, 0); //Ajoute boutton vide
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnVide2, 0); //Ajoute boutton vide2
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnSin1, 0); //Ajoute boutton sin1
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnCos1, 0); //Ajoute boutton cos1
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnTan1, 0); //Ajoute boutton Tan1

	btnVide->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnVide2->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnSin1->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnCos1->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnTan1->wxControl::SetBackgroundColour(wxColour(148, 148, 148));

	//////L I G N E    3////////

	btnLn = new wxButton(panel, ID_BoutonLn, _T("Ln"), wxPoint(10,90), wxSize(50,30)); // Création du bouton ln
	btnExp = new wxButton(panel, ID_BTN_VALIDER, _T("Exp"), wxPoint(65,90), wxSize(50,30)); // Création du bouton exp
	btnSin = new wxButton(panel, ID_BTN_QUITTER, _T("Sin"), wxPoint(120,90), wxSize(50,30)); // Création du bouton sin
	btnCos = new wxButton(panel, ID_BTN_QUITTER, _T("Cos"), wxPoint(175,90), wxSize(50,30)); // Création du bouton cos
	btnTan = new wxButton(panel, ID_BTN_QUITTER, _T("Tan"), wxPoint(230,90), wxSize(50,30)); // Création du bouton tan

	sizer_boutons->Add(btnLn, 0); //Ajoute boutton ln
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnExp, 0); //Ajoute boutton exp
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnSin, 0); //Ajoute boutton sin
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnCos, 0); //Ajoute boutton cos
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnTan, 0); //Ajoute boutton tan

	btnLn->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnExp->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnSin->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnCos->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnTan->wxControl::SetBackgroundColour(wxColour(148, 148, 148));

	///////////////////////////

	//////L I G N E    4////////

	btnLog = new wxButton(panel, ID_BTN_TAUX, _T("Log"), wxPoint(10,120), wxSize(50,30)); // Création du bouton "Pourcent"
	btnPuiss = new wxButton(panel, ID_BoutonPuissance, _T("Puiss"), wxPoint(65,120), wxSize(50,30)); // Création du bouton "CE"
	btnFact = new wxButton(panel, ID_BTN_QUITTER, _T("!"), wxPoint(120,120), wxSize(50,30)); // Création du bouton "C"
	btnRacine = new wxButton(panel,ID_BoutonRacine, _T("Racine"), wxPoint(175,120), wxSize(50,30)); // Création du bouton "Delete"
	btnPi = new wxButton(panel, ID_BTN_QUITTER, _T("Pi"), wxPoint(230,120), wxSize(50,30)); // Création du bouton "Diviser"

	sizer_boutons->Add(btnLog, 0); //Ajoute boutton Pourcent
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnPuiss, 0); //Ajoute boutton CE
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnFact, 0); //Ajoute boutton C
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnRacine, 0); //Ajoute boutton Delete
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnPi, 0); //Ajoute boutton Diviser

	btnLog->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnPuiss->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnFact->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnRacine->wxControl::SetBackgroundColour(wxColour(148, 148, 148));
	btnPi->wxControl::SetBackgroundColour(wxColour(148, 148, 148));	

	///////////////////////////	

	//////L I G N E    5////////

	btn7 = new wxButton(panel, ID_Bouton7, _T("7"), wxPoint(10,150), wxSize(50,30)); // Création du bouton nombre 7
	btn8 = new wxButton(panel, ID_Bouton8, _T("8"), wxPoint(65,150), wxSize(50,30)); // Création du bouton 8
	btn9 = new wxButton(panel, ID_Bouton9, _T("9"), wxPoint(120,150), wxSize(50,30)); // Création du bouton 9
	btnDel = new wxButton(panel, ID_BTN_QUITTER, _T("DEL"), wxPoint(175,150), wxSize(50,30)); // Création du bouton "Delete"
	btnAc = new wxButton(panel, ID_BTN_QUITTER, _T("AC"), wxPoint(230,150), wxSize(50,30)); // Création du bouton "Diviser"

	sizer_boutons->Add(btn7, 0); //Ajoute boutton 7
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn8, 0); //Ajoute boutton CE
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn9, 0); //Ajoute boutton C
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnDel, 0); //Ajoute boutton Delete
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnAc, 0); //Ajoute boutton Diviser

	btnDel->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	
	btnAc->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	

	///////////////////////////

	//////L I G N E    5////////

	btn4 = new wxButton(panel, ID_Bouton4, _T("4"), wxPoint(10,180), wxSize(50,30)); // Création du bouton 4
	btn5 = new wxButton(panel, ID_Bouton5, _T("5"), wxPoint(65,180), wxSize(50,30)); // Création du bouton 5
	btn6 = new wxButton(panel, ID_Bouton6, _T("6"), wxPoint(120,180), wxSize(50,30)); // Création du bouton 6
	btnX = new wxButton(panel, ID_BTN_QUITTER, _T("X"), wxPoint(175,180), wxSize(50,30)); // Création du bouton "Delete"
	btnDiv = new wxButton(panel, ID_BTN_QUITTER, _T("/"), wxPoint(230,180), wxSize(50,30)); // Création du bouton "Diviser"

	sizer_boutons->Add(btn4, 0); //Ajoute boutton 4
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn5, 0); //Ajoute boutton CE
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn6, 0); //Ajoute boutton C
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnX, 0); //Ajoute boutton Delete
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnDiv, 0); //Ajoute boutton Diviser

	btnX->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	
	btnDiv->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	

	///////////////////////////		

		//////L I G N E    6////////

	btn1 = new wxButton(panel, ID_Bouton1, _T("1"), wxPoint(10,210), wxSize(50,30)); // Création du bouton 1
	btn2 = new wxButton(panel, ID_Bouton2, _T("2"), wxPoint(65,210), wxSize(50,30)); // Création du bouton 2
	btn3 = new wxButton(panel, ID_Bouton3, _T("3"), wxPoint(120,210), wxSize(50,30)); // Création du bouton 3
	btnPlus = new wxButton(panel, ID_BTN_QUITTER, _T("+"), wxPoint(175,210), wxSize(50,30)); // Création du bouton "Delete"
	btnMoins = new wxButton(panel, ID_BTN_QUITTER, _T("-"), wxPoint(230,210), wxSize(50,30)); // Création du bouton "Diviser"

	sizer_boutons->Add(btn1, 0); //Ajoute boutton Pourcent
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn2, 0); //Ajoute boutton CE
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btn3, 0); //Ajoute boutton C
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnPlus, 0); //Ajoute boutton Delete
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnMoins, 0); //Ajoute boutton Diviser

	btnPlus->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	
	btnMoins->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	

	///////////////////////////	

		//////L I G N E    7////////

	btn0 = new wxButton(panel, ID_Bouton0, _T("0"), wxPoint(10,240), wxSize(50,30)); // Création du bouton zero

	btnPoint = new wxButton(panel, ID_BTN_VALIDER, _T("."), wxPoint(65,240), wxSize(50,30)); // Création du bouton "CE"
	btnTiret = new wxButton(panel, ID_BTN_QUITTER, _T("( - )"), wxPoint(120,240), wxSize(50,30)); // Création du bouton "C"
	btnVide4 = new wxButton(panel, ID_BTN_QUITTER, _T(" "), wxPoint(175,240), wxSize(50,30)); // Création du bouton "Delete"
	btnEgal = new wxButton(panel, ID_BTN_QUITTER, _T("="), wxPoint(230,240), wxSize(50,30)); // Création du bouton "Diviser"

	sizer_boutons->Add(btn0, 0); //Ajoute boutton zero
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnPoint, 0); //Ajoute boutton CE
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnTiret, 0); //Ajoute boutton C
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnVide4, 0); //Ajoute boutton Delete
	sizer_boutons->AddSpacer(5); // Ajout d'un espace entre les deux boutons
	sizer_boutons->Add(btnEgal, 0); //Ajoute boutton Diviser

	btnVide4->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	
	btnEgal->wxControl::SetBackgroundColour(wxColour(99, 172, 238));	

	///////////////////////////

	cadre->Add(grille, 1, wxALL | wxEXPAND, 5); // Ajout de la grille au wxStaticBoxSizer
	grille->AddGrowableCol(0); // La Première colonne est extensible
	sizer_intermed->Add(cadre, 1, wxALL | wxEXPAND, 5);

	///// A F F I C H A G E 	B O U T T O N S /////////////////
	sizer_boutons = new wxBoxSizer(wxHORIZONTAL); // Création du wxBoxSizer pour les boutons
	btnQuitter = new wxButton(panel, ID_BTN_QUITTER, _T("Quitter")); // Création du bouton "Quitter"
	sizer_boutons->Add(btnQuitter, 0); //Ajoute boutton Quitter
	////////////////////////////////////////////////////////////

	
	sizer_intermed->Add(sizer_boutons, 0, wxALIGN_RIGHT | wxALL, 5); // Ajout du sizer des boutons au sizer intermédiaire

	
	panel->SetSizer(sizer_intermed); // Affectation du sizer intermédiaire au wxPanel

}


BEGIN_EVENT_TABLE(MainFrame,wxFrame)

	EVT_BUTTON(ID_BTN_QUITTER,MainFrame::OnButtonQuitterClicked)
	EVT_BUTTON(ID_Bouton0,MainFrame::OnButton0)
	EVT_BUTTON(ID_Bouton1,MainFrame::OnButton1)
	EVT_BUTTON(ID_Bouton2,MainFrame::OnButton2)
	EVT_BUTTON(ID_Bouton3,MainFrame::OnButton3)
	EVT_BUTTON(ID_Bouton4,MainFrame::OnButton4)
	EVT_BUTTON(ID_Bouton5,MainFrame::OnButton5)
	EVT_BUTTON(ID_Bouton6,MainFrame::OnButton6)
	EVT_BUTTON(ID_Bouton7,MainFrame::OnButton7)
	EVT_BUTTON(ID_Bouton8,MainFrame::OnButton8)
	EVT_BUTTON(ID_Bouton9,MainFrame::OnButton9)
	EVT_BUTTON(ID_BoutonPuissance,MainFrame::OnButtonPuissance)
	EVT_BUTTON(ID_BoutonFact,MainFrame::OnButtonFacto)
	EVT_BUTTON(ID_BoutonRacine,MainFrame::OnButtonRacine)
	EVT_BUTTON(ID_BoutonLn,MainFrame::OnButtonLn)
	

END_EVENT_TABLE()

MainFrame::~MainFrame(){}