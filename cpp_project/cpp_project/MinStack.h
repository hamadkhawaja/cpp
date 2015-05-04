#pragma once
class MinStack
{
	StackArrayImplementation *stack;
	StackArrayImplementation *minStack;
public:
	MinStack(void);
	~MinStack(void);
	void push(int element);
	void pop();
	int min();
};

