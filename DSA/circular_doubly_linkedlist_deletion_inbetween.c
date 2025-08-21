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
    printf("Elements are: ");
    struct node *ptr1 = ptr;
    while(ptr1->next!=ptr) {
        printf("%d ", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("%d", ptr1->data);
}
struct node *deletenode(struct node *head, int node) {
    struct node *ptr1;
    ptr1 = head;
    if (node==1) {
        struct node *ptr2;
        ptr2 = head;
        while(ptr2->next != ptr1) {
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr1->next;
        struct node *ptr3;
        ptr3 = head;
        ptr3 = ptr3->next;
        free(ptr1);
        ptr3->prev = ptr2;
        return ptr3;
    }
    else {
        int i = 1;
        while(i!=(node-1)) {
            ptr1 = ptr1->next;
            i++;
        }
        struct node *ptr2 = ptr1;
        ptr2 = ptr2->next;
        struct node *ptr3 = ptr2;
        ptr3 = ptr3->next;
        ptr1->next = ptr2->next;
        ptr3->prev = ptr1;
        free(ptr2);
        return head;
    }
}
int main() {
    struct node *head = createnode(11);
    struct node *second = createnode(12);
    struct node *third = createnode(13);
    struct node *fourth = createnode(14);
    struct node *fifth = createnode(15);
    head->next = second;
    head->prev = fifth;
    second->next = third;
    second->prev = head;
    third->next = fourth;
    third->prev = second;
    fourth->next = fifth;
    fourth->prev = third;
    fifth->next = head;
    fifth->prev = fourth;
    printf("Before Deletion ");
    traversal(head);
    printf("\n");
    int node;
    printf("Enter node: ");
    scanf("%d", &node);
    head = deletenode(head,node);
    printf("After Deletion ");
    traversal(head);
    return 0;
}