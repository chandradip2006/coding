#include<iostream>
using namespace std;
void swap(int* x , int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int partition(int arr[] , int s , int e){
    int z=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=z){
            count++;
        }
    }
    int p = s+count;
    swap(&arr[s] , &arr[p]);
    int i=s;
    int j= e;
    while(i<p&&j>p){
        if(arr[i]>arr[p]&&arr[j]<=arr[p]){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
        }
        else if(arr[i]>arr[p]){
            j--;
        }
        else if(arr[j]<=arr[p]){
            i++;
        }
    }
    return p;
}
void quicksort(int arr[] , int s , int e){
    if(s>=e){
        return ;
    }
    int p=partition(arr , s , e);
    quicksort(arr,s , p-1);
    quicksort(arr , p+1 , e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0 , n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}