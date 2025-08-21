#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;    // Using doubly linkedlist
};
int main() {
    struct node *root;
    struct node *p1;
    struct node *p2;
    struct node *p3;
    struct node *p4;
    root = (struct node*) malloc(sizeof(struct node));
    p1 = (struct node*) malloc(sizeof(struct node));
    p2 = (struct node*) malloc(sizeof(struct node));
    p3 = (struct node*) malloc(sizeof(struct node));
    p4 = (struct node*) malloc(sizeof(struct node));
    root->data = 11;
    p1->data = 12;
    p2->data = 13;
    p3->data = 14;
    p4->data = 15;
    root->left = p1;                   
    root->right = p2;                     
    p1->left = p3;                      
    p1->right = p4;                    
    p2->left = NULL;                   
    p2->right = NULL;    // Binary Tree created
    return 0;
}