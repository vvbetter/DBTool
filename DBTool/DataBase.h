#pragma once
#include "stdafx.h"

class CDataBase
{
public:
	CDataBase();
	CDataBase(MYSQL* p);
	~CDataBase();
public:
	bool SetConnectInfo(const CHAR* host,const UINT port,const CHAR* user,const CHAR* pwd);
	bool StartDataBase();
	bool StopDataBase();
	MYSQL *GetDataBasePoint();
private:
	MYSQL * pMysql;
	char szException[1000];
	char szHost[50];
	char szUname[50];
	char szPwd[50];
	int port;
};

