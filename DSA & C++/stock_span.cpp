#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>u;
    vector<int>v;
    stack<int>s;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        u.push_back(x);
        if(s.empty()){
            v.push_back(i+1);
            s.push(i);
        }
        else{
            while(u[s.top()]<=x){
                s.pop();
                if(s.empty()){
                    break;
                }
            }
            if(s.empty()){
                v.push_back(i+1);
            }
            else v.push_back(i-s.top());
            s.push(i);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}