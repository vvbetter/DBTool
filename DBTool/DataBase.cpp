#include "stdafx.h"
#include "DataBase.h"


CDataBase::CDataBase()
{
}

CDataBase::CDataBase(MYSQL * p)
{
	ASSERT(p != NULL);
	pMysql = p;
}


CDataBase::~CDataBase()
{
}

bool CDataBase::SetConnectInfo(const TCHAR * host, const UINT port, const TCHAR * user, const TCHAR * pwd)
{
	ASSERT(pMysql != NULL);
	if (pMysql == NULL) return false;
	mysql_real_connect(pMysql, host, user, pwd, NULL, port, NULL, 0);
	return false;
}

bool CDataBase::StartDataBase()
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
	return false;
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
