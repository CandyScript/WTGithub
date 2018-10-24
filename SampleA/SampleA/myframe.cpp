/////////////////////////////////////////////////////////////////////////////
// Name:        myframe.cpp
// Purpose:     
// Author:      
// Modified by: 
// Created:     29/01/2017 16:53:55
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
#include "wx/imaglist.h"
////@end includes

#include "myframe.h"

////@begin XPM images
////@end XPM images


/*
 * MyFrame type definition
 */

IMPLEMENT_CLASS( MyFrame, wxFrame )


/*
 * MyFrame event table definition
 */

BEGIN_EVENT_TABLE( MyFrame, wxFrame )

////@begin MyFrame event table entries
    EVT_CLOSE( MyFrame::OnCloseWindow )
    EVT_BUTTON( ID_BUTTON, MyFrame::OnButtonClick )
////@end MyFrame event table entries

END_EVENT_TABLE()


/*
 * MyFrame constructors
 */

MyFrame::MyFrame()
{
    Init();
}

MyFrame::MyFrame( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * MyFrame creator
 */

bool MyFrame::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin MyFrame creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("resource/open.png")));
    Centre();

    if (FindWindow(ID_SPLITTERWINDOW))
        ((wxSplitterWindow*) FindWindow(ID_SPLITTERWINDOW))->SetSashPosition(50);
    if (FindWindow(ID_SPLITTERWINDOW2))
        ((wxSplitterWindow*) FindWindow(ID_SPLITTERWINDOW2))->SetSashPosition(200);
    if (FindWindow(ID_SPLITTERWINDOW1))
        ((wxSplitterWindow*) FindWindow(ID_SPLITTERWINDOW1))->SetSashPosition(200);
////@end MyFrame creation
    return true;
}


/*
 * MyFrame destructor
 */

MyFrame::~MyFrame()
{
////@begin MyFrame destruction
////@end MyFrame destruction
}


/*
 * Member initialisation
 */

void MyFrame::Init()
{
////@begin MyFrame member initialisation
////@end MyFrame member initialisation
}


/*
 * Control creation for MyFrame
 */

