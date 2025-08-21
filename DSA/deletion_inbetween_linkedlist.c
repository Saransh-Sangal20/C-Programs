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
struct node *delete_inbetween(struct node *ptr, int index) {
    if (index==0) {
        struct node *ptr1;
        ptr1 = ptr;
        ptr = ptr->next;
        free(ptr1);
        return ptr;
    }
    else {
        struct node *ptr1;
        struct node *ptr2;
        ptr1 = ptr;
        int i = 0;
        while (i!=(index-1)) {
            ptr1 = ptr1->next;
            i++;
        }
        ptr2 = ptr1;
        ptr2 = ptr2->next;
        ptr1->next = ptr2->next;
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
    int index;
    printf("Enter index to delete: ");
    scanf("%d", &index);
    printf("Before deletion ");
    traversal(head);
    printf("\n");
    printf("After deletion ");
    head = delete_inbetween(head,index);
    traversal(head);
    return 0;
}