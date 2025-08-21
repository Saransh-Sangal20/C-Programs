#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insert_afternode(struct node *ptr, int node, int data1) {
    struct node *ptr1;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1->data = data1;
    struct node *ptr2;
    ptr2 = ptr;
    int i = 1;
    while (i!=(node)) {
        ptr2 = ptr2->next;
        i++;
    }
    ptr1->next = ptr2->next;
    ptr2->next = ptr1;
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
    int node, data1;
    printf("Enter the node: ");
    scanf("%d", &node);
    printf("Enter data to insert: ");
    scanf("%d", &data1);
    head = insert_afternode(head, node, data1);
    traversal(head);
    return 0;
}