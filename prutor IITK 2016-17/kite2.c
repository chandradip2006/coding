#include<stdio.h>
int main(){
    int a;
    scanf("%d" , &a);
    for(int i = 1 ; i <= a;i++){
        for(int j = 1; j <=(a-i);j++){
            printf(" ");
        }
        for(int k = 1 ; k <=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1 ; i <= (a-1);i++){
        for(int j = 1 ; j <= i ; j++){
            printf(" ");
        }
        for(int k = 1;k<=(2*(a-i)-1) ; k++){
            printf("*");
        }
        printf("\n");
    }
}