// TestError.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

class ExceptionClass
{
public:
	ExceptionClass(const char* name = "Exception Default Class")
	{
		cout << "Exception Class Construct String" << endl;
	}
	~ExceptionClass()
	{
		cout << "Exception Class Destruct String" << endl;
	}
	void ReportError()
	{
		cout << "Exception Class:: This is Report Error Message" << endl;
	}
};


class ArguClass
{
	char* name;
public:
	ArguClass(char* name = "default name")
	{
		cout << "Construct String::" << name << endl;
		this->name = name;
	}
	~ArguClass()
	{
		cout << "Destruct String::" << name << endl;
	}
	void mythrow()
	{
		throw ExceptionClass();
	}
};

int main()
{
	ArguClass e("haha");
	try
	{
		e.mythrow();
	}
	catch (int)
	{
		cout << "If This is Message display screen, This is a Error!!" << endl;  //���в���ִ��
	}
	catch (ExceptionClass pTest)
	{
		pTest.ReportError();
	}
	catch (...)
	{
		cout << "***************" << endl;
	}
	system("pause");
    return 0;
}

