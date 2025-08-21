#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void isempty(struct node *ptr) {
    if (ptr==NULL) {
        printf("Stack is empty");    // return 1
    }
    else {
        printf("Stack is not empty");    // return 0
    }
}
int main() {
    struct node *top;
    top = NULL;
    isempty(top);
    return 0;
}