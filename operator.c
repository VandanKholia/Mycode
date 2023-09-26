#include<stdio.h>

int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
   int b = a<<1;
   int c = a>>1;

    printf("multiplication is %d\n",b);
    printf("division is %d",c);
    return 0;
}