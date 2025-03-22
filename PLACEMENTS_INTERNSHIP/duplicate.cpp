#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=1;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]==0){
            cout<<a[i]<<" ";
            b[a[i]]=-1;
        }
        else if(b[a[i]]==1){
            b[a[i]]=0;
        }
    }
}