#include<stdio.h>
int main(){
    float a,b;
    int choice;
    printf("Enter a & b");
    scanf("%f %f",&a,&b);
    printf("Enter : 1=add, 2=sub, 3=mult, 4=div ");
    scanf("%d",&choice);

    switch(choice) {
        case 1 : printf("%f",a+b);
        break;
        case 2 : printf("%f",a-b);
        break;
        case 3 : printf("%f",a*b);
        break;
        case 4 : printf("%f",a/b);
        break;
        default : printf("Invalid");
    }
    return 0;
}