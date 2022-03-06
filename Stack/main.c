#include <stdio.h>
#include <stdlib.h>

#include "staticStack.h"

int main(){
    Stack *s = createStack();

    for(int i = 0; i < STACK_SIZE; i++){
        stackPush(s,i*i);
    }
    printf("Stack size after all push %d\n",stackSize(s));
    for(int i = 0; i < STACK_SIZE; i++){
        printf("element[%d] = %d\n",i,stackTop(s));
        stackPop(s);
    }
    printf("Stack size after all pop %d\n",stackSize(s));
    removeStack(s);

    return 0;
}
