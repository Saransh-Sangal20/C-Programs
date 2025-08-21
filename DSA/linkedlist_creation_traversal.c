#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal (struct node *ptr) {
    printf("Elements are: ");
    while (ptr!=NULL) {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}
int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node*) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));
    third = (struct node*) malloc (sizeof(struct node));
    fourth = (struct node*) malloc (sizeof(struct node));
    head -> data = 10;
    head -> next = second;
    second -> data = 15;
    second -> next = third;
    third -> data = 87;
    third -> next = fourth;
    fourth -> data = 24;
    fourth -> next = NULL;
    traversal(head);
    return 0;
}