#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traverse (struct node *ptr) {
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
    int data1, data2, data3, data4;
    printf("Enter data in all nodes: ");
    scanf("%d %d %d %d", &data1, &data2, &data3, &data4);
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));
    head -> data = data1;
    second -> data = data2;
    third -> data = data3;
    fourth -> data = data4;
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = NULL;
    traverse(head);
    return 0;
}