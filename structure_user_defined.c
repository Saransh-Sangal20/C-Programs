#include<stdio.h>
#include<string.h>
struct person {
    int age;
    int code;
    char name[10];
};
int main() {
    struct person p1;
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter code: ");
    scanf("%d", &p1.code);
    printf("Enter name: ");
    scanf("%s", &p1.name);
    printf("%d %d %s", p1.age, p1.code, p1.name);
}