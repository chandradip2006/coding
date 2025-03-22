#include<stdio.h>
int main(){
    int n , s;
    scanf("%d %d" , &n , &s);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i= 0 ; i < n ; i++){
        for(int j = 0 ; j < n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sum = 0,count = 0;
    for(int i = 0 ;i < n ; i++){
        sum = sum+arr[i];
        if(sum<=s){
            count++;
        }
        else{
            break;
        }
    }
    printf("%d" , count);
}