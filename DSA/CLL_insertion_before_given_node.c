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
struct node *insertion_before_node(struct node *head, int node, int data1) {
    struct node *ptr1;
    ptr1 = (struct node*) malloc(sizeof(struct node));
    ptr1->data = data1;
    if (node==1) {
        struct node *ptr2;
        ptr2 = head;
        while(ptr2->next!=head) {
            ptr2 = ptr2->next;
        }
        ptr1->next = ptr2->next;
        ptr2->next = ptr1;
        return ptr1;
    }
    else {
        struct node *ptr2;
        ptr2 = head;
        int i = 1;
        while(i!=(node-1)) {
            ptr2 = ptr2->next;
            i++;
        }
        ptr1->next = ptr2->next;
        ptr2->next = ptr1;
        return head;
    }
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
    int data, node;
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter the node: ");
    scanf("%d", &node);
    head = insertion_before_node(head, node, data);
    printf("After Insertion ");
    traversal(head);
    return 0;
}