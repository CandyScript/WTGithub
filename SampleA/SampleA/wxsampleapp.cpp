/////////////////////////////////////////////////////////////////////////////
// Name:        wxsampleapp.cpp
// Purpose:     
// Author:      
// Modified by: 
// Created:     29/01/2017 16:53:21
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
////@end includes

#include "wxsampleapp.h"

////@begin XPM images

////@end XPM images
#include "myframe.h"

/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( WxsampleApp )
////@end implement app


/*
 * WxsampleApp type definition
 */

IMPLEMENT_CLASS( WxsampleApp, wxApp )


/*
 * WxsampleApp event table definition
 */

BEGIN_EVENT_TABLE( WxsampleApp, wxApp )

////@begin WxsampleApp event table entries
////@end WxsampleApp event table entries

END_EVENT_TABLE()


/*
 * Constructor for WxsampleApp
 */

WxsampleApp::WxsampleApp()
{
    Init();
}


/*
 * Member initialisation
 */

void WxsampleApp::Init()
{
////@begin WxsampleApp member initialisation
////@end WxsampleApp member initialisation
}

/*
 * Initialisation for WxsampleApp
 */

bool WxsampleApp::OnInit()
{    
////@begin WxsampleApp initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif
////@end WxsampleApp initialisation
    MyFrame * frame = new MyFrame(NULL);
    frame->Show();
    return true;
}


/*
 * Cleanup for WxsampleApp
 */

int WxsampleApp::OnExit()
{    
////@begin WxsampleApp cleanup
    return wxApp::OnExit();
////@end WxsampleApp cleanup
}

