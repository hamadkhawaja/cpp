#include "stdafx.h"

ArraysAndStrings::ArraysAndStrings(void)
{
}

ArraysAndStrings::~ArraysAndStrings(void)
{
}

bool ArraysAndStrings::isUniqueChar(char* str)
{
	if (strlen(str) > 128)
		return false;
	bool count[128] = {false};
	for (int x = 0; x < (int)strlen(str); str++)
	{
		if (!count[str[x]]) 
		{
			count[str[x]] = true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool ArraysAndStrings::isUniqueCharWithoutSpace(char* str)
{
	if (strlen(str) > 128)
		return false;
	int count = 0;
	for (int x = 0; x < (int)strlen(str); str++)
	{
		int val = str[x] - 'a';
		if ((count & 1 << val) > 0)
		{
			return false;
		}
		count |= 1 << val; 
	}
	return true;
}
