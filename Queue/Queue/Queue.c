#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct QueueElement {
    int value;
    struct QueueElement* next;
} QueueElement;

typedef struct Queue {
    QueueElement* head;
    QueueElement* tail;
} Queue;

void enqueue(Queue** queue, int number)
{
    QueueElement* newElement = malloc(sizeof(QueueElement));
    if (newElement == NULL)
    {
        return;
    }
    newElement->value = number;
    newElement->next = NULL;
    (*queue)->tail = newElement;
}

int dequeue(Queue** queue)
{
    if (*queue == NULL || queue == NULL)
    {
        return;
    }
    Queue* temporary = *queue;
    int value = (*queue)->head->value;
    (*queue)->head = (*queue)->head->next;
    (*queue)->tail = NULL;
    free(temporary);
    return value;
}

bool isEmpty(Queue* queue)
{

}

void delete(Queue* queue)
{

}

Queue queueCreate()
{

}

int main()
{
    Queue* queue = queueCreate();
    enqueue(queue);
}