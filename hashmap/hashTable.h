#ifndef __BSTREE_H__
#define __BSTREE_H__

#include <stdbool.h>

#define MAX_SIZE 200
#define MAX_NAME_SIZE 100

typedef struct s_hashTable hashTable;
typedef hashTable *phashTable;

typedef struct s_info{
    char name[MAX_NAME_SIZE];
    int age;
}info;


hashTable *createHashTable();

int sizeHashTable(const hashTable *h);

bool isEmpty(const hashTable *h);

int hashFunction(info s);

void addElement(phashTable h, info s);

info returnElem(const hashTable *h, int key);

#endif