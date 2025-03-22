#include<stdio.h>
int binarySearch(int arr[] ,int a , int b , int c){
    if(a>b){
        return 0;
    }
    else{
        int mid = (a+b)/2;
        if(arr[mid]==c){
            return 1;
        }
        else if(arr[mid]<c){
            a= mid+1;
            return binarySearch(arr,a , b ,c) ;
        }
        else{
            b = mid-1;
            return binarySearch(arr,a , b ,c) ;
        }
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr1[i]);
    }
    int m;
    scanf("%d" , &m);
    int arr2[m];
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &arr2[i]);
    }
    int arr3[n];
    int r = 0;
    for(int i = 0 ; i < n ; i++){
        if(binarySearch(arr2 , 0 , m-1,arr1[i])==0){
            arr3[r]=arr1[i];
            r++;
        }
    }
    for(int i = r-1 ;i>=0 ;i--){
        printf("%d " , arr3[i]);
    }
}