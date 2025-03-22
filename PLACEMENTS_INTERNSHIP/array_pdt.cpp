#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[n];
    pre[0]=1;
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]*a[i-1];
    }
    int post[n];
    post[n-1]=1;
    for(int i=n-2;i>=0;i--){
        post[i]=post[i+1]*a[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]*post[i]<<" ";
    }
}