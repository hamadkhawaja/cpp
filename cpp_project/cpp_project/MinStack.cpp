#include "StdAfx.h"



MinStack::MinStack(void)
{
	stack = new StackArrayImplementation(100);
	minStack = new StackArrayImplementation(100);
}


MinStack::~MinStack(void)
{
	delete stack;
	delete minStack;
}

void MinStack::push(int element)
{
	if (minStack->IsEmpty())
	{
		minStack->Insert(element);
	}
	else
	{
		element < minStack->top() ? minStack->Insert(element) : minStack->Insert(minStack->top());
	}
	stack->Insert(element);
}

void MinStack::pop()
{
	if (!stack->IsEmpty())
	{
		stack->pop();
		minStack->pop();
	}
}

int MinStack::min()
{
	return minStack->top();
}