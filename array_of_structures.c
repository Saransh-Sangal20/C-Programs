#include<stdio.h>
#include<string.h>
struct array {
    int num1;
    int num2;
    char arr[10];
};
int main() {
    struct array arr[2];
    arr[0].num1 = 16;
    arr[0].num2 = 18;
    strcpy(arr[0].arr, "hello");

    arr[1].num1 = 15;
    arr[1].num2 = 38;
    strcpy(arr[1].arr, "world");

    printf("%d %d %s \n", arr[0].num1, arr[0].num2, arr[0].arr);
    printf("%d %d %s", arr[1].num1, arr[1].num2, arr[1].arr);
}