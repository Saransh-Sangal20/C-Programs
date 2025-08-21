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
    while (ptr1!=NULL) {
        printf("%d ", ptr1->data);
        ptr1 = ptr1->next;
    }
}
void reverse_traversal(struct node *ptr) {
    struct node *ptr1;
    ptr1 = ptr;
    while (ptr1->next!=NULL) {
        ptr1 = ptr1->next;
    }
    printf("Elements in reverse order are: ");
    while(ptr1!=NULL) {
        printf("%d ", ptr1->data);
        ptr1 = ptr1->prev;
    }
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
    traversal(head);
    printf("\n");
    reverse_traversal(head);
    return 0;
}