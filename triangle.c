#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter the sides:");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c) {
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || a==c) {
        printf("Isosceles triangle");
    }
    else{
        printf("Scalen\n");
    }
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b ) {
        printf("Right angle triangle");
    }
    return 0;
}