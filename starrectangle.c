#include<stdio.h>
int main() {
    int i,j,m,n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");              
    scanf("%d", &n);
    for (i=1; i<=m; i++) {
        for (j=1; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}