/////////////////////////////////////////////////////////////////////////////
// Name:        myframe.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     29/01/2017 16:53:55
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _MYFRAME_H_
#define _MYFRAME_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/toolbar.h"
#include "wx/splitter.h"
#include "wx/notebook.h"
#include "wx/treectrl.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_MYFRAME 10000
#define ID_MENUITEM 10020
#define ID_MENUITEM1 10021
#define ID_MENU 10002
#define ID_MENU1 10003
#define ID_MENU2 10004
#define ID_MENU3 10005
#define ID_TOOLBAR1 10012
#define ID_TOOL 10007
#define ID_TOOL1 10008
#define ID_TOOL2 10009
#define ID_TOOL3 10010
#define ID_TOOL4 10011
#define ID_SPLITTERWINDOW 10006
#define ID_SPLITTERWINDOW2 10019
#define ID_NOTEBOOK 10016
#define ID_PANEL 10022
#define ID_TREECTRL 10014
#define ID_PANEL1 10023
#define ID_PANEL2 10024
#define ID_PANEL5 10018
#define ID_LISTBOX 10001
#define ID_BUTTON 10025
#define ID_SPLITTERWINDOW1 10013
#define ID_PANEL3 10015
#define ID_PANEL4 10017
#define SYMBOL_MYFRAME_STYLE wxDEFAULT_FRAME_STYLE|wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxMINIMIZE_BOX|wxMAXIMIZE_BOX|wxCLOSE_BOX
#define SYMBOL_MYFRAME_TITLE _("MyFrame")
#define SYMBOL_MYFRAME_IDNAME ID_MYFRAME
#define SYMBOL_MYFRAME_SIZE wxSize(600, 800)
#define SYMBOL_MYFRAME_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * MyFrame class declaration
 */

class MyFrame: public wxFrame
{    
    DECLARE_CLASS( MyFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    MyFrame();
    MyFrame( wxWindow* parent, wxWindowID id = SYMBOL_MYFRAME_IDNAME, const wxString& caption = SYMBOL_MYFRAME_TITLE, const wxPoint& pos = SYMBOL_MYFRAME_POSITION, const wxSize& size = SYMBOL_MYFRAME_SIZE, long style = SYMBOL_MYFRAME_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_MYFRAME_IDNAME, const wxString& caption = SYMBOL_MYFRAME_TITLE, const wxPoint& pos = SYMBOL_MYFRAME_POSITION, const wxSize& size = SYMBOL_MYFRAME_SIZE, long style = SYMBOL_MYFRAME_STYLE );

    /// Destructor
    ~MyFrame();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin MyFrame event handler declarations

    /// wxEVT_CLOSE_WINDOW event handler for ID_MYFRAME
    void OnCloseWindow( wxCloseEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
    void OnButtonClick( wxCommandEvent& event );

    /// wxEVT_PAINT event handler for ID_PANEL3
    void OnPaint( wxPaintEvent& event );

////@end MyFrame event handler declarations

////@begin MyFrame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end MyFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin MyFrame member variables
////@end MyFrame member variables
};

#endif
    // _MYFRAME_H_
