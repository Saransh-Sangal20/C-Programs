#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *createnode(int data1) {
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data1;
    ptr->prev = NULL;
    ptr->next = NULL;
    return ptr;
}
void traversal(struct node *ptr) {
    struct node *ptr1;
    ptr1 = ptr;
    printf("Elements are: ");
    while(ptr1!=NULL) {
        printf("%d ", ptr1->data);
        ptr1 = ptr1->next;
    }
}
struct node *deletion_beginning(struct node *head) {
    struct node *ptr1;
    ptr1 = head;
    head = head->next;
    head->prev = NULL;
    free(ptr1);
    return head;
}
int main() {
    struct node *head = createnode(11);
    struct node *second = createnode(12);
    struct node *third = createnode(13);
    struct node *fourth = createnode(14);
    head->next = second;    // head->prev = NULL (from createnode() function)
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;    // fourth->next = NULL (from createnode() function)
    printf("Before Deletion ");
    traversal(head);
    printf("\n");
    head = deletion_beginning(head);
    printf("After Deletion ");
    traversal(head);
    return 0;
}