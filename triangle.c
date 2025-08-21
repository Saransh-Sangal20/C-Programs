#include<stdio.h>
int main() {
    int a,b;
    printf("Enter Base of triangle: ");
    scanf("%d", &a);
    printf("Enter Height of Triangle: ");
    scanf("%d", &b);
    int area = (a*b)/2;
    printf("Area of Triangle is %d", area);
    return 0;
} 