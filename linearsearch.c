#include<stdio.h>
int main() {
    int i,x,check,arr[5] ={1,2,3,4,5};
    check = 0;
    printf("Enter the element to find: ");
    scanf("%d", &x);
    for (i=0; i<5; i++) {
        if (arr[i]==x) {
            check = 1;
            break;
        }
    }
    if (check==1) {
        printf("Element found \n");
        printf("Index is %d", i);
    }
    else {
        printf("Element not found");
    }
    return 0;
}