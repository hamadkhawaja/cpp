// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ArraysAndStrings *runner = new ArraysAndStrings();
	char str[] = "abcdefgh";
	runner->isPermutation("abcdef", "dabdcfe") ? cout << "Permutation\n" : cout << "not permutation\n" ;
	delete runner;
	char input[1024] = {"Mr John  Smith   "};
	runner->replaceSpaces(input);
	cout << input;
	char s[1024] = {};
	cin >> s;
	return 0;
}

