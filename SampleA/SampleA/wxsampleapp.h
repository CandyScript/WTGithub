/////////////////////////////////////////////////////////////////////////////
// Name:        wxsampleapp.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     29/01/2017 16:53:21
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _WXSAMPLEAPP_H_
#define _WXSAMPLEAPP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
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
////@end control identifiers

/*!
 * WxsampleApp class declaration
 */

class WxsampleApp: public wxApp
{    
    DECLARE_CLASS( WxsampleApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    WxsampleApp();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin WxsampleApp event handler declarations
////@end WxsampleApp event handler declarations

////@begin WxsampleApp member function declarations
////@end WxsampleApp member function declarations

////@begin WxsampleApp member variables
////@end WxsampleApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(WxsampleApp)
////@end declare app

#endif
    // _WXSAMPLEAPP_H_
