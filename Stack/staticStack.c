#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct s_Stack{
    int tab[16];
    int size;
}Stack;

Stack *createStack(){
    Stack *s = malloc(sizeof(Stack));
    s->size = -1;
    return s;
}

void stackPush(Stack *s, int n){
    assert(s->size < 16);
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

int stackTop(Stack *s){
    assert(s->size >= 0);
    return s->tab[s->size];
}

int stackSize(Stack *s){
    return s->size;
}

int main(){
    Stack *s = createStack();

    for(int i = 0; i<16;i++){
        stackPush(s,i*i);
    }
    removeStack(s);

    return 0;
}