void MyFrame::CreateControls()
{    
////@begin MyFrame content construction
    MyFrame* itemFrame1 = this;

    wxMenuBar* menuBar = new wxMenuBar;
    wxMenu* itemMenu3 = new wxMenu;
    itemMenu3->Append(ID_MENUITEM, _("Open"), wxEmptyString, wxITEM_NORMAL);
    itemMenu3->Append(ID_MENUITEM1, _("New"), wxEmptyString, wxITEM_NORMAL);
    menuBar->Append(itemMenu3, _("File"));
    wxMenu* itemMenu6 = new wxMenu;
    menuBar->Append(itemMenu6, _("Edit"));
    wxMenu* itemMenu7 = new wxMenu;
    menuBar->Append(itemMenu7, _("View"));
    wxMenu* itemMenu8 = new wxMenu;
    menuBar->Append(itemMenu8, _("Insert"));
    wxMenu* itemMenu9 = new wxMenu;
    menuBar->Append(itemMenu9, _("Publish"));
    wxMenu* itemMenu10 = new wxMenu;
    menuBar->Append(itemMenu10, _("Help"));
    itemFrame1->SetMenuBar(menuBar);

    wxToolBar* itemToolBar11 = CreateToolBar( wxTB_FLAT|wxTB_HORIZONTAL, ID_TOOLBAR1 );
    wxBitmap itemtool12Bitmap(itemFrame1->GetBitmapResource(wxT("resource/new.png")));
    wxBitmap itemtool12BitmapDisabled(itemFrame1->GetBitmapResource(wxT("resource/new.png")));
    itemToolBar11->AddTool(ID_TOOL, wxEmptyString, itemtool12Bitmap, itemtool12BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
    wxBitmap itemtool13Bitmap(itemFrame1->GetBitmapResource(wxT("resource/open.png")));
    wxBitmap itemtool13BitmapDisabled(itemFrame1->GetBitmapResource(wxT("resource/open.png")));
    itemToolBar11->AddTool(ID_TOOL1, wxEmptyString, itemtool13Bitmap, itemtool13BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
    wxBitmap itemtool14Bitmap(itemFrame1->GetBitmapResource(wxT("resource/save.png")));
    wxBitmap itemtool14BitmapDisabled(itemFrame1->GetBitmapResource(wxT("resource/save.png")));
    itemToolBar11->AddTool(ID_TOOL2, wxEmptyString, itemtool14Bitmap, itemtool14BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
    itemToolBar11->AddSeparator();
    wxBitmap itemtool16Bitmap(itemFrame1->GetBitmapResource(wxT("resource/undo.png")));
    wxBitmap itemtool16BitmapDisabled(itemFrame1->GetBitmapResource(wxT("resource/undo.png")));
    itemToolBar11->AddTool(ID_TOOL3, wxEmptyString, itemtool16Bitmap, itemtool16BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
    wxBitmap itemtool17Bitmap(itemFrame1->GetBitmapResource(wxT("resource/redo.png")));
    wxBitmap itemtool17BitmapDisabled(itemFrame1->GetBitmapResource(wxT("resource/redo.png")));
    itemToolBar11->AddTool(ID_TOOL4, wxEmptyString, itemtool17Bitmap, itemtool17BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL);
    itemToolBar11->Realize();
    itemFrame1->SetToolBar(itemToolBar11);

    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
    itemFrame1->SetSizer(itemBoxSizer18);

    wxSplitterWindow* itemSplitterWindow19 = new wxSplitterWindow( itemFrame1, ID_SPLITTERWINDOW, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxNO_BORDER );
    itemSplitterWindow19->SetMinimumPaneSize(0);

    wxSplitterWindow* itemSplitterWindow20 = new wxSplitterWindow( itemSplitterWindow19, ID_SPLITTERWINDOW2, wxDefaultPosition, wxSize(200, 200), 0 );
    itemSplitterWindow20->SetMinimumPaneSize(0);

    wxNotebook* itemNotebook21 = new wxNotebook( itemSplitterWindow20, ID_NOTEBOOK, wxDefaultPosition, wxDefaultSize, wxBK_DEFAULT );

    wxPanel* itemPanel22 = new wxPanel( itemNotebook21, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel22->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxBoxSizer* itemBoxSizer23 = new wxBoxSizer(wxVERTICAL);
    itemPanel22->SetSizer(itemBoxSizer23);

    wxTreeCtrl* itemTreeCtrl24 = new wxTreeCtrl( itemPanel22, ID_TREECTRL, wxDefaultPosition, wxSize(100, 100), wxTR_SINGLE );
    itemBoxSizer23->Add(itemTreeCtrl24, 1, wxGROW|wxALL, 5);

    itemNotebook21->AddPage(itemPanel22, _("Tab 1D"));

    wxPanel* itemPanel25 = new wxPanel( itemNotebook21, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel25->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);

    itemNotebook21->AddPage(itemPanel25, _("Tab 2D"));

    wxPanel* itemPanel26 = new wxPanel( itemNotebook21, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel26->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);

    itemNotebook21->AddPage(itemPanel26, _("Tab 3D"));

    wxPanel* itemPanel27 = new wxPanel( itemSplitterWindow20, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel27->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxBoxSizer* itemBoxSizer28 = new wxBoxSizer(wxVERTICAL);
    itemPanel27->SetSizer(itemBoxSizer28);

    wxArrayString itemListBox29Strings;
    itemListBox29Strings.Add(_("A"));
    itemListBox29Strings.Add(_("B"));
    itemListBox29Strings.Add(_("C"));
    itemListBox29Strings.Add(_("D"));
    itemListBox29Strings.Add(_("E"));
    itemListBox29Strings.Add(_("F"));
    itemListBox29Strings.Add(_("G"));
    wxListBox* itemListBox29 = new wxListBox( itemPanel27, ID_LISTBOX, wxDefaultPosition, wxDefaultSize, itemListBox29Strings, wxLB_SINGLE );
    itemListBox29->SetStringSelection(_("A"));
    itemBoxSizer28->Add(itemListBox29, 1, wxGROW|wxALL, 1);

    wxButton* itemButton30 = new wxButton( itemPanel27, ID_BUTTON, _("Apply"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer28->Add(itemButton30, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 1);

    itemSplitterWindow20->SplitHorizontally(itemNotebook21, itemPanel27, 200);
    wxSplitterWindow* itemSplitterWindow31 = new wxSplitterWindow( itemSplitterWindow19, ID_SPLITTERWINDOW1, wxDefaultPosition, wxSize(100, 100), 0 );
    itemSplitterWindow31->SetMinimumPaneSize(0);

    wxPanel* itemPanel32 = new wxPanel( itemSplitterWindow31, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel32->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel32->SetBackgroundColour(wxColour(230, 221, 64));

    wxPanel* itemPanel33 = new wxPanel( itemSplitterWindow31, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
    itemPanel33->SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    itemPanel33->SetBackgroundColour(wxColour(253, 159, 132));

    itemSplitterWindow31->SplitHorizontally(itemPanel32, itemPanel33, 200);
    itemSplitterWindow19->SplitVertically(itemSplitterWindow20, itemSplitterWindow31, 50);
    itemBoxSizer18->Add(itemSplitterWindow19, 1, wxGROW|wxALL, 5);

    // Connect events and objects
    itemPanel32->Connect(ID_PANEL3, wxEVT_PAINT, wxPaintEventHandler(MyFrame::OnPaint), NULL, this);
    itemPanel33->Connect(ID_PANEL4, wxEVT_PAINT, wxPaintEventHandler(MyFrame::OnPaint), NULL, this);
////@end MyFrame content construction
}


/*
 * Should we show tooltips?
 */

bool MyFrame::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap MyFrame::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin MyFrame bitmap retrieval
    wxUnusedVar(name);
    if (name == wxT("resource/new.png"))
    {
        wxBitmap bitmap(wxT("../../resource/new.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    else if (name == wxT("resource/open.png"))
    {
        wxBitmap bitmap(wxT("../../resource/open.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    else if (name == wxT("resource/undo.png"))
    {
        wxBitmap bitmap(wxT("../../resource/undo.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    else if (name == wxT("resource/redo.png"))
    {
        wxBitmap bitmap(wxT("../../resource/redo.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    else if (name == wxT("resource/save.png"))
    {
        wxBitmap bitmap(wxT("../../resource/save.png"), wxBITMAP_TYPE_PNG);
        return bitmap;
    }
    return wxNullBitmap;
////@end MyFrame bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon MyFrame::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin MyFrame icon retrieval
    wxUnusedVar(name);
    if (name == wxT("resource/open.png"))
    {
        wxIcon icon(wxT("../../resource/open.png"), wxBITMAP_TYPE_PNG);
        return icon;
    }
    return wxNullIcon;
////@end MyFrame icon retrieval
}


/*
 * wxEVT_PAINT event handler for ID_PANEL3
 */

void MyFrame::OnPaint( wxPaintEvent& event )
{
////@begin wxEVT_PAINT event handler for ID_PANEL3 in MyFrame.
    // Before editing this code, remove the block markers.
    int id = event.GetId();
    wxPaintDC dc(wxDynamicCast(event.GetEventObject(), wxWindow));
    if(id==ID_PANEL3)
    {
        dc.Clear();
        wxPanel* panel1 = (wxPanel*)FindWindow(ID_PANEL3);
        wxSize size = panel1->GetSize();
        wxPoint center(size.GetWidth()/2, size.GetHeight()/2);
        int radius1 = 30;
        wxPen pen(wxColour(255,0,0), 3);
        dc.SetPen(pen);
        dc.DrawCircle(center.x, center.y, radius1);
    }
    else if(id==ID_PANEL4)
    {
        dc.Clear();
        wxPanel* panel2 = (wxPanel*)FindWindow(ID_PANEL4);
        wxSize size = panel2->GetSize();
        wxPoint center(size.GetWidth()/2, size.GetHeight()/2);
        int radius2 = 60;
        wxPen pen(wxColour(0,255,0), 3);
        dc.SetPen(pen);
        dc.DrawCircle(center.x, center.y, radius2);
    }
////@end wxEVT_PAINT event handler for ID_PANEL3 in MyFrame. 
}

void MyFrame::OnCloseWindow( wxCloseEvent& event )
{
    int answer = wxMessageBox("Quit program?", "Confirm", wxYES_NO | wxCANCEL, this);
    if (answer == wxYES)    
        Destroy();
}
/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
 */

void MyFrame::OnButtonClick( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MyFrame.
    // Before editing this code, remove the block markers.
    int id = event.GetId();
    if(id==ID_BUTTON)
    {
        wxMessageDialog dlg(this, "Button is clicked!");
        dlg.ShowModal();
    }
////@end wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in MyFrame. 
}