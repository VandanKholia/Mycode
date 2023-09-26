#include<stdio.h>

int main(){
    int num;
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if(n&1==1){
        printf("no is odd");
    }
    else{
        printf("even");
    
    }
    return 0;

}