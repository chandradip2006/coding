#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    ((n%3==0&&n%5==0)&&n%100!=0)?printf("yes"):printf("no");
}