// MFCCalc.h : main header file for the MFCCALC application
//

#if !defined(AFX_MFCCALC_H__B3E01DF0_82F0_4DA2_AB4A_8CF58EE8948E__INCLUDED_)
#define AFX_MFCCALC_H__B3E01DF0_82F0_4DA2_AB4A_8CF58EE8948E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCCalcApp:
// See MFCCalc.cpp for the implementation of this class
//

class CMFCCalcApp : public CWinApp
{
public:
	CMFCCalcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCCalcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCCalcApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCALC_H__B3E01DF0_82F0_4DA2_AB4A_8CF58EE8948E__INCLUDED_)
