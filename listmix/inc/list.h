#ifndef __LIST_H__
#define __LIST_H__

typedef struct s_List List;

List *createList();

void listPushFront(List *l, int e);

void listPushBack(List *l, int e);

void listPopFront(List *l);

void listPopBack(List *l);

int listFront(const List *l);

int listBack(const List *l);

void printList(const List *l);

#endif 