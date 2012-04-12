/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#include "EditPropScene.h"

//(*InternalHeaders(EditPropScene)#include <wx/settings.h>#include <wx/font.h>#include <wx/intl.h>#include <wx/string.h>//*)
#include <wx/colour.h>
#include <wx/colordlg.h>
#include <wx/cmndata.h>
#include <wx/help.h>
#include <wx/config.h>

#include "GDL/IDE/HelpFileAccess.h"
#include "GDL/CommonTools.h"
#include "GDCore/PlatformDefinition/Layout.h"
#include "GDL/Scene.h"

//(*IdInit(EditPropScene)
const long EditPropScene::ID_STATICTEXT1 = wxNewId();
const long EditPropScene::ID_STATICTEXT2 = wxNewId();
const long EditPropScene::ID_PANEL2 = wxNewId();
const long EditPropScene::ID_STATICLINE1 = wxNewId();
const long EditPropScene::ID_TEXTCTRL1 = wxNewId();
const long EditPropScene::ID_PANEL1 = wxNewId();
const long EditPropScene::ID_BUTTON1 = wxNewId();
const long EditPropScene::ID_CHECKBOX1 = wxNewId();
const long EditPropScene::ID_RADIOBOX1 = wxNewId();
const long EditPropScene::ID_STATICTEXT3 = wxNewId();
const long EditPropScene::ID_STATICTEXT4 = wxNewId();
const long EditPropScene::ID_TEXTCTRL2 = wxNewId();
const long EditPropScene::ID_STATICTEXT5 = wxNewId();
const long EditPropScene::ID_STATICTEXT6 = wxNewId();
const long EditPropScene::ID_TEXTCTRL3 = wxNewId();
const long EditPropScene::ID_STATICTEXT7 = wxNewId();
const long EditPropScene::ID_TEXTCTRL4 = wxNewId();
const long EditPropScene::ID_STATICLINE2 = wxNewId();
const long EditPropScene::ID_BUTTON2 = wxNewId();
const long EditPropScene::ID_BUTTON3 = wxNewId();
const long EditPropScene::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EditPropScene,wxDialog)
	//(*EventTable(EditPropScene)
	//*)
END_EVENT_TABLE()

