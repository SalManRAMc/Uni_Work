#include "main.h"

/**
 * Traverse_Breadth - Traversal and print
 * @root: Root of Tree
*/

void Traverse_Breadth(treenode *root)
{
	int nodecount_currentlevel = 1; /* store node count of a current layer*/
	int nodecount_nextlevel = 0; /*store node count of next layer*/
	Queue *q;
	treenode *current;

	q = createQueue();
	enqueue(q, root);
	while (q->front != NULL)
	{
		current = dequeue(q);
		if (nodecount_currentlevel == 0)
		{
			printf("\n");
			nodecount_currentlevel = nodecount_nextlevel;
			/* as if we're moving to the next level*/
			nodecount_nextlevel = 0; /*next level set up for count*/
		}
		nodecount_currentlevel--;
		if (current == NULL)
		{
			printf("NULL, ");
			continue;
		}
		printf("%d, ", current->data);
		enqueue(q, current->left);
		enqueue(q, current->right);
		nodecount_nextlevel += 2;

	}
}
