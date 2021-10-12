#include <stdbool.h>
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

int dequeue(Queue* queue)
{

}

bool isEmpty(Queue* queue)
{

}

void delete(Queue* queue)
{

}

void queueCreate()
{

}

int main()
{

}