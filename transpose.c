#include<stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int mat1[m][n], mat2[n][m];
    printf("Enter the elements of matrix\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            mat2[i][j] = mat1[j][i];
        }
    }
    printf("The transpose of the matrix is\n");
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    } 
    return 0;
}