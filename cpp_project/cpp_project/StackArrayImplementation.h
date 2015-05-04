#pragma once
class StackArrayImplementation
{
	int *stack;
	int size;
	int tos;
public:
	StackArrayImplementation(int stackSize);
	~StackArrayImplementation(void);
	void Insert(int entry);
	int top();
	void pop();
	bool IsEmpty();
};

