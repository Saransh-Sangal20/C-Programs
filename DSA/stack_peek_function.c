#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr) {
    if (ptr->top == ptr->size-1) {
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
void peek(struct stack *ptr, int pos1) {
    if ((ptr->top-pos1+1)<0) {
        printf("Invalid Position");
    }
    else {
        int peekval;
        peekval = ptr->arr[ptr->top-pos1+1];
        printf("Peeked value at position %d is %d", pos1, peekval);
    }
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
    int pos;
    printf("Enter position from top to peek: ");
    scanf("%d", &pos);
    peek(s,pos);
    return 0;
}