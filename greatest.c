
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    if (a>b) {
        if (a>c) {
            printf("greatest number is %d", a);
        }
        else {
            printf("greatest number is %d", c);
        }
    }
    else if (b>c) {
        printf("greatest number is %d", b);   
    }
    else {
        printf("greatest number is %d", c);
    }
    return 0;
    }
