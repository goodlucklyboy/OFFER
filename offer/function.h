#pragma once
#include "define.h"
void swap(int &a, int &b);
void swap(int &a, int &b)
{
	int i = 0;
	i = a;
	a = b;
	b = i;

};
