#include "StdAfx.h"

using namespace std;

LinkedList::LinkedList(void)
{
	head = nullptr;
}


LinkedList::~LinkedList(void)
{
	DeleteList();
}

void LinkedList::InsertAtHead(int element) 
{
	Node *ptr = (struct Node*)malloc(sizeof(Node)); 
	ptr->element = element;
	if (!head)
	{
		ptr->next = nullptr;
		head = ptr;
	}
	else
	{
		ptr->next = head;
		head = ptr;
	}
}

void LinkedList::DeleteList()
{
	Node *ptr = head;
	while (ptr)
	{
		Node *delPtr = ptr;
		ptr = ptr->next;
		free(delPtr);
	}
}

void LinkedList::PrintList()
{
	Node *ptr = head;
	while (ptr)
	{
		cout << ptr->element << " ";
		ptr = ptr->next;
	}
}

void LinkedList::PrintReverse()
{
	_PrintReverse(this->head);

}

void LinkedList::_PrintReverse(Node *ptr)
{
	if (!ptr->next)
	{
		cout << ptr->element << " ";
		return;
	}

	_PrintReverse(ptr->next);
	cout << ptr->element << " ";
}

void LinkedList::InsertSorted(int element)
{
	Node *ptr = (struct Node*)malloc(sizeof(Node)); 
	ptr->element = element;
	if (head == nullptr)
	{
		ptr->next = nullptr;
		head = ptr;
	}
	else if (element < head->element)
	{
		ptr->next = head;
		head = ptr;
	}

	Node *listPtr = head;
	while (listPtr->next && listPtr->next->element < element)
	{
		listPtr = listPtr->next;
	}

	Node *listPtrNext = listPtr->next; 
	listPtr->next = ptr;
	ptr->next = listPtrNext;

}

void LinkedList::DeleteDuplicates()
{
	unordered_set <int>seen;
	Node *ptr = head;
	seen.insert(ptr->element);
	while (ptr && ptr->next)
	{
		if (seen.count(ptr->next->element) > 0)
		{
			Node *tmpPtr = ptr->next;
			ptr->next = ptr->next->next;
			free(tmpPtr);
		}
		else
		{
			seen.insert(ptr->next->element);
		}
		ptr = ptr->next;
	}
}

int LinkedList::FindKthLastElement(int k)
{
	if (head == nullptr)
	{
		return -1;
	}

	Node *fastPtr = head;
	int count = 0;
	while (fastPtr && count < k)
	{
		fastPtr = fastPtr->next;
		count++;
	}

	if (count != count)
	{
		return -1;
	}

	Node *ptr = head;

	while (fastPtr) 
	{
		ptr = ptr->next;
		fastPtr = fastPtr->next;
	}

	return ptr->element;
}
