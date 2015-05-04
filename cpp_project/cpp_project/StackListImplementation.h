#pragma once

struct StackNode{
	StackNode *next;
	int data;
};

class StackListImplementation
{
	StackNode *stack;
public:
	StackListImplementation(void);
	~StackListImplementation(void);
	void insert(int element);
	int pop();
	int top();
	bool isEmpty();
	void deleteStack();
};

