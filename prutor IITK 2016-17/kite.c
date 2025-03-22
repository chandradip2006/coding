#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    for(int i = 1; i <= 3 ; i++){
        for(int j=1; j <= 3-i ;j++){
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1;k++){
            printf("%d" , n);
        }
        printf("\n");
    }
    for(int i = 1; i <= 2;i++){
        for(int j = 1; j<= i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*(2-i)+1;j++){
            printf("%d" ,n);
        }
        printf("\n");
    }
}