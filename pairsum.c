#include<stdio.h>
int main() {
    int i,j,x,count,arr[5];
    count = 0;
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (arr[i]+arr[j]==x) {
                count++;
            }
        }
    }
    printf("Total number of pairs is %d", count);
    return 0;
}