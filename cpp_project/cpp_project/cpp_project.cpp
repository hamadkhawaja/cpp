// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ArraysAndStrings *runner = new ArraysAndStrings();
	char str[] = "abcddefgh";
	runner->isUniqueCharWithoutSpace(str) ? cout << "Unique string\n" : cout << "String has duplicates\n" ;
	delete runner;
	char input[1024] = {};
	cin >> input;
	return 0;
}

