#include<stdio.h>
int main(){
    int k;
    scanf("%d" , &k);
    for(int i = 1 ; i <= k ; i++){
        if(k%i==0){
            printf("%d %d\n" , i , k/i);
        }
    }
}