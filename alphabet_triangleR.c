#include<stdio.h>
int main() {
    int i,j,k,n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=(n-i); j++) {
            printf(" ");
        }
        char a = 'A';
        for (k=1; k<=i; k++) {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}