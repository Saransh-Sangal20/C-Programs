#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_node(int val) {
    struct node *p;
    p = (struct node*) malloc(sizeof(struct node));
    p->data = val;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int main() {
    struct node *root;
    struct node *p1;
    struct node *p2;
    struct node *p3;
    struct node *p4;
    root = create_node(11);
    p1 = create_node(12);
    p2 = create_node(13);
    p3 = create_node(14);
    p4 = create_node(15);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;    // Binary Tree created
    return 0;
}