#include<stdio.h>
int main() {
    int month;
    printf("Enter the month");
    scanf("%d",&month);

    if(month>=1 && month<=12) {

    switch(month) {
        case 2 : printf("28 days");
        case 4 :
        case 5 :
        case 9 :
        case 11 : printf("30 days");
        break;
        default : printf("31 days");
    }
  } else{
    printf("not valid");

  }
  return 0;
}