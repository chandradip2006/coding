#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int i = 1 , count=0 , flag = -1;
    while(n>0){
        count++;
        n = n-i;
        i++;
        flag = n;
    }
    if(flag == 0){
        printf("the escape code is %d" , count);
    }
    else{
        printf("you can't escape !");
    }
}