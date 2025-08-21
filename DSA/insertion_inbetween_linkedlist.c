#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insert_inbetween(struct node *ptr, int index, int data1) {
    struct node *ptr1;
    struct node *ptr2;
    ptr2 = ptr;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1 -> data = data1;
    int i = 0;
    while (i!=(index-1)) {
        ptr2 = ptr2 -> next;
        i++;
    }
    ptr1 -> next = ptr2 -> next;
    ptr2 -> next = ptr1;
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
    head -> data = 11;
    second -> data = 12;
    third -> data = 13;
    fourth -> data = 14;
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = NULL;
    int data1, index;
    printf("Enter index to insert: ");
    scanf("%d", &index);
    printf("Enter data to insert: ");
    scanf("%d", &data1);
    head = insert_inbetween(head,index,data1);
    traversal(head);
    return 0;
}