#include <stdio.h>
#include <stdlib.h>

int push(char newest_item, char *stack, int *index, int size) 
{
    if (*index >= size) {
	        printf("insufficient memory available\n");
	        return (-1);
	    } else {
		        stack[*index] = newest_item;
		        printf("%c is crazy\n", stack[*index]);
		        (*index)++;
		    }

    return (*index);
}

int isempty(char *stack)
{
	if (!stack)
		printf("stack is empty\n");
	else
		printf("stack isn't empty\n");

	return (0);
}

int pop(char *stack, int *index)
{
	(*index)--;

	stack[*index] = '\0';
	(*index)--;

	return (0);
}

int top(char *stack,int *index)
{
	printf("%c with index %i is currently at the top of stack\n", stack[*index],*index);
	return (0);
}
int main(int argc, char **argv) {
    int index = 0, size = 10;
    char stack[10] = {0};
    char x = 'a', y = 'b', z = 'c';

    push(x, stack, &index, 10);
    push(y, stack, &index, 10);
    push(z, stack, &index, 10);

	pop(stack, &index);
	top(stack, &index);
	isempty(stack);

    return 0;
}

