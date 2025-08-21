#include<stdio.h>
int main() {
    int i,j,k,x,count,arr[10];
    count = 0;
    for (i=0; i<10; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (i=0; i<10; i++) {
        for (j=i+1; j<10; j++) {
            for (k=j+1; k<10; k++) {
                if (arr[i]+arr[j]+arr[k]==x) {
                    count++;
                }
            }
        }
    }
    printf("Total number of triplets is %d", count);
    return 0;
}