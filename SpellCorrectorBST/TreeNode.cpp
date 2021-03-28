#include<iostream>
#include<string>
using namespace std;
#include "TreeNode.h"



TreeNode::TreeNode()
{
	left = NULL;
	right = NULL;
	parent = NULL;
}

TreeNode::TreeNode(string value) {
	key = value;
	left = NULL;
	right = NULL;
	parent = NULL;
}
