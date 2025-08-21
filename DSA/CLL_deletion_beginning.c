#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal(struct node *ptr) {
    struct node *ptr1;
    ptr1 = ptr;
    printf("Elements are: ");
    while (ptr->next!=ptr1) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}
struct node *deletion_begin_cll(struct node *head) {
    struct node *ptr1;
    ptr1 = head;
    struct node *ptr2;
    ptr2 = head;
    while (ptr2->next!=head) {
        ptr2 = ptr2->next;
    }
    head = head->next;
    ptr2->next = head;
    free(ptr1);
    return head;
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
    fourth->next = head;
    printf("Before Deletion ");
    traversal(head);
    printf("\n");
    head = deletion_begin_cll(head);
    printf("After Deletion ");
    traversal(head);
    return 0;
}