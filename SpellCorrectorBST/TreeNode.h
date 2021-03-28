#ifndef TreeNode_H
#define TreeNode_H
#pragma once
class TreeNode
{
public:
	string key;
	TreeNode *left;
	TreeNode *right;
	TreeNode *parent;
	TreeNode();
	TreeNode(string value);
};

#endif