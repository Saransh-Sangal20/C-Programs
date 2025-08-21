#include<stdio.h>
int main() {
    int i,j,k,m,n,p,q;
    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for 1st matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns for 2nd matrix: ");
    scanf("%d", &q);
    if (n==p) {
        int mat1[m][n], mat2[p][q];
        printf("Enter the elements of the 1st matrix \n");
        for (i=0; i<m; i++) {
            for (j=0; j<n; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter the elements of the 2nd matrix \n");
        for (i=0; i<p; i++) {
            for (j=0; j<q; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }
        int res[m][q];
        for (i=0; i<m; i++) {
            for (j=0; j<q; j++) {
                res[i][j] = 0;
                for (k=0; k<n; k++) {
                    res[i][j] = res[i][j] + (mat1[i][k] * mat2[k][j]) ;
                }
            }
        }
        printf("The resultant matrix is \n");
        for (i=0; i<m; i++) {
            for (j=0; j<q; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("The matrices cannot be multiplied");
    }
    return 0;
}