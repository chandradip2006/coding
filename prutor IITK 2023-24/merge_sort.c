#include<stdio.h>
void merge(int arr[] ,int s ,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int temp1[len1];
    for(int i=0;i<len1;i++){
        temp1[i]=arr[s+i];
    }
    int temp2[len2];
    for(int i=0;i<len2;i++){
        temp2[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=s;
    while(i<len1&&j<len2){
        if(temp1[i]<temp2[j]){
            arr[k++]=temp1[i++];
        }
        else {
            arr[k++]=temp2[j++];
        }
    }
    while(i<len1){
        arr[k++]=temp1[i++];
    }
    while(j<len2){
        arr[k++]=temp2[j++];
    }
}
void merge_sort(int arr[] , int s , int e){
    if(s>=e){
        return ;
    }
    else {
        int mid=s+(e-s)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);
        merge(arr , s , e);
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    merge_sort(arr , 0 , n-1);
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
}