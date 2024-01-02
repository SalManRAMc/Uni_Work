#include "main.h"

/**
 * find_depth - calculates depth of tree
 *
 * @root: root of tree
 *
 * Return: depth value
*/

int find_depth(treenode *root)
{
	int leftdepth, rightdepth;

	leftdepth = rightdepth = 0;

	if (root == NULL)
		return (0);

	leftdepth = find_depth(root->left);
	rightdepth = find_depth(root->right);

	return ((leftdepth > rightdepth ? leftdepth : rightdepth) + 1);
}
