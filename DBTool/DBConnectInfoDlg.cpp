// DBConnectInfoDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DBTool.h"
#include "DBConnectInfoDlg.h"
#include "afxdialogex.h"
#include "DataBase.h"


// CDBConnectInfoDlg �Ի���

IMPLEMENT_DYNAMIC(CDBConnectInfoDlg, CDialogEx)

CDBConnectInfoDlg::CDBConnectInfoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDBConnectInfoDlg::IDD, pParent)
	, szIP(_T(""))
	, szPwd(_T(""))
	, m_uPort(0)
	, szUname(_T(""))
{

}

CDBConnectInfoDlg::~CDBConnectInfoDlg()
{
}

void CDBConnectInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_IP, szIP);
	DDV_MaxChars(pDX, szIP, 20);
	DDX_Text(pDX, IDC_EDIT_PASSWD, szPwd);
	DDV_MaxChars(pDX, szPwd, 20);
	DDX_Text(pDX, IDC_EDIT_PORT, m_uPort);
	DDX_Text(pDX, IDC_EDIT_UNAME, szUname);
	DDV_MaxChars(pDX, szUname, 20);
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
	UpdateData(TRUE);
	CDataBase m_testdb;
	m_testdb.SetConnectInfo(szIP, m_uPort, szUname, szPwd);
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
