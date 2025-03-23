#include<stdio.h>
int main(){
    int s , e , d;
    scanf("%d %d" , &s , &e);
    d = e-s;
    int sum = (d+1)*s+(d*(d+1))/2;
    printf("%d" , sum);
}