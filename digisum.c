#include<stdio.h>
int main() {
    int n,digit,sum;
    sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n!=0) {
        digit = n%10;
        sum = sum+digit;
        n = n/10;
    }
    printf("Sum of the digits is %d", sum);
    return 0;                            
}
/* To seperate the digits from a number
first use '%' modulus operator, and then '/' division operator */