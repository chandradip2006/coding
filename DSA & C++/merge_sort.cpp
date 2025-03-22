#include<iostream>
using namespace std;
void merge(int arr[] , int s , int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int arr1[len1];
    int arr2[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k++];
    }
    for(int i=0;i<len2 ;i++){
        arr2[i]=arr[k++];
    }
    k=s;
    int i=0;
    int j=0;
    while(i<len1&&j<len2){
        if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j++];
        }
        else {
            arr[k++]=arr1[i++];
        }
    }
    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }
}
void mergesort(int arr[] , int s , int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr , s , e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr , 0 , n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}