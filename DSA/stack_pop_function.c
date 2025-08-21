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
int isempty(struct stack *ptr) {
    if (ptr->top == -1) {
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
void pop(struct stack *ptr) {
    if (isempty(ptr)) {
        printf("Stack Underflow");
    }
    else {
        int popdata;
        popdata = ptr->arr[ptr->top];
        ptr->top--;
        printf("Popped %d\n", popdata);
    }
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    printf("Before Pushing, isempty: %d\n", isempty(s));
    for (int i=0; i<(s->size); i++) {
        push(s,i);
    }
    printf("After Pushing, isfull: %d\n", isfull(s));
    for (int i=0; i<(s->size); i++) {
        pop(s);
    }
    printf("After Popping, isempty: %d", isempty(s));
    return 0;
}