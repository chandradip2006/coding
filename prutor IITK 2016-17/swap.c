#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int r;
    scanf("%d" , &r);
    int s[r][2];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d" , &s[i][j]);
        }
    }
    for(int i = 0 ; i < r; i++){
        int temp = arr[s[i][0]];
        arr[s[i][0]]= arr[s[i][1]];
        arr[s[i][1]]=temp;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
}