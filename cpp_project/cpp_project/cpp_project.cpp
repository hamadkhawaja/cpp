// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ListNode *L1 = nullptr, *L2 = nullptr, *result = nullptr;
	InsertAtHead(&L1, 6);
	InsertAtHead(&L1, 1);
	InsertAtHead(&L1, 7);
	PrintList(L1);

	InsertAtHead(&L2, 2);
	InsertAtHead(&L2, 9);
	InsertAtHead(&L2, 5);
	PrintList(L2);

	SumLists(L1, L2, &result, 0);
	PrintList(result);
	DeleteList(&result);
	DeleteList(&L1);
	DeleteList(&L2);

	char s[1024] = {};
	cin >> s;
	return 0;
}

