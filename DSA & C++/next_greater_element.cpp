#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>u;
    int x;
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        u.push_back(x);
    }
    for(int i=n-1;i>=0;i--){
        x=u[i];
        if(s.empty()){
            v.insert(v.begin() , -1);
            s.push(x);
        }
        else{
            while(s.top()<=x){
                s.pop();
                if(s.empty()){
                    break;
                }
            }
            if(s.empty()){
                v.insert(v.begin() , -1);
            }
            else v.insert(v.begin() , s.top());
            s.push(x);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}