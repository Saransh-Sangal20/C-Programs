#include<stdio.h>
int main() {
    int m,n,x,y;
    printf("Enter size of 1st array: ");
    scanf("%d", &m);
    printf("Enter size of 2nd array: ");
    scanf("%d", &n);
    printf("Enter the no. of elements you enter in 1st array: ");
    scanf("%d", &x);
    printf("Enter the no. of elements you enter in 2nd array: ");
    scanf("%d", &y);
    if (x<m && y<n) {
        int arr[m], brr[n], crr[m+n];
        printf("Enter elements of 1st array (ascending): ");
        for (int i=0; i<x; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Enter elements of 2nd array (ascending): ");
        for (int i=0; i<y; i++) {
             scanf("%d", &brr[i]);
        }
        int a,b,c;
        a = b = c= 0;
           while(a<x && b<y) {
             if (arr[a]<brr[b]) {
                crr[c] = arr[a];
                c++;
                a++;
             }
             else {
                crr[c] = brr[b];
                c++;
                b++;
             }
           }
           while (a<x) {
             crr[c] = arr[a];
             c++;
             a++;
           }
           while (b<y) {
             crr[c] = brr[b];
             c++;
             b++;
           }
        printf("Merged array is: ");
        for (int i=0; i<(x+y); i++) {
            printf("%d ", crr[i]);
        }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}