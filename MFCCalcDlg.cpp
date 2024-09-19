// MFCCalcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCCalc.h"
#include "MFCCalcDlg.h"

#include "compute.h"
//#include "atlstr.h"
//#include <string>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCCalcDlg dialog

CMFCCalcDlg::CMFCCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCCalcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMFCCalcDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMFCCalcDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMFCCalcDlg, CDialog)
	//{{AFX_MSG_MAP(CMFCCalcDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_1, OnBtn1)
	ON_BN_CLICKED(IDC_BTN_2, OnBtn2)
	ON_BN_CLICKED(IDC_BTN_3, OnBtn3)
	ON_BN_CLICKED(IDC_BTN_4, OnBtn4)
	ON_BN_CLICKED(IDC_BTN_5, OnBtn5)
	ON_BN_CLICKED(IDC_BTN_6, OnBtn6)
	ON_BN_CLICKED(IDC_BTN_7, OnBtn7)
	ON_BN_CLICKED(IDC_BTN_8, OnBtn8)
	ON_BN_CLICKED(IDC_BTN_9, OnBtn9)
	ON_BN_CLICKED(IDC_BTN_0, OnBtn0)
	ON_BN_CLICKED(IDC_BTN_CLEAR, OnBtnClear)
	ON_BN_CLICKED(IDC_BTN_BACK, OnBtnBack)
	ON_BN_CLICKED(IDC_BTN_ADD, OnBtnAdd)
	ON_BN_CLICKED(IDC_BTN_JIAN, OnBtnJian)
	ON_BN_CLICKED(IDC_BTN_MUL, OnBtnMul)
	ON_BN_CLICKED(IDC_BTN_CHU, OnBtnChu)
	ON_BN_CLICKED(IDC_BTN_EQUAL, OnBtnEqual)
	//ON_BN_CLICKED(IDC_BTN_DOT, OnBtnDot)
	ON_BN_CLICKED(IDC_BTN_LEFT, OnBtnLeft)
	ON_BN_CLICKED(IDC_BTN_RIGHT, OnBtnRight)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCCalcDlg message handlers

BOOL CMFCCalcDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	SetDlgItemText(IDC_STATIC_RESULT,"0");
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCCalcDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCCalcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMFCCalcDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	//CDialog::OnOK();
}

CString m_strResult;
CString m_strShow;


void CMFCCalcDlg::OnBtn1() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"1";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn2() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"2";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn3() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"3";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn4() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"4";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn5() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"5";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn6() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"6";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn7() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"7";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn8() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"8";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn9() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"9";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtn0() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"0";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtnClear() 
{
	// TODO: Add your control notification handler code here
	m_strResult.Empty();
	m_strShow.Empty();
	
	SetDlgItemText(IDC_STATIC_RESULT,"0");
	SetDlgItemText(IDC_STATIC_SHOW,"0");
}

void CMFCCalcDlg::OnBtnBack() 
{
	// TODO: Add your control notification handler code here
	if(m_strResult.IsEmpty())
	{
		SetDlgItemText(IDC_STATIC_SHOW,"0");
	}
	else if(m_strResult.GetLength()==1)
	{
		m_strResult=m_strResult.Left(m_strResult.GetLength()-1);
		SetDlgItemText(IDC_STATIC_SHOW,"0");
	}
	else
	{
		m_strResult=m_strResult.Left(m_strResult.GetLength()-1);
		SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
	}

	

}

void CMFCCalcDlg::OnBtnAdd() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"+";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
	
}

void CMFCCalcDlg::OnBtnJian() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"-";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtnMul() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"*";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtnChu() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"/";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}



//void CMFCCalcDlg::OnBtnDot() 
//{
	// TODO: Add your control notification handler code here
	//m_strResult += L".";
//	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
//}

void CMFCCalcDlg::OnBtnLeft() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L"(";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtnRight() 
{
	// TODO: Add your control notification handler code here
	m_strResult += L")";
	SetDlgItemText(IDC_STATIC_SHOW,m_strResult);
}

void CMFCCalcDlg::OnBtnEqual() 
{
	
	//string str = CT2A(m_strResult.GetString());
	//string str=CW2A(m_strResult.GetString());
	//CT2A xx(m_strResult);
	//std::string str=xx.m_psz;
	m_strResult += L"=";
	string str;	
	str=(LPCTSTR)m_strResult;
	Compute c(str);
	int res=c.Result();
	CString re;
	re.Format("%d",res);
	SetDlgItemText(IDC_STATIC_RESULT,re);
	m_strResult.Empty();
}
