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
END_MESSAGE_MAP()


// CDBConnectInfoDlg 消息处理程序
