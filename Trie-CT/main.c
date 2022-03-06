#include <stdio.h>
#include "trie.h"
#include <stdlib.h>
#include <stdbool.h>

int main(){
    Trie *t = trie_create();

    if (t == NULL){
        fprintf(stderr,"[ERR] - trie_create faild\n");
        exit(1);
    }

    trie_addKey(&t, "javi");


    if (trie_isEmpty(t) || !trie_Search(t,"javi\0")){
        fprintf(stderr,"[ERR] - trie_addKey faild: \"javi\"\n");
        exit(2);
    }
    if (trie_Search(t,"avi\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild \"avi\"\n");
        exit(3);
    }
    if (!trie_Search(t,"jav\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"jav\"\n");
        exit(4);
    }
    if (trie_Search(t,"vi\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"vi\"\n");
        exit(5);
    }


    trie_addKey(&t, "jodido\0");

    trie_addKey(&t, "examenes\0");

    if (!trie_Search(t,"examenes\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"examenes\"\n");
        exit(6);
    }
    if (!trie_Search(t,"jodido\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"jodido\"\n");
        exit(7);
    }
    if (!trie_Search(t,"jodi\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"jodi\"\n");
        exit(8);
    }
    if (!trie_Search(t,"exam\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"exam\"\n");
        exit(9);
    }
    if (trie_Search(t,"xam\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"xam\"\n");
        exit(10);
    }

    if (trie_SearchKey(t,"exam\0")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"xam\"\n");
        exit(11);
    }
    if (!trie_SearchKey(t,"jodido")) {
        fprintf(stderr,"[ERR] - trie_addKey faild: \"xam\"\n");
        exit(12);
    }

    printf("DONE\n");

    return 0;
}
