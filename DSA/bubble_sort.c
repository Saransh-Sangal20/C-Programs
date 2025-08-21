#include<stdio.h>
void bubblesort(int arr[], int size) {
    for (int i=0; i<(size-1); i++) {    // for no. of passes in sorting
        int issorted = 1;    // added adaptiveness
        for (int j=0; j<(size-i-1); j++) {    // for no. of comparisons in each pass
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                issorted = 0;
            }
        }
        if (issorted) {
            return;
        }
    }
}
int main() {
    int n;
    printf("Enter size of unsorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of unsorted array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubblesort(arr,n);
    printf("Array after sorting: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}