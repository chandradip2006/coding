#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int flag = -1;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n;j++){
            if(arr[i]==arr[j]){
                flag = i;
            }
        }
        if(flag != -1){
            break;
        }
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    int r = (n*(n+1))/2;
    int ans = r-sum+arr[flag];
    printf("%d %d %d" ,ans,arr[flag]);
}