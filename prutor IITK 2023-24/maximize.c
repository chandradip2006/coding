#include<stdio.h>
int max(int a , int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int arr1[n] , j=0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]<0){
            arr1[j] = arr[i]*(-1);
            j++;
        }
    }
    int m ,s = arr1[0];
    for(int i = 0 ; i < j-1 ; i++){
        m = max(s, arr1[i+1]);
        s = m;
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    printf("%d" , sum+2*m);
}