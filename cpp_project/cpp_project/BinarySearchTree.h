#pragma once

struct TreeNode {
	int element;
	TreeNode *left;
	TreeNode *right;
};

class BinarySearchTree
{
	TreeNode *root;
public:
	BinarySearchTree(void);
	~BinarySearchTree(void);
	void Insert(int element);
	void printInorder();

private:
	void Insert(TreeNode **root, int element);
	void printInorder(TreeNode *root);
};

