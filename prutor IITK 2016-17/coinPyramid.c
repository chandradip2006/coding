#include<stdio.h>
int height(int n){
    int j = 1 , count=0;
    while(n>=0){
        n=n-j;
        j++;count++;
    }
    return count-1;
}
int main(){
    int r;
    scanf("%d" , &r);
    int arr[r];
    for(int i = 0 ; i < r ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0 ; i < r ; i++){
        printf("%d\n" , height(arr[i]));
    }

}