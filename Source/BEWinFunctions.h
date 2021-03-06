/*
 BEWinFunctions.h
 BaseElements Plug-in

 Copyright 2010-2012 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp
 
 http://www.goya.com.au/baseelements/plugin

 */


#if !defined(BEWINFUNCTIONS_H)  		// Only include once.
	#define BEWINFUNCTIONS_H

#include "BEPluginUtilities.h"
#include "BEPluginGlobalDefines.h"

#include <string>

using namespace std;

WStringAutoPtr ClipboardFormats ( void );
StringAutoPtr ClipboardData ( WStringAutoPtr atype );
bool SetClipboardData ( StringAutoPtr data, WStringAutoPtr atype );

WStringAutoPtr SelectFile ( WStringAutoPtr prompt, WStringAutoPtr in_folder );
WStringAutoPtr SelectFolder ( WStringAutoPtr prompt, WStringAutoPtr in_folder );

int DisplayDialog ( WStringAutoPtr title, WStringAutoPtr message, WStringAutoPtr button1, WStringAutoPtr button2, WStringAutoPtr button3 );

// user preferences

bool SetPreference ( WStringAutoPtr key, WStringAutoPtr value, WStringAutoPtr domain );
WStringAutoPtr GetPreference ( WStringAutoPtr key, WStringAutoPtr domain );


// other

bool OpenURL ( WStringAutoPtr url );
bool OpenFile ( WStringAutoPtr file );

// utilities

wstring utf8toutf16 ( const string& instr );
string utf16ToUTF8 ( const wstring& s );
//string test ( string x ) { return x; }

#endif // BEWINFUNCTIONS_H
