// DBConnectInfoDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DBTool.h"
#include "DBConnectInfoDlg.h"
#include "afxdialogex.h"


// CDBConnectInfoDlg �Ի���

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


// CDBConnectInfoDlg ��Ϣ�������



void CDBConnectInfoDlg::OnBnClickedTestconnection()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDBConnectInfoDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CDBConnectInfoDlg::OnBnClickedCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
