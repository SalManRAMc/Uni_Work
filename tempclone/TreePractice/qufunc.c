#include "main.h"

/**
 * createQueue - Function to create an empty queue
 *
 * Return: pointer to Queue
 */

Queue *createQueue()
{
	Queue *q;

	q = (Queue *)malloc(sizeof(Queue));

	q->front = q->rear = NULL;
	return (q);
}

/**
 * enqueue - Function to add an element to the rear of the queue
 *
 * @q: pointer to q
 * @address: ptr to treenode
 */
void enqueue(Queue *q, treenode *address)
{
	Node *node = newNode(address);

	if (q->rear == NULL)
	{
		q->front = q->rear = node;
		return;
	}
	q->rear->next = node;
	q->rear = node;
}

/**
 * dequeue - Function to remove an element from the front of the queue
 *
 * @q: pointer to q
 * Return: treenode at front of queue
 */
treenode *dequeue(Queue *q)
{
	Node *temp;
	treenode *res;

	if (q->front == NULL)
		return (NULL);

	temp = q->front;
	q->front = q->front->next;

	if (q->front == NULL)
		q->rear = NULL;

	res = temp->address;

	free(temp);
	return (res);
}
