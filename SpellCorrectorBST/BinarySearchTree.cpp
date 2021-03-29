#include<iostream>
#include<string>
using namespace std;
#include "BinarySearchTree.h"



BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}


void BinarySearchTree::insert(string value) {
	TreeNode *n = new TreeNode(value);
	TreeNode *p, *q;
	q = NULL;
	p = root;
	while (p != NULL) {
		q = p;
		if (n->key.compare(p->key) == -1 ) {
			p = p->left;
		}
		else if(n->key.compare(p->key) == 1)
			p = p->right;
	}

	if (q == NULL)
		root = n;
	else if (n->key.compare(q->key) == -1)
		q->left = n;
	else if(n->key.compare(q->key) == 1)
		q->right = n;
}

bool BinarySearchTree::search(string value) {
	TreeNode* p;
	p = root;
	bool found = false;

	while (p != NULL) {
		if (p->key.compare(value) == 1) {
			p = p->left;
		}
		else if (p->key.compare(value) == -1) {
			p = p->right;
		}
		else {
			found = true;
			break;
		}
	}
	return found;
}

void BinarySearchTree::printInorder(TreeNode* tmp ) {
	if (tmp != NULL) {
		printInorder(tmp->left);
		cout << tmp->key<<" ";
		printInorder(tmp->right);
	}
}



