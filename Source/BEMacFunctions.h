/*
 BEMacFunctions.h
 BaseElements Plug-In
 
 Copyright 2010-2012 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp
 
 http://www.goya.com.au/baseelements/plugin
 
 */


#if !defined(BEMACFUNCTIONS_H)
	#define BEMACFUNCTIONS_H

#include "BEPluginUtilities.h"

#include <string>


using namespace std;


WStringAutoPtr ClipboardFormats ( void );
StringAutoPtr ClipboardData ( WStringAutoPtr atype );
bool SetClipboardData ( StringAutoPtr data, WStringAutoPtr atype );

WStringAutoPtr SelectFile ( WStringAutoPtr prompt, WStringAutoPtr in_folder );
WStringAutoPtr SelectFolder ( WStringAutoPtr prompt, WStringAutoPtr in_folder );

int DisplayDialog ( WStringAutoPtr title, WStringAutoPtr message, WStringAutoPtr ok_button, WStringAutoPtr cancel_button, WStringAutoPtr alternate_button );


// user preferences

bool SetPreference ( WStringAutoPtr key, WStringAutoPtr value, WStringAutoPtr domain );
WStringAutoPtr GetPreference ( WStringAutoPtr key, WStringAutoPtr domain );


// other

bool OpenURL ( WStringAutoPtr url );
bool OpenFile ( WStringAutoPtr path );


#endif // BEMACFUNCTIONS_H
