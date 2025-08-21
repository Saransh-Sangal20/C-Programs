#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *createnode(int data1) {
    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data1;
    ptr->next = NULL;
    return ptr;
}
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
struct node *insertion_end_cll(struct node *head, int data1) {
    struct node *ptr1;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1->data = data1;
    struct node *ptr2;
    ptr2 = head;
    while(ptr2->next!=head) {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
    ptr1->next = head;
    return head;
}
int main() {
    struct node *head = createnode(11);
    struct node *second = createnode(12);
    struct node *third = createnode(13);
    struct node *fourth = createnode(14);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;
    printf("Before Insertion ");
    traversal(head);
    printf("\n");
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    head = insertion_end_cll(head, data);
    printf("After Insertion ");
    traversal(head);
    return 0;
}