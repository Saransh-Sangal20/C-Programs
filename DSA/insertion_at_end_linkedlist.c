#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insert_end (struct node *ptr, int data1) {
    struct node *ptr1;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1->data = data1;
    struct node *ptr2;
    ptr2 = ptr;
    while (ptr2->next!=NULL) {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
    ptr1->next = NULL;
    return ptr;
}
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
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));
    head->data = 11;
    second->data = 12;
    third->data = 13;
    fourth->data = 14;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    int data1;
    printf("Enter data to insert at end: ");
    scanf("%d", &data1);
    head = insert_end(head, data1);
    traversal(head);
    return 0;
}