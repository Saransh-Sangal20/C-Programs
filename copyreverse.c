#include<stdio.h>
int main() {
    int i,arr[5],brr[5];
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<5; i++) {
        brr[i] = arr[5-i-1];
    }
    printf("The new array is \n");
    for (i=0; i<5; i++) {
        printf("%d ", brr[i]);
    }
    return 0;
}