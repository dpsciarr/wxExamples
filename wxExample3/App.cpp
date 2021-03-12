#include "App.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

App::App(const wxString& title) : wxFrame((wxWindow*)NULL, wxID_ANY, title, wxPoint(30, 30), wxSize(800, 600)) {

    wxPanel* mainPanel = new wxPanel(this, -1);

    // Main Vertical Sizer
    wxBoxSizer* vSizer = new wxBoxSizer(wxVERTICAL);

    // Create the Horizontal Sizers
    wxBoxSizer* hSizer1 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* hSizer2 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* hSizer3 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* hSizer4 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* hSizer5 = new wxBoxSizer(wxHORIZONTAL);

    // Contents of Horizontal Sizer #1
    wxStaticText* txt1 = new wxStaticText(mainPanel, wxID_ANY, wxT("Class Name"));
    wxTextCtrl* tc = new wxTextCtrl(mainPanel, wxID_ANY);

    // Contents of Horizontal Sizer #2
    wxStaticText* txt2 = new wxStaticText(mainPanel, wxID_ANY, wxT("Matching Classes"));

    // Contents of Horizontal Sizer #3
    wxTextCtrl* tc2 = new wxTextCtrl(mainPanel, wxID_ANY, wxT(""),
        wxPoint(-1, -1), wxSize(-1, -1), wxTE_MULTILINE);

    // Contents of Horizontal Sizer #4
    wxCheckBox* cb1 = new wxCheckBox(mainPanel, wxID_ANY, wxT("Case Sensitive"));
    wxCheckBox* cb2 = new wxCheckBox(mainPanel, wxID_ANY, wxT("Nested Classes"));
    wxCheckBox* cb3 = new wxCheckBox(mainPanel, wxID_ANY, wxT("Non-Project Classes"));

    // Contents of Horizontal Sizer #5
    wxButton* btn1 = new wxButton(mainPanel, wxID_ANY, wxT("OK"));
    wxButton* btn2 = new wxButton(mainPanel, wxID_ANY, wxT("CLOSE"));


    // Add Contents to Vertical Slider
    hSizer1->Add(txt1, 0, wxRIGHT, 8);
    hSizer1->Add(tc, 1);
    vSizer->Add(hSizer1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
    vSizer->Add(-1, 10);

    hSizer2->Add(txt2, 0);
    vSizer->Add(hSizer2, 0, wxLEFT | wxTOP, 10);
    vSizer->Add(-1, 10);

    hSizer3->Add(tc2, 1, wxEXPAND);
    vSizer->Add(hSizer3, 1, wxLEFT | wxRIGHT | wxEXPAND, 10);
    vSizer->Add(-1, 25);

    hSizer4->Add(cb1);
    hSizer4->Add(cb2, 0, wxLEFT, 10);
    hSizer4->Add(cb3, 0, wxLEFT, 10);
    vSizer->Add(hSizer4, 0, wxLEFT, 10);
    vSizer->Add(-1, 25);

    hSizer5->Add(btn1, 0);
    hSizer5->Add(btn2, 0, wxLEFT | wxBOTTOM, 5);
    vSizer->Add(hSizer5, 0, wxALIGN_RIGHT | wxRIGHT, 10);
    

    mainPanel->SetSizer(vSizer);

}

App::~App() {

}
