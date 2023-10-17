#include "main.h"

int push(char newest_item, char *stack, int *index, int size) {
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

int main(int argc, char **argv) {
    int index = 0, size = 10;
    char stack[10] = {0};
    char x = 'a', y = 'b', z = 'c';

    push(x, stack, &index, 10);
    push(y, stack, &index, 10);
    push(z, stack, &index, 10);

    return 0;
}

