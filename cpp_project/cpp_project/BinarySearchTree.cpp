#include "StdAfx.h"

using namespace std;

BinarySearchTree::BinarySearchTree(void)
{
	root = nullptr;
}


BinarySearchTree::~BinarySearchTree(void)
{
}

void BinarySearchTree::Insert(TreeNode **root, int element)
{
	if (*root == nullptr)
	{
		TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
		node->element = element;
		node->left = nullptr;
		node->right = nullptr;
		*root = node;
		return;
	}

	TreeNode *temp = *root;
	if (temp->element > element) 
	{
		Insert(&temp->left, element);

	}
	else
	{
		Insert(&temp->right, element);
	}

}

void BinarySearchTree::Insert(int element)
{
	Insert(&root, element);
}

void BinarySearchTree::printInorder(TreeNode *root)
{
	if (!root)
	{
		return;
	}

	printInorder(root->left);
	cout << root->element;
	printInorder(root->right);
}

void BinarySearchTree::printInorder()
{
	printInorder(root);
}