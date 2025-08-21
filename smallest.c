#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    (num1>num2) ? printf("Smallest Number is %d", num2) : printf("Smallest Number is %d", num1);
    return 0;
}
