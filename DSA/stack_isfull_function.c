#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
void isfull(struct stack *ptr) {
    if (ptr->top == (ptr->size-1)) {
        printf("Stack is full");  // return 1
    }
    else {
        printf("Stack is not full");  // return 0
    }
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    for (int i=0; i<(s->size); i++) {
        s->top++;
        s->arr[s->top] = 10;
    }
    isfull(s);
    return 0;
}