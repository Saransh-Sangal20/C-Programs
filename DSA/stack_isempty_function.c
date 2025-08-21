#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
void isempty(struct stack *ptr) {
    if (ptr->top == -1) {
        printf("Stack is empty");  // return 1
    }
    else {
        printf("Stack is full");  // return 0
    }
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    isempty(s);
    return 0;
}