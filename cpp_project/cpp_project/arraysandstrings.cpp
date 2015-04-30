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

void ArraysAndStrings::reverseString(char *str)
{
	if (!str)
	{
		return;
	}
	char *endPtr = str;
	while (*endPtr)
	{
		endPtr++; 
	}
	endPtr--;
	char *startPtr = str;
	while (startPtr < endPtr)
	{
		char temp = *endPtr;
		*endPtr-- = *startPtr;
		*startPtr++ = temp;
	}
}

bool ArraysAndStrings::isPermutation(char *strA, char *strB)
{
	if (strlen(strA) != strlen(strB))
	{
		return false;
	}

	if (!strA)
	{
		return true;
	}

	int count[128] = {0};

	for (int i = 0; i < (int)strlen(strA); i++)
	{
		count[strA[i]]++;
	}
	
	for (int i = 0; i < (int)strlen(strB); i++ )
	{
		if (count[strB[i]]-- < 0)
			return false;
	}

	return true;
}

void ArraysAndStrings::replaceSpaces(char *str)
{
	int count = 0;
	for (int x = 0; x < (int)strlen(str); x++)
	{
		if (str[x] == ' ')
		{
			count++;
		}
	}

	int len = strlen(str) + 2 * count;
	for (int end = strlen(str); end >= 0; end--)
	{
		if (str[end] == ' ')
		{
			str[len--] = '0';
			str[len--] = '2';
			str[len--] = '%';
		}
		else
		{
			str[len--] = str[end];
		}
	}
}

