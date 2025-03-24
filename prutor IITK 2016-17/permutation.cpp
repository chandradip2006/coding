#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&v , vector<int>&temp  , unordered_map<int , int>&m,int n){
    if(temp.size() == n){
        // ans.push_back(temp);
        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        for(int i = 0 ; i < v.size() ; i++){
            if(m[v[i]]==0){
                m[v[i]]=1;
                temp.push_back(v[i]);
                permutation(v , temp  , m , n);
                m[temp[temp.size()-1]]=0;
                temp.pop_back();
            }
        }
    }
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
    unordered_map<int , int>m;
    vector<vector<int>>ans;
    vector<int>temp;
    permutation(v , temp , m , n);
    // int z1=ans.size();
    // int z2=ans[0].size();
    // for(int i=0;i<z1;i++){
    //     for(int j=0;j<z2;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}