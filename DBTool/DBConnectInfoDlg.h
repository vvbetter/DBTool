#pragma once
#include "stdafx.h"
#include "Resource.h"

// CDBConnectInfoDlg 对话框

class CDBConnectInfoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDBConnectInfoDlg)

public:
	CDBConnectInfoDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDBConnectInfoDlg();

// 对话框数据
	enum { IDD = IDD_CONDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedTestconnection();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
