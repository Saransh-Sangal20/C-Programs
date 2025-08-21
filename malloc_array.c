#include<stdio.h>
#include<stdlib.h>
int main() {
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    printf("Enter elements of dynamic array: ");
    for (int i=0; i<5; i++) {
        scanf("%f", &ptr[i]);
    }
    printf("Entered elements are: ");
     for (int i=0; i<5; i++) {
        printf("%f ", ptr[i]);
    }
}