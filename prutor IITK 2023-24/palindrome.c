#include<stdio.h>
int palindrome(int);
int main(){
    int n ,arr[n];
    scanf("%d" , &n);
    int sqpos = 0 , sqneg = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int j = 0 ; j < n ; j++){
        if(arr[j]>0){
            sqpos+=arr[j]*arr[j];
        }
        else{
            sqneg+=arr[j]*arr[j];
        }
    }
    if(palindrome(sqpos)==1 && palindrome(sqneg)==1){
        printf("BOTH PALINDROME");
    }
    else if(palindrome(sqpos)==1 && palindrome(sqneg)==0){
        printf("POS PALINDROME");
    }
    else if(palindrome(sqpos)==0 && palindrome(sqneg)==1){
        printf("NEG PALINDROME");
    }
    else{
        printf("NO PALINDROME");
    }
}
int palindrome(int x){
    int z = x;
    int r = 0 , ld;
    while(z > 0){
        ld = z % 10;
        r = r*10+ld;
        z = z/ 10;
    }
    if(r == x){
        return 1;
    }
    else {
        return 0;
    } 
}