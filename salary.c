#include<stdio.h>

int main(){
    float basic,HRA,DA,gross;

    printf("Enter basic salary");
    scanf("%f",&basic);

     if(basic>=30000){
        HRA = basic*30/100.0;
        DA = basic*95/100.0;
        gross= HRA+DA+basic;
        printf("Gorss = %f",gross);
     }

    else if(basic>=20000){
        HRA = basic*25/100.0;
        DA = basic*90/100.0;
        gross= HRA+DA+basic;
        printf("Gorss = %f",gross);
    }
    
    else if(basic>=10000){
        HRA = basic*20/100.0;
        DA = basic*80/100.0;
        gross= HRA+DA+basic;
        printf("Gorss = %f",gross);
    }
    
    
    return 0;
}