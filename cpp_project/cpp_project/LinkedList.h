

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
private:
	void _PrintReverse(Node *head);
};
