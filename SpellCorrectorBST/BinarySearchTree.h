#ifndef BinarySearchTree_H
#define BinarySearchTree_H
#pragma once
#include "TreeNode.h"
class BinarySearchTree
{

public:
	TreeNode *root;
	BinarySearchTree();
	void insert(string value);
	bool search(string value);
	void printInorder(TreeNode *tnode);
};

#endif