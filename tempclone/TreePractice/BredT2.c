#include "main.h"
/**
 * Traverse_Breadth2 - same function with more features.
 * 
 * @root: root of tree
*/

void Traverse_Breadth2(treenode *root)
{
	if (root == NULL)
	{
		return;
	}

	int treeHeight = find_depth(root);
	int nodesInLevel, nodesInNextLevel, spaces;
	Queue *q = createQueue();
	treenode *current;

	enqueue(q, root);

	for (int level = 1; level <= treeHeight; level++)
	{
		nodesInLevel = 1 << (level - 1);
		nodesInNextLevel = nodesInLevel;
		spaces = (1 << (treeHeight - level + 1) - 1);

		printSpaces(spaces);

		for (int i = 0; i < nodesInLevel; i++)
		{
			current = dequeue(q);

			if (current != NULL)
			{
				printf("%d", current->data);
				enqueue(q, current->left);
				enqueue(q, current->right);
			}
			else
			{
				printf(" ");
				enqueue(q, NULL);
				enqueue(q, NULL);
			}

			if (i < nodesInLevel - 1) {
				printSpaces(treeHeight - level + 1);
			}
		}
	
		printf("\n");

	for (int i = 0; i < nodesInNextLevel; i++)
	{
		printSpaces(spaces - 2);

		if (current == NULL)
		{
			printSpaces(treeHeight - level);
			continue;
		}

		if (current->left == NULL && current->right == NULL)
		{
			continue;
		}
		else if (current->left != NULL && current->right == NULL)
		{
			printSpaces(treeHeight - level);
			putchar('/');
		}
		else if (current->left == NULL && current->right != NULL)
		{
			printSpaces(treeHeight - level);
			putchar('\\');
		}else
		{
			/*printSpaces(treeHeight - level); */
			putchar('/');
			printSpaces(treeHeight - level);
			putchar('\\');
		}
	}
		printf("\n");
	}
	free(q);
}
