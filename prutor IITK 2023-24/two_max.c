#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    int a = arr[0] , b = arr[1];
    for(int i = 0 ; i < n-1 ; i++){
        if(a<=arr[i+1]){
            b=a;
            a = arr[i+1];
        }
        else{
            if(b<=arr[i+1]){
                b = arr[i+1];
            }
        }
    }
    printf("%d %d" , a , b);
}