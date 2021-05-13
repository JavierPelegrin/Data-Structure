#include <stdlib.h>
#include <assert.h>

#include "staticStack.h"

struct s_Stack{
    int tab[STACK_SIZE];
    int size;
};

Stack *createStack(){
    Stack *s = malloc(sizeof(Stack));
    s->size = -1;
    return s;
}

void stackPush(Stack *s, int n){
    assert(s->size < STACK_SIZE);
    s->size++;
    s->tab[s->size] = n;
}

void removeStack(Stack *s){
    free(s);
}

void stackPop(Stack *s){
    assert(s->size>=0);
    s->tab[s->size] = 0;
    s->size--;
}

int stackTop(const Stack *s){
    assert(s->size >= 0);
    return s->tab[s->size];
}

int stackSize(const Stack *s){
    return s->size;
}