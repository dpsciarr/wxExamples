#include "App.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

App::App() : wxFrame((wxWindow*)NULL, wxID_ANY, "Example 2", wxPoint(30, 30), wxSize(800, 600)) {

    wxPanel *mainPanel = new wxPanel(this, wxID_ANY);

    wxBoxSizer *vSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* hSizer1 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* hSizer2 = new wxBoxSizer(wxHORIZONTAL);

    wxButton* okBtn = new wxButton(mainPanel, -1, "OK");
    wxButton* cancelBtn = new wxButton(mainPanel, -1, "Cancel");

    hSizer1->Add(new wxPanel(mainPanel, -1));
    vSizer->Add(hSizer1, 1, wxEXPAND);

    hSizer2->Add(okBtn);
    hSizer2->Add(cancelBtn);

    vSizer->Add(hSizer2, 0, wxALIGN_RIGHT | wxBOTTOM | wxRIGHT, 10);

    mainPanel->SetSizer(vSizer);
    
    Centre();
    
}

App::~App() {

}
