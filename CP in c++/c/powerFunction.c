#include<stdio.h>
#include<math.h>
int main(){
    int a ;
    printf("enter the base: ");
    scanf("%d" , &a);
    int b ;
    printf("enter the power: ");
    scanf("%d" , &b);
    int p = pow(a , b);
    printf("%d raised to the power %d is: %d" , a , b , p);
    return 0;
}