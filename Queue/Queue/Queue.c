#include <stdbool.h>

typedef struct QueueElement{
    int value;
    struct QueueElement* next;
} QueueElement;

typedef struct Queue {
    QueueElement* head;
    QueueElement* tail;
} Queue;

void enqueue(Queue* queue, int number)
{

}

int dequeue(Queue* queue)
{

}

bool isEmpty(Queue* queue)
{

}

void delete(Queue* queue)
{

}

void QueueCreate()
{

}

int main()
{

}