#include<stdio.h>
int main() {
    int size,element;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &element);
    int low,mid,high;
    low = 0;
    high = size-1;
    while (low<=high) {
        mid = (low+high)/2;
        if (element == arr[mid]) {
            printf("Element found at index %d", mid);
            break;
        }
        else if (element < arr[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    printf("Element not found");
    return 0;
}