

struct Node {
	Node *next;
	int element;
};

class LinkedList
{
	Node *head;
public:
	LinkedList(void);
	~LinkedList(void);
	void InsertAtHead(int element);
	void InsertSorted(int element);
	void DeleteList();
	void PrintList();
	void PrintReverse();
	void DeleteDuplicates();
	Node *SumLists(Node *L1, Node *L2, int carry);
	int FindKthLastElement(int k);
	bool isPalindrome();
private:
	void _PrintReverse(Node *head);
};
