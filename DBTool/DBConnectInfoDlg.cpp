// DBConnectInfoDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "DBTool.h"
#include "DBConnectInfoDlg.h"
#include "afxdialogex.h"


// CDBConnectInfoDlg 对话框

IMPLEMENT_DYNAMIC(CDBConnectInfoDlg, CDialogEx)

CDBConnectInfoDlg::CDBConnectInfoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDBConnectInfoDlg::IDD, pParent)
{

}

CDBConnectInfoDlg::~CDBConnectInfoDlg()
{
}

void CDBConnectInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDBConnectInfoDlg, CDialogEx)

	ON_BN_CLICKED(IDC_TESTCONNECTION, &CDBConnectInfoDlg::OnBnClickedTestconnection)
	ON_BN_CLICKED(IDOK, &CDBConnectInfoDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDBConnectInfoDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CDBConnectInfoDlg 消息处理程序



void CDBConnectInfoDlg::OnBnClickedTestconnection()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CDBConnectInfoDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CDBConnectInfoDlg::OnBnClickedCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
