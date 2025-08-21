#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void isfull() {
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    if (ptr==NULL) {
        printf("Stack is full");    // return 1
    }
    else {
        printf("Stack is not full");    // return 0
        free(ptr);
    }
}
int main() {
    struct node *top;
    top = NULL;
    isfull();
    return 0;
}