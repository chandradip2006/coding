#include<stdio.h>
int factorial(int);
int combination(int , int);
int main(){
    int i ,n;
    scanf("%d" , &n);
    for(i = 1 ; i < n ; i++){
        for(int j = 0 ; j <= n - i ; j++){
            printf("%c " , 65+(combination(n-i,j)-1)%26);
        }
        printf("\n");
    }
    printf("A");
}
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int combination(int a, int b){
    return factorial(a)/(factorial(b)*factorial(a-b));
}