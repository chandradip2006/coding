#include<stdio.h>
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int m;
    scanf("%d" , &m);
    int arr1[m][2];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d" , &arr1[i][j]);
        }
    }
    for(int i = 0 ; i < m ; i++){
        swap(&arr[arr1[i][0]],&arr[arr1[i][1]]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
}