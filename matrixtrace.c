#include<stdio.h>
int main() {
    int m,n,i,j,trace;
    trace = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int mat[m][n];
    printf("Enter the elements of matrix\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (i==j) {
                trace = trace + mat[i][j];
            }
        }
    }
    printf("The trace of matrix is %d", trace);
    return 0;
}