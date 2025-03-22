#include<stdio.h>
int main(){
    int n , arr1[n] , arr2[n] , arr[2*n];
    scanf("%d" , &n);
    int flag1 = 1, flag2 = 1;
    for(int i = 0 ; i < n ; i++){
        scanf("%d" ,&arr1[i]);
    }
    for(int i = 0 ; i < n ; i++){
        scanf("%d" ,&arr2[i]);
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(arr1[i]>arr1[i+1]){
            flag1 = 0;
            break;
        }
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(arr2[i]>arr2[i+1]){
            flag2 = 0;
            break;
        }
    }
    if(flag1 == 1&& flag2 == 1){
        for(int  i = 0 ;  i < n ; i++){
            arr[i] = arr1[i];
        }
        for(int i = n ; i < 2*n ; i++){
            arr[i] = arr2[i-n];
        }
        printf("the merged sorted array is ");
        for(int j = 0 ; j < 2*n ; j++){
            printf("%d " , arr[j]);
        }
    }
    else{
        printf("At least one array is not sorted");
    }
    
}