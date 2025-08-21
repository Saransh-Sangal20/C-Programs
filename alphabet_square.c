#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        char a = 'A';
        for (j=1; j<=n; j++) {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}