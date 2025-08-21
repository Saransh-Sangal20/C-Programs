#include<stdio.h>
int main() {
    int i,sum1,sum2,diff,arr[5];
    sum1 = sum2 = 0;
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<5; i++) {
        if (i%2==0) {
            sum1 = sum1 + arr[i];
        }
        else {
            sum2 = sum2 + arr[i];
        }
    }
    printf("Sum of odd indexed elements is %d \n", sum2);
    printf("Sum of even indexed elements is %d \n", sum1);
    diff = sum1 - sum2;
    printf("The difference between sum of even to sum of odd index values is %d", diff);
    return 0;  
}