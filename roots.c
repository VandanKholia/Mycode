#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    printf("Enter a,b & c");
    scanf("%f %f %f",&a,&b,&c);
    
    float root1 = ((-b)+sqrt(b*b-4*a*c))/(2*a); 
    float root2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);  
   
    if((4*a*c)>(b*b)) {
        printf("imaginary roots");
    }    
    else{
        printf("roots are %f & %f",root1,root2);
    }
    return 0;
}