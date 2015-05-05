// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ListNode *list = nullptr;
	InsertAtHead(&list, 1);
	InsertAtHead(&list, 2);
	InsertAtHead(&list, 3);
	InsertAtHead(&list, 4);
	InsertAtHead(&list, 5);
	PrintList(list);
	cout << "\n";
	ReverseListRecursive(&list);
	PrintList(list);
	ReverseListItterative(&list);
	PrintList(list);
	char s[1024] = {};
	cin >> s;
	return 0;
}

