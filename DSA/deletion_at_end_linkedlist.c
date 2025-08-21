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
struct node *delete_end(struct node *ptr) {
    struct node *ptr1;
    struct node *ptr2;
    ptr1 = ptr;
    ptr2 = ptr;
    while (ptr1->next != NULL) {
        ptr1= ptr1->next;
    }
    while (ptr2->next != ptr1) {
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL;
    free(ptr1);
    return ptr;
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
    printf("Before deletion ");
    traversal(head);
    printf("\n");
    head = delete_end(head);
    printf("After deletion ");
    traversal(head);
    return 0;
}