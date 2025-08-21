#include<stdio.h>
int main() {
    int i, num[5];
    for (i=0; i<5; i++) {
        printf("Enter number at index %d: ", i);
        scanf("%d", &num[i]);  
    }
    for (i=0; i<5; i++) {
        printf("Element at index %d is %d \n", i, num[i]);
    }
    return 0;
}
 
 