#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d" , &n , &k);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int count =0;
    for(int i = 0 ; i< n-1;i++){
        for(int j = i+1 ; j < n ; j++){
            if((arr[i]+arr[j])==k){
                count++;
            }
        }
    }
    printf("%d" , count);
}