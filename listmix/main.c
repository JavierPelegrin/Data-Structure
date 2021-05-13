#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"
#include "list.h"

int main(){

    List *l = createList();

    printf("size queue[%d] : %d\n",-1,listSize(l));


    for(int i = 0; i<100;i++){
        if(i%2 == 0){
            listPushFront(l, i);
        }else{
            listPushBack(l,i);
        }
    }
    printList(l);
    for(int i = 0; i<100;i++){
        printf("list[%d] = %d\n",100-i,listFront(l));
        listPopFront(l);
    }
    //printf("list[%d] = %d\n",1,listFront(l));

    return 0;
}