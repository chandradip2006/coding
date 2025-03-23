#include<stdio.h>
#include<stdbool.h>
// #include<algorithm>
// void swap(int* x , int* y){
//     int temp = *x;
//     *x = *y;
//     *y=temp;
// }
// using namespace std;
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , arr+i);
    }
    bool flag = false;
    for(int i=0;i<n-1;i++){
        flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // swap(&arr[j] , &arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
}