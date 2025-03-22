#include<stdio.h>
int main(){
    long long int a , b , c;
    scanf("%lld %lld %lld" , &a , &b , &c);
    long long int d = b*b-4*a*c;
    printf("the discriminant is : %lld" , d);
}