#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/*push adds a new data item to stack*/
int push(char newest_item, char *stack, int *index, int size);
/*pop takes out the current item on top of stack*/
int pop();
/*checks if stack is empty (non existent)*/
int isempty();
/*checks what data item is currently at the top of stack*/
int top();


#endif
