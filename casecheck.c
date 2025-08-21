#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z') {
        printf("Lowercase");
    }
    else if (ch>='A' && ch<='Z') {
        printf("Uppercase");
    }
    else {
        printf("Not an English Character");
    }
    return 0;
}