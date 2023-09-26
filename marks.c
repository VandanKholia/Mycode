#include<stdio.h>
int main() {
    float m1, m2, m3, m4, m5, per;

    printf("Enter marks of five subjects:");
    scanf("%f %f %f %f %f",&m1, &m2, &m3, &m4, &m5);
    per= (m1+m2+m3+m4+m5)/5.0;

    if(per>45 && per<60){
        printf("Second class");

    }
    else if(per>35 && per<45){
        printf("Pass class");
    }
    else if(per>60 && per<70){
        printf("First class");
    }
    else{
        printf("Distinclion");
    }
    
    
}