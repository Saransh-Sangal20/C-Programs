#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        if (i%2==0) {
            char a = 'A';
            for (j=1; j<=i; j++) {
                printf("%c ", a);
                a++;
            }
            printf("\n");
        }
        else {
            for (j=1; j<=i; j++) {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}