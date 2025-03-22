#include<bits/stdc++.h>
using namespace std;
void str(string &s1 , string &s2 ){
    unordered_map<char , int>m;
    int z=s2.size();
    for(int i=0;i<z;i++){
        m[s2[i]]=1;
    }
    int n=s1.size();
    for(int i=0;i<n;i++){
        if(m[s1[i]]){
            s1.erase(s1.begin()+i);
            i--;
            n--;
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    str(s1 , s2);
    cout<<s1;
}