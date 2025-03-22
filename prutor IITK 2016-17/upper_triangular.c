#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int z=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n&&j<i;j++){
            if(arr[i][j]!=0){
                z=0;
                break;
            }
        }
        if(z==0){
            break;
        }
    }
    if(z==1){
        printf("found triangle");
    }
    else printf("not found");
}