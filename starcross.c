#include<stdio.h>
int main () {
    int i,j,n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    if (n%2!=0) {
        for (i=1; i<=n; i++) {
            for (j=1; j<=n; j++) {
                if (i==j || i+j==n+1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else {
        printf("Pattern will not be formed");
    }

    
    return 0;
}