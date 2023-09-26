#include<stdio.h>

int main(){
    char opt;
    float a,b;
    printf("enter two no:");
    scanf("%d %d",&a,&b);
    


    printf("Enter operator");
    scanf(" %c",&opt);

 if(opt=='+'){
      printf("the sum is %d",a+b);
    }
    else if(opt=='-'){
        printf("the sub is %d",a-b);
    }
    else if(opt=='*'){
        printf("the mult is %d",a*b);
    }
    else if(opt=='/'){
        if(b==0)
        printf("Division by 0 is not possible");
     else{   printf("the div is %f",a/b);
     }
    }
     return 0;
}