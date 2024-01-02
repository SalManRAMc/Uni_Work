#include "main.h"

/**
 *insert_tnode - inserts a treenode in a binary search tree
 *
 * @treeroot: root of tree
 * @inserted_data: data to insert
 *
 * Return: pointer to new node
 */

treenode *insert_tnode(treenode *treeroot, int inserted_data)
{
	treenode *navigator = treeroot;

	if (navigator == NULL)
	{
		navigator = (treenode *)malloc(sizeof(treenode));
		if (navigator == NULL)
		{
			exit(98);
		}
		else
		{
		navigator->data = inserted_data;
		navigator->right = NULL;
		navigator->left = NULL;
		return (navigator);
		}
	}

	if (inserted_data > navigator->data)
	{
		navigator->right = insert_tnode(navigator->right, inserted_data);
	}
	else if (inserted_data < navigator->data)
	{
		navigator->left = insert_tnode(navigator->left, inserted_data);
	}
	else
	{
		printf("This number already exists in the tree");
		return (NULL);
	}
	return (navigator);
}

/**
 * newNode - create a new node with given data
 *
 * @address: address of treenode stored in linked list
 *
 * Return: Return a pointer to new node
 */

Node *newNode(treenode *address)
{
	Node *node = (Node *)malloc(sizeof(node));

	node->address = address;
	node->next = NULL;
	return (node);
}
