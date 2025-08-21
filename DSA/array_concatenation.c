#include<stdio.h>
void concatenate(int arr1[], int arr2[], int arr3[], int noel1, int noel2) {
    for (int i=0; i<noel1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i=noel1; i<(noel1+noel2); i++) {
        arr3[i] = arr2[i-noel1];
    }
    return;
}
int main() {
    int m,n;
    printf("Enter size of 1st array: ");
    scanf("%d", &m);
    printf("Enter size of 2nd array: ");
    scanf("%d", &n);
    int arr[m], brr[n];
    int x,y;
    printf("Enter the number of elements you enter in 1st array: ");
    scanf("%d", &x);
    printf("Enter the number of elements you enter in 2nd array: ");
    scanf("%d", &y);
    if (x<=m && y<=n) {
        int crr[m+n];
        printf("Enter elements of 1st array: ");
        for (int i=0; i<x; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Enter elements of 2nd array: ");
        for (int i=0; i<y; i++) {
            scanf("%d", &brr[i]);
        }
        concatenate(arr,brr,crr,x,y);
        printf("Concatenated array is: ");
        for (int i=0; i<(x+y); i++) {
            printf("%d ", crr[i]);
        }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}