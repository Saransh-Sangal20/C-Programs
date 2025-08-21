#include<stdio.h>
int main() {
    int i,sum,arr[10];
    sum = 0;
    for (i=0; i<10; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<10; i++) {
        sum = sum + arr[i];
    }
    printf("Sum of elements in the array is %d", sum);
    return 0;
}