
// DBToolDlg.h : ͷ�ļ�
//

#pragma once
#include "stdafx.h"
#include "DataBase.h"

// CDBToolDlg �Ի���
class CDBToolDlg : public CDialogEx
{
// ����
public:
	CDBToolDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DBTOOL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedConDlg();
public:
	CDataBase m_db;
};
