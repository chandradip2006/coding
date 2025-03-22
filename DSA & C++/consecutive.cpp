#include<bits/stdc++.h>
using namespace std;
vector<int> w(vector<int>& arr, int x, int y) {
    // Your code here
    vector<int>v;
    int z = arr.size();
    for(int i=0;i<z-1;i++){
        if(arr[i]==arr[i+1]){
            if(arr[i]!=x&&arr[i]!=y){
                v.push_back(arr[i]);
            }
        }
        else {
            v.push_back(arr[i]);
        }
    }
    v.push_back(arr[z-1]);
    return v;
}
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int a , b;
    cin>>a>>b;
    vector<int>u=w(v , a , b);
    int z = u.size();
    for(int i=0;i<z;i++){
        cout<<u[i]<<" ";
    }
}