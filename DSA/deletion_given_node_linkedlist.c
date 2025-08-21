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
struct node *delete_givennode(struct node *ptr, int node) {
    if (node==1) {
        struct node *ptr1;
        ptr1 = ptr;
        ptr = ptr->next;
        free(ptr1);
        return ptr;
    }
    else {
        struct node *ptr1;
        ptr1 = ptr;
        int i = 1;
        while (i!=(node-1)) {
            ptr1 = ptr1->next;
            i++;
        }
        struct node *ptr2;
        ptr2 = ptr1;
        ptr2 = ptr2->next;
        ptr1->next =ptr2->next;
        free(ptr2);
        return ptr; 
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
    int node;
    printf("Enter node to delete: ");
    scanf("%d", &node);
    printf("Before deletion ");
    traversal(head);
    printf("\n");
    printf("After deletion ");
    head = delete_givennode(head,node);
    traversal(head);
    return 0;
}