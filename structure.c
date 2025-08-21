#include<stdio.h>
#include<string.h>
struct person {
    char name[10];
    int age;
    float salary;
};
int main () {
    struct person p1;
    p1.age = 20;
    p1.salary = 100.0;
    strcpy(p1.name, "Harry");
    printf("%d %f %s", p1.age, p1.salary, p1.name);
    return 0;
}
