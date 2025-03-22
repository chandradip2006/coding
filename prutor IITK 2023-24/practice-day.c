#include<stdio.h>
int main(){
    int arr[6] , count = 0;
    for(int i = 0 ; i < 6 ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i] >= 12){
            count++;
        }
    }
    printf("%d" , count);
}