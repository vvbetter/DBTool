#include "stdafx.h"
#include "DataBase.h"


CDataBase::CDataBase()
{
	pMysql = NULL;
	memset(szException, 0, sizeof(szException));
	memset(szHost, 0, sizeof(szHost));
	memset(szUname, 0, sizeof(szUname));
	memset(szPwd, 0, sizeof(szPwd));
	port = 0;
}

CDataBase::CDataBase(MYSQL * p)
{
	ASSERT(p != NULL);
	pMysql = p;
}


CDataBase::~CDataBase()
{
	StopDataBase();
}

bool CDataBase::SetConnectInfo(const CHAR * host, const UINT nport, const CHAR * user, const CHAR * pwd)
{
	strcpy_s(szHost, host);
	strcpy_s(szUname, user);
	strcpy_s(szPwd, pwd);
	port = nport;
	return true;
}

bool CDataBase::StartDataBase()
{
	try 
	{
		int ret = mysql_server_init(0, NULL, NULL);
		if (ret != 0)
		{
			return false;
		}
		pMysql = mysql_init(NULL);
		if (pMysql == NULL)
		{
			return false;
		}
		if (mysql_real_connect(pMysql, szHost, szUname, szPwd, NULL, port, NULL, 0) == NULL)
		{
			return false;
		}
	}
	catch(...)
	{
		strcpy_s(szException, mysql_error(pMysql));
		CString strErrormsg;
		strErrormsg.Format(L"%s", szException);
		AfxMessageBox(strErrormsg);
	}

	return true;
}

bool CDataBase::StopDataBase()
{

	mysql_server_end();
	return true;
}

MYSQL * CDataBase::GetDataBasePoint()
{
	return pMysql;
}
