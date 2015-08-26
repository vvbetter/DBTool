#pragma once
#include "stdafx.h"

class CDataBase
{
public:
	CDataBase();
	CDataBase(MYSQL* p);
	~CDataBase();
public:
	bool SetConnectInfo(const TCHAR* host,const UINT port,const TCHAR* user,const TCHAR* pwd);
	bool StartDataBase();
	bool StopDataBase();
	MYSQL *GetDataBasePoint();
private:
	MYSQL * pMysql;
};

