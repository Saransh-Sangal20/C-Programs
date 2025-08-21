#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *ptr) {
    if (ptr->f == ptr->r) {
        return 1;    // Queue is empty
    }
    else {
        return 0;    // Queue is not empty
    }
}
int isfull(struct queue *ptr) {
    if (ptr->r == (ptr->size - 1)) {
        return 1;
    }
    else {
        return 0;
    }
}
void enqueue (struct queue *ptr, int data1) {
    if (isfull(ptr)) {
        printf("Queue Overflow");
    }
    else {
        ptr->r++;
        ptr->arr[ptr->r] = data1;
        printf("Enqueued %d\n", data1);
    }
}
void dequeue (struct queue *ptr) {
    if (isempty(ptr)) {
        printf("Queue Underflow");
    }
    else {
        ptr->f++;
        printf("Dequeued %d\n", ptr->arr[ptr->f]);
    }
}
int main() {
    struct queue *q;
    q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size*(sizeof(int)));
    printf("Before Enqueuing, isempty: %d\n", isempty(q));
    for (int i=0; i<(q->size); i++) {
        enqueue(q, 10);
    }
    printf("After Enqueuing, isfull: %d\n", isfull(q));
    for (int i=0; i<(q->size); i++) {
        dequeue(q);
    }
    printf("After Dequeuing, isempty: %d", isempty(q));
    return 0;
}