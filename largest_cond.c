#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?((a>c)?printf("a"):printf("c")):(b>a)?((b>c)?printf("b"):printf("c"));
}