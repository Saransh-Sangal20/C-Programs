#include<stdio.h>
int main() {
    int m,n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the no. of elements you enter in array: ");
    scanf("%d", &m);
    if (m<n) {
        printf("Enter the elements of array: ");
        for (int i=0; i<m; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Array before deletion: ");
        for (int i=0; i<m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        int x;
        printf("Enter the element's index to delete: ");
        scanf("%d", &x);
        for (int i=x; i<m; i++) {
            arr[i] = arr[i+1];                      
        }
        printf("Array after deletion is: ");
        for (int i=0; i<(m-1); i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}