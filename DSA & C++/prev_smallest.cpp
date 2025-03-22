#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>ans;
    stack<int>s;
    for(int i=0;i<n;i++){
        cin>>x;
        if(s.empty()){
            ans.push_back(-1);
            s.push(x);
        }
        else{
            while(s.top()>=x){
                s.pop();
                if(s.empty()){
                    break;
                }
            }
            if(s.empty()){
                ans.push_back(-1);
            }
            else ans.push_back(s.top());
            s.push(x);
        }
        cout<<ans[i]<<" ";
    }
}