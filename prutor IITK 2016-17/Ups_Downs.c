#include<stdio.h>
int difference(int x , int y){
    if(x>=y){
        return x-y;
    }
    else{
        return y-x;
    }
}
int main(){
    int n;
    scanf("%d" ,&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int z1=arr[0],z2=arr[0];
    int i1,i2;
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
        if(arr[i]==z1){
            i1 = i;
            break;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==z2){
            i2 = i;
            break;
        }
    }
    printf("%d" , difference(i1 , i2));
}