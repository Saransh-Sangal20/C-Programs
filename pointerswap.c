#include<stdio.h>
void swap(int *x, int*y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Numbers before swapping are %d and %d\n", a,b);
    swap(&a,&b);
    printf("Numbers after swapping are %d and %d", a,b);
    return 0;
}