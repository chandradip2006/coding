#include<stdio.h>
int GCD(int x , int y){
    if(x>y){
        int a = x%y;
        if(a==0){
            return y;
        }
        else{
            x = y;
            y = a;
            return GCD(x,y);
        }
    }
    else{
        int a = y%x;
        if(a==0){
            return x;
        }
        else{
            y = x;
            x = a;
            return GCD(x,y);
        }
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[2*n];
    for(int i = 0 ; i < 2*n ; i++){
        scanf("%d" , arr+i);
    }
    for(int i = 0 ; i < 2*n ; i++){
        printf("%d\n" , arr[i]+GCD(arr[i],arr[2*n-1-i]));
    }
}