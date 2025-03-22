#include<stdio.h>
int mod(int x){
    if(x>=0){
        return x;
    }
    else{
        return x*(-1);
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int count =0;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1;j < n ; j++){
            if(mod(arr[i]-arr[j])<(j-i)){
                count++;
            }
        }
    }
    printf("%d" , count);
}