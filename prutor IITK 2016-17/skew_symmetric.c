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
        for(int j=0;j<n;j++){
            if(arr[i][j]+arr[j][i]!=0){
                z=0;
                break;
            }
        }
        if(z==0){
            break;
        }
    }
    if(z==1){
        printf("SKEW_SYMMETRIC");
    }
    else printf("NOT SKEW_SYMMETRIC");
}