#include "Main.h"
#include "App.h"
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

Main::Main() {

}
Main::~Main() {

}
bool Main::OnInit() {
    App* app = new App();
    app->Show();
    return true;
};

wxIMPLEMENT_APP(Main);