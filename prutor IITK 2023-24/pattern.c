#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    for(int i= 0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%c ",64+(factorial(n-1-i)/(factorial(j)*factorial(n-1-i-j)))%26);
        }
        printf("\n");
    }
}