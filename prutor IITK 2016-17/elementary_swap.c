#include<stdio.h>
void swap(int* x , int* y){
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
    int z1 = arr[0] , z2 = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(z1<=arr[i]){
            z1 = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
    if(z2>=arr[i]){
            z2 = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(z1 == arr[i]){
            z1 = i;
            break;
        }
    }
    for(int i = 0 ; i < n ; i++){
    if(z2 == arr[i]){
            z2 = i;
            break;
        }
    }
    swap(&arr[z1],&arr[z2]);
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
}