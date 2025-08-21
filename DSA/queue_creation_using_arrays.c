#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;
};
int main() {
    struct queue *q;
    q = (struct queue*) malloc(sizeof(struct queue));
    q->size = 10;
    q->f = -1;
    q->r = -1;
    q->arr = (int*) malloc(q->size*(sizeof(int)));
    return 0;
}
// Queue created using Arrays