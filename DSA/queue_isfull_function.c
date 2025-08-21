#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;
};
void isfull(struct queue *ptr) {
    if (ptr->r == (ptr->size - 1)) {
        printf("Queue is full");    // return 1
    }
    else {
        printf("Queue is not full");    // return 0;
    }
}
int main() {
    struct queue *q;
    q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size*sizeof(int));
    for (int i=0; i<(q->size); i++) {
        q->r++;
        q->arr[q->r] = 10;
    }
    isfull(q);
    return 0;
}