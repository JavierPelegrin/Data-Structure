#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bstree.h"


int main(){
    bstree *t = createBstree();
    int n ;
    for(int i = 0; i < 10; i++){
        n = rand()%100;
        while (bstree_search(t,n) == true){
            n = rand()%100;
        }
        bstree_add(&t, n);
        printf("i = %d, n = %d\n",i,n);
    }

    for(int i= 0; i<100;i++){
        if(bstree_search(t,i) == true){
            printf("tiene este valor : %d\n",i);
        }
    }

    return 0;
}
