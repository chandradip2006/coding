#include<stdio.h>
long long sum(long long b){
    printf("%lld\n" , &b);
    // printf("%lld\t%lld\n" , a , b);
    
    // return a+b;
    return b;
}
int main(){
    long long a=2,b=3;
    // printf("%lld\t%lld\n" , a , b);
    // printf("%lld\t%lld\n" , &a , &b);
    // printf("%lld\n" , sum(a , b));
    // printf("%lld\n" , sum(&a , &b));

    sum(sum(sum(a)));
}