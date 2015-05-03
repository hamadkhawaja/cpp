struct ListNode {
	ListNode *next;
	int data;
};


void SumLists(ListNode *L1, ListNode *L2, ListNode **retList, int carry);

void InsertAtHead(ListNode **head, int element);
void PrintList(ListNode *head);
void DeleteList(ListNode **head);
ListNode *DetectStartOfLoop(ListNode *head);