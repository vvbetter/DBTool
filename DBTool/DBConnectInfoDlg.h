#pragma once
#include "stdafx.h"
#include "Resource.h"

// CDBConnectInfoDlg �Ի���

class CDBConnectInfoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDBConnectInfoDlg)

public:
	CDBConnectInfoDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDBConnectInfoDlg();

// �Ի�������
	enum { IDD = IDD_CONDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedTestconnection();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
