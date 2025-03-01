#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include "node.h"

// Node structure for the queue
typedef struct queue_node_s {
    node_t* data;
    struct queue_node_s* next;
} queue_node_t;

// Queue structure with pointers to head and tail
typedef struct {
    queue_node_t* head;  // Points to the first element in the queue
    queue_node_t* tail;  // Points to the last element in the queue
} queue_t;

// Queue function prototypes
void init_queue(queue_t* q);
bool is_empty(queue_t* q);
void enqueue(queue_t* q, node_t* data);
node_t* dequeue(queue_t* q);
void free_queue(queue_t* q);

#endif // QUEUE_H

