#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("%c" , 'a'+(arr[i]-16));
    }
}