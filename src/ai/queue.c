#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/**
 * Initialize the queue
 */
void init_queue(queue_t* q) {
    q->head = NULL;
    q->tail = NULL;
}

/**
 * Check if the queue is empty
 */
bool is_empty(queue_t* q) {
    return q->head == NULL;
}

/**
 * Enqueue a node into the queue
 */
void enqueue(queue_t* q, node_t* data) {
    queue_node_t* new_node = (queue_node_t*)malloc(sizeof(queue_node_t));
    if (!new_node) {
        perror("Failed to allocate memory for queue node");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;

    if (q->tail) {
        q->tail->next = new_node;
    } else {
        q->head = new_node;
    }
    q->tail = new_node;
}

/**
 * Dequeue a node from the queue
 */
node_t* dequeue(queue_t* q) {
    if (is_empty(q)) {
        return NULL;
    }

    queue_node_t* temp = q->head;
    node_t* data = temp->data;
    q->head = temp->next;

    if (!q->head) {
        q->tail = NULL;
    }

    free(temp);
    return data;
}

/**
 * Free all the nodes in the queue
 */
void free_queue(queue_t* q) {
    while (!is_empty(q)) {
        dequeue(q);
    }
}

