#include<stdio.h>
int main() {
int a,b,c;
printf("enter first no:");
scanf("%d",&a);

printf("enter second no:");
scanf("%d",&b);

printf("enter third no:");
scanf("%d",&c);

if(a>b){
    if(a>c){
        printf("a is largest");
    } else{
        printf("c is largest");
    }
}
 else if(b>a){
    if(b>c){
        printf("b is largest");
    } else{
        printf("c is largest");
    }

}
}