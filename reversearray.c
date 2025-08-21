#include<stdio.h>
int main() {
    int i,fval,sval,arr[5];
    for (i=0; i<5; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<5/2; i++) {
        fval = arr[i];
        sval = arr[5-i-1];
        arr[i] = sval;
        arr[5-i-1] = fval;
    }
    printf("The reversed array is \n");
    for (i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}