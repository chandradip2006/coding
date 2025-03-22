#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    int count3=0;
    int z = s.size();
    for(int i=0;i<z;i++){
        if(s[i]=='('){
            count1++;
        }
        else if(s[i]==')'){
            count2++;
        }
        else count3++;
    }
    cout<<"(:"<<count1<<endl;
    cout<<"):"<<count2<<endl;
    cout<<"*:"<<count3<<endl;
}