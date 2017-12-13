#include "binarytree.h"

binaryTree::binaryTree()
{
	root = nullptr;
}

binaryTree::binaryTree(int value)
{
	root = new node;
	root->key_value = value;
	root->left = nullptr;
	root->right = nullptr;
}




void binaryTree::checkLeaf(int value, node * current)
{
	
	if (current == nullptr)
	{
		//make a new node and point the head to it
		node* StoredNode = new node;
		StoredNode->assignedInt = assignedIntCounter;
		assignedIntCounter++;
		StoredNode->key_value = value;
		current = StoredNode;
	}
	else
	{
		if (value < current->key_value)
		{
			
			if (current->left == nullptr)
			{
				node* StoredNode = new node;
				StoredNode->key_value = value;
				current->left = StoredNode;
			}
			else
			{
				
				checkLeaf(value, current->left);
			}
			
		}
		else
		{
			if (current->right == nullptr)
			{
				node* StoredNode = new node;
				StoredNode->key_value = value;
				current->right = StoredNode;
			}
			else
			{
				//down the rabiit hole
				checkLeaf(value, current->right);
			}
		}
	}
}

void binaryTree::add(int value)
{
	node* current = root;

	checkLeaf(value, current);

}

int binaryTree::max(node * current)
{

	if (current->right == nullptr)
	{
		return current->key_value;
	}
	else
	{
		current = current->right;
	}
}

int binaryTree::min(node * current)
{
	if (current->left == nullptr)
	{
		return current->key_value;
	}
	else
	{
		current = current->left;
	}
}

void binaryTree::iterate(int value, node * current)
{
	if (current->key_value == value)
	{
		
	}

}

void binaryTree::destroy(node * leaf)
{
	destroy(leaf->left);
	destroy(leaf->right);
	delete leaf;
}

binaryTree::~binaryTree()
{
	destroy(root);
}


