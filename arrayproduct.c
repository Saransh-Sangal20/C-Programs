#include<stdio.h>
int main() {
    int i,product,arr[10];
    product = 1;
    for (i=0; i<10; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<10; i++) {
        product = product*arr[i];
    }
    printf("Product of all elements in the array is %d", product);
    return 0;
}