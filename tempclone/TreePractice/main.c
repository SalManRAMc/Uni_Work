#include "main.h"

/**
* main - tests code
*
* Return: 0 on success, 1 on failure
*/

int main(void)
{
	treenode *root = NULL;
	Queue q;
	int left1, right2, depth;

	root = insert_tnode(root, 5);
	insert_tnode(root, 45);
	insert_tnode(root, 25);
	insert_tnode(root, 7);
	insert_tnode(root, 3);
	insert_tnode(root, 105);

	left1 = ReturnMIN(root);
	right2 = ReturnMAX(root);
	depth = find_depth(root);



	printf("%d is largest number\n%d is smallest number\n", right2, left1);
	printf("depth of tree is %d\n", depth);
	/*Traverse_Breadth(root);*/

	printf("\n");
	Traverse_Breadth2(root);

	free_tree(root);
	return (0);
}
