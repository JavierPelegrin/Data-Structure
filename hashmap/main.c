/*
 * Author : PELEGRIN GARCIA Javier
 * Date : 25 Oct 2021
 * Abaut : Implementation of hashTables
 * */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "hashTable.h"



int main(void){
    hashTable *tab = createHashTable();
    info s[2];
    s[0].age = 50;
    strcat(s[0].name,"name1");
    s[1].age = 20;
    strcat(s[1].name,"name2");
    addElement(tab,s[0]);
    addElement(tab,s[1]);
    info s2 = returnElem(tab, hashFunction(s[0]));
    printf("name : %s, age: %d\n",s2.name,s2.age);
    s2 = returnElem(tab,hashFunction(s[1]));
    printf("name : %s, age: %d\n",s2.name,s2.age);
    return 0;
}
