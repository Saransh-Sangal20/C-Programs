#include<stdio.h>
void insert(int arr[], int noel, int el, int inx) {
    for (int i=(noel-1); i>=inx; i--) {
        arr[i+1] = arr[i];
    }
    arr[inx] = el;
    return;
}
int main() {
    int n,m,x,l;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter no. of elements you enter: ");
    scanf("%d", &m);
    if (m<n) {
        printf("Enter the elements of array: ");
        for (int i=0; i<m; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Array before insertion: ");
        for (int i=0; i<m; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Enter the element to enter: ");
        scanf("%d", &x);
        printf("Enter the position(index): ");
        scanf("%d", &l);
        insert(arr,m,x,l);
        printf("New array is: ");
        for (int i=0; i<(m+1); i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}