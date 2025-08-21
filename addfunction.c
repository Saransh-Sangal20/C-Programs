#include<stdio.h>
int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}
int main() {
    int a,b,sum;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    sum = add(a,b);
    printf("The Sum of %d and %d is %d", a,b,sum);
    return 0;
}