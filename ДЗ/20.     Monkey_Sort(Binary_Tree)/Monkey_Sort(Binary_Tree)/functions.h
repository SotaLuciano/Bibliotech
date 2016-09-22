#pragma once
struct TreeItem
{
int key;
TreeItem *parent, *left, *right;
};

void Insert(TreeItem*&,const int);
void PrintFromNode(const TreeItem *);
void DelTree(TreeItem* root);