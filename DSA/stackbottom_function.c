#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr) {
    if (ptr->top == (ptr->size-1)) {
        return 1;
    }
    else {
        return 0;
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
void stackbottom(struct stack *ptr) {
    int bottomval;
    bottomval = ptr->arr[0];
    printf("Value at the bottom of the stack is %d", bottomval);
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    for (int i=0; i<(s->size); i++) {
        push(s,i);
    }
    stackbottom(s);
    return 0;
}