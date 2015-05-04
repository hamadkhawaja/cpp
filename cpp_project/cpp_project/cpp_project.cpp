// cpp_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	MinStack *stack = new MinStack();
	stack->push(5);
	stack->push(4);
	stack->push(5);
	stack->push(1);
	stack->push(1);

	cout << stack->min();
	stack->pop();
	cout << stack->min();
	stack->pop();
	cout << stack->min();
	stack->pop();
	cout << stack->min();
	stack->pop();
	cout << stack->min();
	stack->pop();

	char s[1024] = {};
	cin >> s;
	return 0;
}

