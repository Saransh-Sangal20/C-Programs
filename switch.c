#include<stdio.h>
int main() {
    int n,a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter the number for operation: ");
    scanf("%d", &n);
    // 1-->add, 2-->subtract, 3-->multiply, 4-->divide, 5-->modulus
    switch (n) {
        case 1:
        printf("%d", a+b);
        break;
        case 2:
        printf("%d", a-b);
        break;
        case 3:
        printf("%d", a*b);
        break;
        case 4:
        printf("%d", a/b);
        break;
        case 5:
        printf("%d", a%b);
        break;
        default:
        printf("Wrong Input");
    }
    return 0;
}