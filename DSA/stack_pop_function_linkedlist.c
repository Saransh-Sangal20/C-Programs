#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int isempty(struct node *top) {
    if (top==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}
int isfull() {
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    if (ptr==NULL) {
        return 1;
    }
    else {
        free(ptr);
        return 0;
    }
}
struct node *push(struct node *top, int data1) {
    if (isfull()) {
        printf("Stack Overflow");
    }
    else {
        struct node *ptr;
        ptr = (struct node*) malloc(sizeof(struct node));
        ptr->data = data1;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
struct node *pop(struct node *top) {
    if (isempty(top)) {
        printf("Stack Underflow");
    }
    else {
        struct node *ptr;
        ptr = top;
        top = top->next;
        free(ptr);
        return top;
    }
}
void traversal(struct node *ptr) {
    printf("Elements are: ");
    while(ptr!=NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main() {
    struct node *top;
    top = NULL;
    top = push(top, 11);
    top = push(top, 12);
    top = push(top, 13);
    top = push(top, 14);
    printf("Before popping ");
    traversal(top);
    printf("\n");
    top = pop(top);
    top = pop(top);
    printf("After popping ");
    traversal(top);
    return 0;
}