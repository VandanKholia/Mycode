//Factorial
#include<stdio.h>
int main() {
    int n;

    printf("Enter no:");
    scanf("%d",&n);
    int i=1,a=1,fact=1;

    while(i<=n) {
        fact = fact * i;
        i++;
    }
    printf("factorial = %d",fact);
    return 0;

}