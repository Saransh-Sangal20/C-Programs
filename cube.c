#include<stdio.h>
// This program calculates the cube of the Number
int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int cube= n*n*n;
    printf("the cube of the number is %d", cube);
    return 0;
}