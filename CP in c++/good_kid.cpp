#include<iostream>
using namespace std;
void swap(int * x,int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
        arr[0]++;
        int p=1;
        for(int i=0;i<n;i++){
            p=p*arr[i];
        }
        cout<<p<<endl;
        t--;
    }
}