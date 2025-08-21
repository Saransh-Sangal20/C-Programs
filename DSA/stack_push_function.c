#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr) {
    if (ptr->top == (ptr->size-1)) {
        return 1;      // Stack is full
    }
    else {
        return 0;     // Stack is not full
    }
}
void push(struct stack *ptr, int data1) {
    if (isfull(ptr)) {
        printf("Stack Overflow");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = data1;
        printf("Pushed %d\n", data1);
    }
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    printf("Before Pushing, isfull: %d\n", isfull(s));
    for (int i=0; i<(s->size); i++) {
        push(s,i);
    }
    printf("After Pushing, isfull: %d", isfull(s));
    return 0;
}