#include<stdio.h>

int main() {
    int a,b,c;

    printf("Enter three no. :");
    scanf("%d %d %d",&a,&b,&c);

    if(b<a && b>c || b>a && b<c) {
        printf("%d is second largest no",b);
    }
    else if(a<b && a>c || a>b && a<c) {
        printf("%d is second largest no",a);
    }
    else if(c<a && c>b || c>a && c<b) {
         printf("%d is second largest no",c);
    }
    return 0;
}