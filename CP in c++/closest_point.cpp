#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        if(n==2&&(arr[1]-arr[0])>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}