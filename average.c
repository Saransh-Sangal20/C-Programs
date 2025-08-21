#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    float average = (a+b+c)/3.0;
    printf("Average of the numbers is %f", average);
    return 0;
}