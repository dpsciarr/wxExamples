#include "App.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

App::App(const wxString& title) : wxFrame((wxWindow*)NULL, wxID_ANY, title, wxPoint(30, 30), wxSize(800, 600)) {
	wxPanel* mainPanel = new wxPanel(this, -1);
	mainPanel->SetBackgroundColour(wxColor("grey"));

	// Create main vertical sizer for main panel
	wxBoxSizer* vSizer = new wxBoxSizer(wxVERTICAL);

	// Create the four main horizontal sizers
	wxBoxSizer* hSizer1 = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer* hSizer3 = new wxBoxSizer(wxHORIZONTAL);
	wxFlexGridSizer* hSizer4 = new wxFlexGridSizer(1, 5, 5, 5);


	// Contents for Header
	wxStaticText* headerTxt = new wxStaticText(mainPanel, wxID_ANY, wxT("TODAY"));
	hSizer1->Add(headerTxt, 1, wxALIGN_CENTER | wxTOP | wxBOTTOM, 10);

	// Content for Entry
	wxTextCtrl* submitTextBox = new wxTextCtrl(mainPanel, wxID_ANY);
	wxButton* submitBtn = new wxButton(mainPanel, wxID_ANY, _T("Submit"), wxPoint(-1, -1), wxSize(100, submitTextBox->GetSize().y));

	hSizer3->Add(submitBtn, 0, wxLEFT|wxBOTTOM, 10);
	hSizer3->Add(-1, 15);
	hSizer3->Add(submitTextBox, 1, wxRIGHT, 10);

	hSizer4->Add(new wxCheckBox(mainPanel, wxID_ANY, _T("")), 0, wxLEFT, 10);
	hSizer4->Add(-1, 25);
	hSizer4->Add(new wxStaticText(mainPanel, wxID_ANY, wxT("This is a bunch of sample text! Woo hoooooooo")));
	hSizer4->Add(-1, 25);
	hSizer4->Add(new wxButton(mainPanel, wxID_ANY, _T("X")), wxRIGHT, 10);

	hSizer4->AddGrowableCol(2, 1);

	vSizer->Add(hSizer1, 0, wxALIGN_CENTER);
	vSizer->Add(hSizer3, 0, wxEXPAND);
	vSizer->Add(-1, 10);
	vSizer->Add(hSizer4, 1, wxEXPAND);

	mainPanel->SetSizer(vSizer);

	Layout();

}

App::~App() {

}
