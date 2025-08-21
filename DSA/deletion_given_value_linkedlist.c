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
struct node *delete_value(struct node *ptr, int value) {
    if (value==ptr->data) {
        struct node *ptr1;
        ptr1= ptr;
        ptr = ptr->next;
        free(ptr1);
        return ptr;
    }
    struct node *ptr1;
    ptr1 = ptr;
    while (ptr1->data!=value && ptr1->next!=NULL) {
        ptr1 = ptr1->next;
    }
    if (ptr1->data==value) {
        struct node *ptr2;
        ptr2 = ptr;
        while (ptr2->next!=ptr1) {
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr1->next;
        free(ptr1);
        return ptr;
        }
    else {
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
    int value;
    printf("Enter value to delete: ");
    scanf("%d", &value);
    printf("Before deletion ");
    traversal(head);
    printf("\n");
    printf("After deletion ");
    head = delete_value(head,value);
    traversal(head);
    return 0;
}