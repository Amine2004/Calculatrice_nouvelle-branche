#ifndef MAINFRAME_H
#define MAINFRAME_H

enum{
	ID_BTN_VALIDER = wxID_HIGHEST + 1,
	ID_BTN_QUITTER,
    ID_BTN_TAUX,
    ID_Bouton0,
    ID_Bouton1,
    ID_Bouton2,
    ID_Bouton3,
    ID_Bouton4,
    ID_Bouton5,
    ID_Bouton6,
    ID_Bouton7,
    ID_Bouton8,
    ID_Bouton9,
    ID_BoutonLn,
    ID_BoutonPuissance,
    ID_BoutonFact,
    ID_BoutonRacine,
	ID_TXT_VALEUR,
	ID_CHOICE_CURRENCY,
	ID_TXT_RES,
};

class MainFrame : public wxFrame{ //dérivée de wxFrame
	public:
		MainFrame(const wxString title); //Constructeur
		virtual ~MainFrame(); //Destructeur

	protected:
		std::string num;
		wxPanel *panel;
		wxTextCtrl *txtValeur ,*labelVal;
		wxChoice *wxChoisebouton;
		wxButton *btnVide,*btnVide2,*btnSin1,*btnCos1,*btnTan1,*btnLn,*btnExp,*btnSin,*btnCos,*btnTan;
		wxButton *btnLog,*btnPuiss,*btnFact,*btnRacine,*btnPi,*btn7,*btn8,*btn9,*btnDel,*btnAc;
		wxButton *btn4,*btn5,*btn6,*btnX,*btnDiv,*btn1,*btn2,*btn3,*btnPlus,*btnMoins;
		wxButton *btn0,*btnPoint,*btnTiret,*btnVide4,*btnEgal;

		
		void OnButtonValiderClicked(wxCommandEvent &event);
		void OnButtonQuitterClicked(wxCommandEvent &event);
		void OnButtonTauxClicked(wxCommandEvent &event);
		void OnButton0(wxCommandEvent &event);
		void OnButton1(wxCommandEvent &event);
		void OnButton2(wxCommandEvent &event);
		void OnButton3(wxCommandEvent &event);
		void OnButton4(wxCommandEvent &event);
		void OnButton5(wxCommandEvent &event);
		void OnButton6(wxCommandEvent &event);
		void OnButton7(wxCommandEvent &event);
		void OnButton8(wxCommandEvent &event);
		void OnButton9(wxCommandEvent &event);
		void OnButtonLn(wxCommandEvent &event);
		void OnButtonPuissance(wxCommandEvent &event);
		void OnButtonRacine(wxCommandEvent &event);
		void OnButtonFacto(wxCommandEvent &event);

		DECLARE_EVENT_TABLE()

};




#endif //MAINFRAME_H