#ifndef _DEFINE_H
#define _DEFINE_H

#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;


int StrToInt(char * string);/*字符转整数程序，不完整，没有考虑边界条件和异常输出等等*/
int feibona(int c);/*斐波那递归实现*/
int feibo(int c);/*斐波那循环实现*/
class CMyString哈哈
{
public:
	CMyString(const char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);
	void Print() { cout << m_pData; }
	CMyString& operator =(const CMyString &str);
private:
	char* m_pData;
};
CMyString::CMyString(const char *pData)

{

	if (pData ==nullptr)

	{

		m_pData = new char[1];

		m_pData[0] = '\0';

	}

	else

	{

		int length = strlen(pData);

		m_pData = new char[length + 1];

		strcpy_s(m_pData,20, pData);

	}

}



CMyString::CMyString(const CMyString &str)

{

	int length = strlen(str.m_pData);

	m_pData = new char[length + 1];

	strcpy_s(m_pData, 20,str.m_pData);

}



CMyString::~CMyString()

{

	delete[] m_pData;

}
CMyString& CMyString::operator =(const CMyString &str)
{
	if (this == &str)
		return *this;
	delete[]m_pData;
	m_pData = nullptr;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy_s(m_pData,20, str.m_pData);
	return *this;
}




/*字符转整数程序，不完整，没有考虑边界条件和异常输出等等*/
int StrToInt(char * string)
{
	int number = 0;
	while (*string != 0)
	{
		number = number * 10 + *string - '0';
		++string;
	}

	return number;
};


/*斐波那数列，用递归实现*/
int feibona(int c)
{
	int sum = 0;
	if (c > 1)
	{
		sum = feibona(c - 1) + feibona(c - 2);
		return sum;
	}
	else
		return c;

};


/*斐波那数列，用循环实现*/
int feibo(int i)
{
	int sum = 0;
	int a = 0, b = 1, c = 1;
	while (i > 0)
	{
		c = a + b;
		a = b;
		b = c;
		i--;

	}
	return b;
};
#endif // !_DEFINE_H
