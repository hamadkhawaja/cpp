// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	LinkedList *list = new LinkedList();
	list->InsertSorted(5);
	list->InsertSorted(4);
	list->InsertSorted(3);
	list->InsertSorted(2);
	list->InsertSorted(1);
	list->PrintList();
	cout << "\nReverse List: ";
	list->PrintReverse();
	delete list;
	char s[1024] = {};
	cin >> s;
	return 0;
}

