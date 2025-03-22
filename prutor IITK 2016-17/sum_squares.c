#include<stdio.h>
int main(){
    int s , e;
    scanf("%d %d" , &s , &e);
    int sum = 0;
    for(int i = s ; i <= e ; i++){
        sum = sum + (i*i);
    }
    printf("%d" , sum);
}