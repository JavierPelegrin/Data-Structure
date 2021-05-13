#ifndef __QUEUE_H__
#define __QUEUE_H__

#define QUEUE_SIZE 16

typedef struct s_Queue Queue;

Queue *createQueue();

void queuePush(Queue *q, int n);

void queuePop(Queue *q);

int queueTail(const Queue *q);
int queueHead(const Queue *q);
int queueSize(const Queue *q);
void removeQueue(Queue *q);

#endif