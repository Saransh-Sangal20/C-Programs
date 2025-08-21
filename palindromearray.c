#include<stdio.h>
int main() {
    int i,count,arr[5],brr[5];
    count = 0;
    for (i=0; i<5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<5; i++) {
        brr[i] = arr[5-i-1];
    }
    for (i=0; i<5; i++) {
        if (arr[i]!=brr[i]) {
            count++;
            break;
        }
    }
    if (count==0) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    return 0;
}