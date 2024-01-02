#include "main.h"

/**
 * ReturnMAX - Returns biggest number in Tree
 *
 * @root: root of tree
 *
 * Return: Biggest number in Tree
 */

int ReturnMAX(treenode *root)
{
	treenode *finder = root;

	if (finder == NULL)
	{
		return (-1);
	}

	if (finder->right == NULL)
	{
		return (root->data);
	}
	return (ReturnMAX(finder->right));
}

int ReturnMIN(treenode *root)
{
	treenode *finder = root;

	if (finder == NULL)
	{
		return (-1);
	}
	finder = root;

	if (finder->left == NULL)
	{
		return (root->data);
	}
	return (ReturnMIN(finder->left));
}
