#include "functions.h"
#include <iostream>
using namespace std;

#pragma region Functions
void Insert(TreeItem*&root,const int key)
{
	TreeItem *x = new TreeItem;
	x->key = key;
	x->left = x->right = 0;
	TreeItem *y = root, *node = root;
	while(node)
	{
	y=node;
	if(x->key<node->key)
		node=node->left;
	else node=node->right;
	}
	x->parent = y;
	if(!y)
		root = x;
	else if(x->key < y->key)
		y->left=x;
	else y->right = x;
}
void PrintFromNode(const TreeItem* node)
{
if(node)
{
	PrintFromNode(node->left);
	cout << node->key << endl;
	PrintFromNode(node->right);
}
}
void DelTree(TreeItem* root) 
 
{
  if ( root->left) DelTree( root->left);
  if ( root->right) DelTree( root->right);
  delete root;
}
//By Nazar
#pragma endregion