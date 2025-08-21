#include<stdio.h>
int fibonacci(int);
int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int c, i;
    for(i=1; i<=n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}