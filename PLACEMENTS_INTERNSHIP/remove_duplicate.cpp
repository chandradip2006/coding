#include<bits/stdc++.h>
#include<unordered_map>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    int z= s.size();
    unordered_map<char,int> m;
    stack<char>st;
    for(int i=0;i<z;i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else {
            if(st.top()==s[i]){
                st.pop();
            }
            else st.push(s[i]);
        }
    }
    string str;
    while(!st.empty()){
        str.insert(str.begin() , st.top());
        st.pop();
    }
    cout<<str<<endl;
}