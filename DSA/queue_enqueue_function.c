#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *ptr) {
    if (ptr->r == (ptr->size - 1)) {
        return 1;    // Queue is full
    }
    else {
        return 0;    // Queue is not full
    }
}
void enqueue(struct queue *ptr, int data1) {
    if (isfull(ptr)) {
        printf("Queue Overflow");
    }
    else {
        ptr->r++;
        ptr->arr[ptr->r] = data1;
        printf("Enqueued %d\n", data1);
    }
}
int main() {
    struct queue *q;
    q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size*(sizeof(int)));
    printf("Before Enqueuing, isfull: %d\n", isfull(q));
    for (int i=0; i<(q->size); i++) {
        enqueue(q, 10);
    }
    printf("After Enqueuing, isfull: %d", isfull(q));
    return 0;
}
// Direction of Enqueuing "<-- <--"