#include<stdio.h>
int main() {
    int i,j,k,n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    int a = 1;
    for (i=1; i<=n; i++) {
        char ch = 'A';
        for (j=1; j<=(n-i); j++) {
            printf(" ");
        }
        for (k=1; k<=a; k++) {
            printf("%c", ch);
            ch++;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}