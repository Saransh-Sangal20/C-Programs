#include<stdio.h>
int main() {
    int i,marks[10] = {23,45,64,24,66,89,12,100,32,54};
    for (i=0; i<=9; i++) {
        if (marks[i]<35) {
            printf("%d ", i);
        }
    }
    return 0;
}