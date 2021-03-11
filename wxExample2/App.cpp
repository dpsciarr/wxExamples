#include "App.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

App::App() : wxFrame((wxWindow*)NULL, wxID_ANY, "Example 2", wxPoint(30, 30), wxSize(800, 600)) {

    // Main Parent Panel
    wxPanel* mainPanel = new wxPanel(this, wxID_ANY);
    mainPanel->SetBackgroundColour(wxColor("blue"));

    // Create a Secondary Panel
    wxPanel* secPanel = new wxPanel(mainPanel, wxID_ANY);
    secPanel->SetBackgroundColour(wxColor("orange"));

    // Create the main panel sizer and add the secondary panel to it
    wxBoxSizer* mainPanelSizer = new wxBoxSizer(wxVERTICAL);
    mainPanelSizer->Add(secPanel, 1, wxEXPAND | wxALL, 20);

    // Set up the main panel sizer for the main panel
    mainPanel->SetSizer(mainPanelSizer);


}

App::~App() {

}
