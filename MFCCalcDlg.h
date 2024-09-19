// MFCCalcDlg.h : header file
//

#if !defined(AFX_MFCCALCDLG_H__1596A460_01BC_4B7A_97AA_CE979E376F70__INCLUDED_)
#define AFX_MFCCALCDLG_H__1596A460_01BC_4B7A_97AA_CE979E376F70__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCCalcDlg dialog

class CMFCCalcDlg : public CDialog
{
// Construction
public:
	CMFCCalcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCCalcDlg)
	enum { IDD = IDD_MFCCALC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCCalcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	
	// Generated message map functions
	//{{AFX_MSG(CMFCCalcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnButton4();
	afx_msg void OnBtn1();
	afx_msg void OnBtn2();
	afx_msg void OnBtn3();
	afx_msg void OnBtn4();
	afx_msg void OnBtn5();
	afx_msg void OnBtn6();
	afx_msg void OnBtn7();
	afx_msg void OnBtn8();
	afx_msg void OnBtn9();
	afx_msg void OnBtn0();
	afx_msg void OnBtnClear();
	afx_msg void OnBtnBack();
	afx_msg void OnBtnAdd();
	afx_msg void OnBtnJian();
	afx_msg void OnBtnMul();
	afx_msg void OnBtnChu();
	afx_msg void OnBtnEqual();
	//afx_msg void OnBtnDot();
	afx_msg void OnBtnLeft();
	afx_msg void OnBtnRight();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCALCDLG_H__1596A460_01BC_4B7A_97AA_CE979E376F70__INCLUDED_)
