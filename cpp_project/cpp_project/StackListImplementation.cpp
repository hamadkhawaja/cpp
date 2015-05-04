#include "StdAfx.h"

StackListImplementation::StackListImplementation(void)
{
	stack = nullptr;
}


StackListImplementation::~StackListImplementation(void)
{
	deleteStack();
}

void StackListImplementation::insert(int element)
{
	StackNode *node = (struct StackNode*)malloc(sizeof(ListNode));
	if (stack == nullptr)
	{
		node->next = nullptr;
		node->data = element;
		stack = node;
	}
	else
	{
		node->next = stack;
		node->data = element;
		stack = node;
	}
}

void StackListImplementation::deleteStack()
{
	StackNode *previous = stack;
	while (stack)
	{
		stack = stack->next;
		free(previous);
		previous = stack;
	}
}

int StackListImplementation::pop()
{
	int retVal = -1;
	if (stack)
	{
		StackNode *node = stack;
		retVal = stack->data;
		stack = stack->next;
		free(node);
	}
	return retVal;
}

int StackListImplementation::top()
{
	return stack ? stack->data : -1;
}

bool StackListImplementation::isEmpty()
{
	return stack ? false : true;
}