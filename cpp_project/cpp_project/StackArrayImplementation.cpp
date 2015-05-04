#include "StdAfx.h"


StackArrayImplementation::StackArrayImplementation(int stackSize)
{
	if (stackSize <= 0)
	{
		return;
	}

	stack = (int *)malloc(sizeof(int) * stackSize);
	size = stackSize;
	tos = -1;
}

StackArrayImplementation::~StackArrayImplementation(void)
{
	free(stack);
}

void StackArrayImplementation::Insert(int entry)
{
	stack[++tos] = entry;
}

int StackArrayImplementation::top()
{
	if (!IsEmpty())
	{
		return stack[tos];
	}
	else
	{
		return -1;
	}
}

void StackArrayImplementation::pop()
{
	tos--;
}

bool StackArrayImplementation::IsEmpty()
{
	return tos >= 0 ? false : true;
}