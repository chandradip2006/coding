#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i< n;i++){
            cin>>arr[i];
        }
        sort(arr , arr+n);
        int count=1;
        for(int i=0;i< n-1;i++){
            if(arr[i]!=arr[i+1]){
                count++;
            }
        }
        if((n-count)%2==0){
            cout<<count<<endl;
        }
        else cout<<count-1<<endl;
    }
}