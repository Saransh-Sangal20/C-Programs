#include<stdio.h>
int main() {
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Entered numbers are %d %d \n", a,b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("Swapped numbers are %d %d", a,b);
    return 0;
}