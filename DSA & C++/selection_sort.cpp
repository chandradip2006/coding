#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int z=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<z){
                z=arr[j];
                idx=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}