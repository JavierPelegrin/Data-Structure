#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"
#include "queue.h"

typedef struct s_Element {
    Queue *q;
    struct s_Element *next;
    struct s_Element *prev;
}Element;

struct s_List{
    Element *front;
    Element *back;
    int size;
};

List *createList(){
    List *l = malloc(sizeof(List));
    l->front = NULL;
    l->back = NULL;
    l->size = 0;
    return l;
}

void listPushFront(List *l, int e){
    if (l->front == NULL || queueSize(l->front->q)>=QUEUE_SIZE){
        Queue *q = createQueue();
        Element *e = malloc(sizeof(Element));
        e->q = q;
        e->prev = l->front;
        if (l->size == 0) {
            l->back = e;
        }else if(l->size != 0){
            l->front->next = e; 
        }
        l->front = e;
    }
    queuePush(l->front->q, e);
    l->size++;
}

void listPushBack(List *l, int e){
    if (l->back == NULL || queueSize(l->back->q)>=QUEUE_SIZE){
        Queue *queue = createQueue();
        Element *e = malloc(sizeof(Element)); 
        e->q = queue;
        e->next = l->back;
        if (l->size == 0){
            l->front = e;
        }else if (l->size != 0){
            l->back->prev = e; 
        }
        l->back = e;
    }
    queuePush(l->back->q, e);
    l->size++;
}

void listPopFront(List *l){
    assert(l->size != 0);
    queuePop(l->front->q);
    if(queueSize(l->front->q)==0){
        removeQueue(l->front->q);
        if(l->size == 1){
            l->front = NULL;
        }else{
            l->front = l->front->prev;
            free(l->front->next);
            l->front->next = NULL;
        }
    }
    l->size--;
}

void listPopBack(List *l){
    assert(l->size != 0);
    queuePop(l->back->q);
    if(queueSize(l->back->q)==0){
        removeQueue(l->back->q);
        if(l->size == 1){
            l->back = NULL;
        }else{
            l->back = l->back->prev;
            free(l->back->prev);
            l->back->prev = NULL;
        }
    }
    l->size--;
}

int listFront(const List *l){
    assert(l->size != 0);
    return queueHead(l->front->q);
}
int listBack(const List *l){
    assert(l->size != 0);
    return queueTail(l->front->q);
}

int listSize(const List *l){
    return l->size;
}

void printList(const List *l){
    printf("\n");
    for(Element *i = l->back; i != NULL; i = i->next){
        printf("primer eleme de la queue = %d\n",queueTail(i->q));
    }
    printf("\n");
}