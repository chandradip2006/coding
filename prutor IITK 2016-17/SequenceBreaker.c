#include<stdio.h>
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n , m;
    scanf("%d %d" , &n , &m);
    if(n%2!=0){
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            scanf("%d" , &arr[i]);
        }
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = 0 ; j < n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr+j, arr+j+1);
                }
            }
        }
        int mid = n/2;
        if(arr[mid]==m){
            printf("Yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("please enter an odd number in place of n");
    }
}