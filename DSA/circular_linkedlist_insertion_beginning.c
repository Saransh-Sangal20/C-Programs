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
struct node *insert_beginning_cll(struct node *ptr, int data1) {
    struct node *ptr1;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1->data = data1;
    struct node *ptr2;
    ptr2 = ptr;
    while (ptr2->next!=ptr) {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
    ptr1->next = ptr;
    return ptr1;
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
    int data1;
    printf("Enter data: ");
    scanf("%d", &data1);
    head = insert_beginning_cll(head,data1);
    traversal(head);
    return 0;
}