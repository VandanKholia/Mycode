#include<stdio.h>
int main() {
    int n,firstdigit,lastdigit;
    scanf("%d",&n);

    lastdigit=n%10;

    while(n>10) {
         n = n/10;
    }
    firstdigit = n;
    printf("Firstdigit = %d\nlastdigit = %d\nsum of first and last digit = %d",firstdigit,lastdigit,firstdigit+lastdigit);
    return 0;
}