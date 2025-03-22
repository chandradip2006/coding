#include<stdio.h>
#include<stdbool.h>
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        scanf("%d %d" , &arr[i][0] , &arr[i][1]);
    }
    bool flag=false;
    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j][0]>arr[j+1][0]){
                for(int k=0;k<2;k++){
                    swap(&arr[j][k] , &arr[j+1][k]);
                }
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    int count=0;
    int arr1[n][2];
    arr1[0][0]=arr[0][0];
    arr1[0][1]=arr[0][1];
    for(int i=1;i<n;i++){
        if(arr[i][0]<=arr1[count][1]){
            if(arr1[count][1]<=arr[i][1]){
                arr1[count][1]=arr[i][1];
            }
        }
        else{
            count++;
            arr1[count][0]=arr[i][0];
            arr1[count][1]=arr[i][1];
        }
    }
    printf("\n");
    for(int i=0;i<=count;i++){
        printf("%d %d\n" , arr1[i][0] , arr1[i][1]);
    }
}