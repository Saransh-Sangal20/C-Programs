#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%d", ch>= 48 && ch<= 57);
    return 0;
    /* Digit-->1        
    Non-Digit-->0 */    
}

