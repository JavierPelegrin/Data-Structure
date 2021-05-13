#ifndef __STATICKSTACK_H__
#define __STATICKSTACK_H__

#define STACK_SIZE 35

typedef struct s_Stack Stack;


Stack *createStack();

void stackPush(Stack *s, int n);

void removeStack(Stack *s);

void stackPop(Stack *s);

int stackTop(const Stack *s);

int stackSize(const Stack *s);

#endif