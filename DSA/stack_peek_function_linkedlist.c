#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
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
void traversal(struct node *ptr) {
    printf("Elements are: ");
    while(ptr!=NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void peek(struct node *top, int pos) {
    struct node *ptr;
    ptr = top;
    int i = 1;
    while((i<pos) && (ptr!=NULL)) {
        ptr = ptr->next;
        i++;
    }
    if (ptr!=NULL) {
        printf("Element at position %d is %d", pos, ptr->data);
    }
    else {
        printf("Invalid position");
    }
}
int main() {
    struct node *top;
    top = NULL;
    top = push(top, 11);
    top = push(top, 12);
    top = push(top, 13);
    top = push(top, 14);
    traversal(top);
    printf("\n");
    peek(top, 2);
    return 0;
}