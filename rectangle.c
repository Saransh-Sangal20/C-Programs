#include<stdio.h>
int main() {
    int a,b;
    printf("enter length of rectangle: ");
    scanf("%d", &a);
    printf("enter breadth of rectangle: ");
    scanf("%d", &b);
    int perimeter= 2*(a+b);
    printf("Perimeter of rectangle is: %d", perimeter);
    return 0;
// This program calculates Perimeter of the Rectangle
}