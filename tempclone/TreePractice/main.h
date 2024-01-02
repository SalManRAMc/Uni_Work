#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct treenode - struct for trees
 * @data: data stored inside treenode
 * @right: pointer to right subtree
 * @left: pointer to left subtree
 *
 * Description: The struct I'll be using to make my trees
*/
typedef struct treenode
{
	int data;
	struct treenode *right;
	struct treenode *left;
} treenode;

/**
 * struct Node - struct for linked lists
 * @address: address of treenode stored in node
 * @next: pointer to next node
 *
 * Description: Struct used for simple linked lists
*/
typedef struct Node
{
	treenode *address;
	struct Node *next;
} Node;

/**
 * struct Queue - struct for queues
 * @front: front of queue
 * @rear: back of queue
*/

typedef struct Queue
{
	Node *front, *rear;
} Queue;

treenode *insert_tnode(treenode *treeroot, int inserted_data);
Node *newNode(treenode *data);

Queue *createQueue();
void enqueue(Queue *q, treenode *address);
treenode *dequeue(Queue *q);

void free_tree(treenode *root);
int print_horizontal(treenode *root);
int find_depth(treenode *root);
int ReturnMAX(treenode *root);
int ReturnMIN(treenode *root);

void Traverse_Breadth(treenode *root);

void printSpaces(int numSpaces);
void Traverse_Breadth2(treenode *root);

#endif
