#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;
};
void isempty(struct queue *ptr) {
    if (ptr->f == ptr->r) {
        printf("Queue is empty");    // return 1
    }
    else {
        printf("Queue is not empty");    // return 0
    }
}
int main() {
    struct queue *q;
    q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size*sizeof(int));
    isempty(q);
    return 0;
}