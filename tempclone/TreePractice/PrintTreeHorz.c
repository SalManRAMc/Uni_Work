#include "main.h"

/**
 * print_horizontal - prints tree from horizontal view
 * @root: root of tree
 * Return: 0 on success, 1 on failure
*/

int print_horizontal(treenode *root)
{
treenode *navigator = root;

if (navigator == NULL)
{
return (1);
}

print_horizontal(navigator->right);
printf("%d\n", navigator->data);
print_horizontal(navigator->left);
return (0);
}
