/*
 * https://www.youtube.com/watch?v=wg8hZxMRwcw
 * */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "hashTable.h"


struct s_hashTable{
    int size;
    info *tab[MAX_SIZE];
};

hashTable *createHashTable(){
    hashTable *h = malloc(sizeof(hashTable));
    h->size = 0;
    for(int i = 0; i < MAX_SIZE; i++){
        h->tab[i] = NULL;
    }
    return h;;
}

int sizeHashTable(const hashTable *h){
    return h->size;;
}

bool isEmpty(const hashTable *h){
    return h->size == 0;
}

int hashFunction(info s){
    int length = strlen(s.name);
    int hash = 0;
    for(int i = 0; i < length; i++){
        hash += s.name[i];
        hash += i;;
    }
    hash*=s.age;
    hash-=(length*2);
    return hash%MAX_SIZE;
}

void addElement(phashTable h, info s){
    h->size++;
    int key = hashFunction(s);
    h->tab[key] = malloc(sizeof(info));
    h->tab[key]->age = s.age;
    strcat(h->tab[key]->name,s.name);
}

info returnElem(const hashTable *h, int key){
    info s;
    s.age =-1;
    strcat(s.name,"\0");
    if (isEmpty(h) || h->tab[key] == NULL){
        return s;
    }
    return *h->tab[key];
}