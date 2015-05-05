#include "stdafx.h"

using namespace std;

void SumLists(ListNode *L1, ListNode *L2, ListNode **retList, int carry)
{
	if (L1 == nullptr && L2 == nullptr && carry == 0)
	{
		return;
	}

	int val = carry;
	if (L1)
	{
		val += L1->data;
	}
	
	if (L2)
	{
		val += L2->data;
	}

	int data = val % 10;
	SumLists(L1->next == nullptr ? nullptr : L1->next, 
		     L2->next == nullptr ? nullptr : L2->next, 
			 retList, val >=10 ? 1 : 0);
	InsertAtHead(retList, data);
}

void InsertAtHead(ListNode **head, int element) 
{
	ListNode *ptr = (struct ListNode*)malloc(sizeof(ListNode)); 
	ptr->data = element;
	if (*head == nullptr)
	{
		ptr->next = nullptr;
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
}

void PrintList(ListNode *head)
{
	cout << "Print list: ";
	ListNode *ptr = head;
	while (ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

void DeleteList(ListNode **head)
{
	ListNode *ptr = *head;
	while (ptr)
	{
		ListNode *delPtr = ptr;
		ptr = ptr->next;
		free(delPtr);
	}
}

ListNode *DetectStartOfLoop(ListNode *head)
{
	ListNode *slowPtr = head, *fastPtr = head;

	while (!fastPtr && fastPtr->next && fastPtr != slowPtr)
	{
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;
	}

	if (!fastPtr || !fastPtr->next)
	{
		return nullptr;
	}

	slowPtr = head;
	while (slowPtr != fastPtr)
	{
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next;
	}

	return fastPtr;
}

void ReverseListRecursive(ListNode **head) 
{
	if (*head == nullptr)
	{
		return;
	}

	ListNode *first = *head;
	ListNode *rest = first->next;
	if (rest == nullptr)
	{
		return;
	}
	ReverseListRecursive(&rest);
	first->next->next = first;
	first->next = nullptr; 
	*head = rest;
}

void ReverseListItterative(ListNode **head)
{
	if (*head == nullptr)
	{
		return;
	}

	ListNode *current = *head;
	ListNode *prev = nullptr;
	ListNode *next;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}