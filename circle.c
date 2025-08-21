#include<stdio.h>
int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    int area = 3.14*radius*radius;
    printf("Area of the Circle is %d", area);
    return 0;
}