EditPropScene::EditPropScene(wxWindow* parent, gd::Layout & layout_) :
    layout(layout_)
{
	//(*Initialize(EditPropScene)
	wxStaticBoxSizer* StaticBoxSizer2;
	wxFlexGridSizer* FlexGridSizer4;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer9;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer7;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxGridSizer* GridSizer1;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer6;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, wxID_ANY, _("Editer les propri�t�s de la sc�ne"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(2);
	Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	Panel2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer2->AddGrowableCol(1);
	FlexGridSizer2->AddGrowableRow(0);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Scene :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NomSceneTxt = new wxStaticText(Panel2, ID_STATICTEXT2, _("Sans Nom"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont NomSceneTxtFont(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	NomSceneTxt->SetFont(NomSceneTxtFont);
	FlexGridSizer2->Add(NomSceneTxt, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(FlexGridSizer2);
	FlexGridSizer2->Fit(Panel2);
	FlexGridSizer2->SetSizeHints(Panel2);
	FlexGridSizer1->Add(Panel2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer5->AddGrowableCol(0);
	GridSizer1 = new wxGridSizer(0, 2, 0, 0);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Titre de la fen�tre"));
	CaptionEdit = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticBoxSizer2->Add(CaptionEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Couleur de fond"));
	FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer4->AddGrowableCol(1);
	FlexGridSizer4->AddGrowableRow(0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(24,23), wxSUNKEN_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(100,100,100));
	FlexGridSizer4->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ColorBt = new wxButton(this, ID_BUTTON1, _("Choisir la couleur"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer4->Add(ColorBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(FlexGridSizer4, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	GridSizer1->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(GridSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Musiques et sons"));
	stopSoundsCheck = new wxCheckBox(this, ID_CHECKBOX1, _("Stopper tous les sons et musiques au d�marrage"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	stopSoundsCheck->SetValue(true);
	StaticBoxSizer4->Add(stopSoundsCheck, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("Tri rapide ( rapide mais risque de \"clignotement\" )"),
		_("Tri stable ( plus lent mais pas de \"clignotement\" )")
	};
	TriBox = new wxRadioBox(this, ID_RADIOBOX1, _("M�thode d\'affichage des objets"), wxDefaultPosition, wxDefaultSize, 2, __wxRadioBoxChoices_1, 1, wxRA_HORIZONTAL, wxDefaultValidator, _T("ID_RADIOBOX1"));
	FlexGridSizer5->Add(TriBox, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT3, _("Consultez l\'aide pour plus d\'informations sur les deux m�thodes."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText2Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_ITALIC,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	FlexGridSizer5->Add(StaticText2, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Avanc�"));
	FlexGridSizer6 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer6->AddGrowableCol(0);
	FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer7->AddGrowableCol(1);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT4, _("Angle de champ :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer7->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	fovEdit = new wxTextCtrl(this, ID_TEXTCTRL2, _("90"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer7->Add(fovEdit, 1, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT5, _("�"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer7->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer8->AddGrowableCol(1);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT6, _("Distance du premier plan de coupe :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer8->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	zNearEdit = new wxTextCtrl(this, ID_TEXTCTRL3, _("1"), wxDefaultPosition, wxSize(77,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer8->Add(zNearEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer8, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer9->AddGrowableCol(1);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT7, _("Distance du dernier plan de coupe :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer9->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	zFarEdit = new wxTextCtrl(this, ID_TEXTCTRL4, _("500"), wxDefaultPosition, wxSize(77,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	FlexGridSizer9->Add(zFarEdit, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer9, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer3->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer5->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	OkBt = new wxButton(this, ID_BUTTON2, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer3->Add(OkBt, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	AnnulerBt = new wxButton(this, ID_BUTTON3, _("Annuler"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer3->Add(AnnulerBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	AideBt = new wxButton(this, ID_BUTTON4, _("Aide"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	FlexGridSizer3->Add(AideBt, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditPropScene::OnColorBtClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditPropScene::OnOkBtClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditPropScene::OnAnnulerBtClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditPropScene::OnAideBtClick);
	//*)

	CaptionEdit->ChangeValue(layout.GetWindowDefaultTitle());
	NomSceneTxt->SetLabel(layout.GetName());

	Panel1->SetBackgroundColour(wxColour(layout.GetBackgroundColorRed(), layout.GetBackgroundColorGreen(), layout.GetBackgroundColorBlue()));

    //TODO: GD C++ Platform specific code
    try
    {
        Scene & scene = dynamic_cast<Scene&>(layout);

        if ( scene.standardSortMethod )
            TriBox->SetSelection(0);
        else
            TriBox->SetSelection(1);

        fovEdit->SetValue(ToString(scene.oglFOV));
        zNearEdit->SetValue(ToString(scene.oglZNear));
        zFarEdit->SetValue(ToString(scene.oglZFar));
        stopSoundsCheck->SetValue(scene.stopSoundsOnStartup);
    }
    catch (...) { /*Not a GD C++ Platform scene*/ }
}

EditPropScene::~EditPropScene()
{
	//(*Destroy(EditPropScene)
	//*)
}


void EditPropScene::OnOkBtClick(wxCommandEvent& event)
{
    layout.SetWindowDefaultTitle(ToString(CaptionEdit->GetValue()));

    wxColourData cData;
    cData.SetColour(Panel1->GetBackgroundColour());
    layout.SetBackgroundColor( cData.GetColour().Red(), cData.GetColour().Green(), cData.GetColour().Blue());

    //TODO: GD C++ Platform specific code
    try
    {
        Scene & scene = dynamic_cast<Scene&>(layout);

        scene.oglFOV = ToFloat(string(fovEdit->GetValue().mb_str()));
        scene.oglZNear = ToFloat(string(zNearEdit->GetValue().mb_str()));
        scene.oglZFar = ToFloat(string(zFarEdit->GetValue().mb_str()));
        scene.stopSoundsOnStartup = stopSoundsCheck->GetValue();

        if ( TriBox->GetSelection() == 0 )
            scene.standardSortMethod = true;
        else
            scene.standardSortMethod = false;
    }
    catch (...) { /*Not a GD C++ Platform scene*/ }

    EndModal(1);
}

void EditPropScene::OnAnnulerBtClick(wxCommandEvent& event)
{
    EndModal(0);
}

void EditPropScene::OnColorBtClick(wxCommandEvent& event)
{
    wxColourData cData;
    cData.SetColour(Panel1->GetBackgroundColour());
    wxColourDialog Dialog(this, &cData);
    if ( Dialog.ShowModal() == wxID_OK)
    {
        cData = Dialog.GetColourData();
        Panel1->SetBackgroundColour(cData.GetColour());
        Panel1->Refresh();
    }
}

void EditPropScene::OnAideBtClick(wxCommandEvent& event)
{
    HelpFileAccess * helpFileAccess = HelpFileAccess::GetInstance();
    helpFileAccess->DisplaySection(8);
}
