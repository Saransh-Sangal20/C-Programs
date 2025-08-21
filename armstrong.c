#include<stdio.h>
#include<math.h>
int main() {
    int n,ogno,dno,digit,sum;
    sum = 0;
    printf("Enter the number of digits in this number: ");
    scanf("%d", &dno);
    printf("Enter the number: ");
    scanf("%d", &n);
    ogno = n;
    while (n!=0) {
        digit = n%10;
        sum = sum + (pow(digit,dno));
        n = n/10;
    }
    if (sum == ogno) {
        printf("It is an Armstrong Number");
    }
    else {
        printf("It is not an Armstrong Number");
    }
    return 0;
    }



