#include<stdio.h>
int main() {
    int i,max,arr[5];
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i=0; i<5; i++) {
        if (max<arr[i]) {
            max = arr[i];
        }
    }
    printf("Maximum element in the array is %d", max);
    return 0;
}