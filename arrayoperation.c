#include<stdio.h>
int main() {
    int i,arr[5] = {1,2,3,4,5};
    for (i=0; i<5; i++) {
        if (i%2==0) {
            arr[i] = arr[i] + 10;
        }
        else {
            arr[i] = arr[i] * 2;
        }
    }
    printf("The modified array is \n");
    for (i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}