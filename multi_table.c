#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int o=1;
    while(o<=10) {
        printf("%d x %d = %d\n",a,o,a*o);
        o++;
    }
    return 0;
}