#include <stdbool.h>
#include <stdlib.h>

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

int dequeue(Queue** queue)
{
    if (*queue == NULL || queue == NULL)
    {
        return;
    }
    Queue* temporary = *queue;
    int value = (*queue)->head->value;
    (*queue)->head = (*queue)->head->next;
    free(temporary);
    return value;
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