#include "main.h"

/*
 *free_tree - frees tree
 * 
 * @root - tree root
 *
 * */
void free_tree(treenode* root) 
{
	if (root == NULL) 
	{
		return;
	}
	free_tree(root->left);
	free_tree(root->right);
	free(root);
}

