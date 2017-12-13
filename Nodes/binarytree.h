#pragma once

struct node
{
	int assignedInt;
	int key_value;
	node* left = nullptr;
	node* right = nullptr;
};

struct nodeIterater
{

};

class binaryTree
{
public:
	binaryTree();
	binaryTree(int value);
	~binaryTree();

	//void checkLeaf(int value);
	void checkLeaf(int value, node * current);
	
	void add(int value);
	node *search(int key);
	void insert(int key);
	int max(node * current);
	int min(node * current);
	void iterate(int value, node * current);
	
	//Search
	//
private:
	node* root;
	void destroy(node* leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);
	int assignedIntCounter;
	//node* current;
	



};

