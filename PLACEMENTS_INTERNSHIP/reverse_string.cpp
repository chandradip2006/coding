#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int z =s.size();
    for(int i=0;i<z-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]==' '){
                s.erase(s.begin()+i);
                i--;
                z--;
            }
        }
    }
    if(s[0]==' '){
        s.erase(s.begin());
        z--;
    }
    if(s[z-1]==' '){
        s.pop_back();
        z--;
    }
    string t;
    string ans;
    for(int i=0;i<z;i++){
        if(s[i]!=' '){
            t.push_back(s[i]);
        }
        else {
            int n=t.size();
            for(int j=n-1;j>=0;j--){
                ans.insert(ans.begin() , t[j]);
            }
            ans.insert(ans.begin() , ' ');
            t="";
        }
    }
    int n=t.size();
    for(int j=n-1;j>=0;j--){
        ans.insert(ans.begin() , t[j]);
    }
    cout<<ans<<endl;
}