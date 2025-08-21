#include<stdio.h>
int main() {
    int i,min,arr[5];
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i=0; i<5; i++) {
        if (min>arr[i]) {
            min = arr[i];
        }
    }
    printf("Minimum element in the array is %d", min);
    return 0;
}