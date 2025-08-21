#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    char *arr;
};
int isfull(struct stack *ptr) {
    if (ptr->top == ptr->size-1) {
        return 1;
    }
    else {
        return 0;
    }
}
int isempty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
void push(struct stack *ptr, char data1) {
    if (isfull(ptr)) {
        printf("Stack Overflow");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = data1;
    }
}
void pop(struct stack *ptr) {
    if (isempty(ptr)) {
        printf("Stack Underflow");
    }
    else {
        char popdata;
        popdata = ptr->arr[ptr->top];
        ptr->top--;
    }
}
void parenthesis_match(char exp[], struct stack *s) {
    for (int i=0; exp[i]!='\0'; i++) {
        if (exp[i]=='(') {
            if (isfull(s)) {
                printf("Parenthesis is not balanced");
                return;
            }
            else {
                push(s,'(');
            }
        }
        else if (exp[i]==')') {
            if (isempty(s)) {
                printf("Parenthesis is not balanced");
                return;
            }
            else {
                pop(s);
            }
        }
    }
    if (isempty(s)) {
        printf("Parenthesis is balanced");
    }
    else {
        printf("Parenthesis is not balanced");
    }
}
int main() {
    struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (char*) malloc(s->size*(sizeof(char)));
    char exp[100];
    printf("Enter an arithimetic expression: ");
    scanf("%s", &exp); 
    parenthesis_match(exp,s);
    return 0;
}