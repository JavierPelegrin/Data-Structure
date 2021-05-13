#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

struct s_Queue {
    int tab[QUEUE_SIZE];
    int size;
    int tail;
    int head;
};

Queue *createQueue(){
    Queue *q = malloc(sizeof(Queue));
    q->size = 0;
    q->tail = -1;
    q->head = 0;
    return q;
}

void queuePush(Queue *q, int n){
    assert(q->size <= QUEUE_SIZE);
    q->tail = (q->tail+1)%QUEUE_SIZE;
    q->tab[q->tail] = n;
    q->size++;
}

void queuePop(Queue *q){
    assert(q->size > 0 );
    q->tab[q->head] = -1;
    q->head = (q->head+1)%QUEUE_SIZE;
    q->size--;
}

int queueTail(const Queue *q){
    assert(q->size > 0 );
    return q->tab[q->tail];
}
int queueHead(const Queue *q){
    assert(q->size > 0 );
    return q->tab[q->head];
}
int queueSize(const Queue *q){
    return q->size;
}

void removeQueue(Queue *q){
    free(q);
    q = NULL;
}