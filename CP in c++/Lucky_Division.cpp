#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int z=n;
    bool flag =true;
    while(z>0){
        int ld =z%10;
        if(ld==4||ld==7){
            z=z/10;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        if(n%4==0||n%7==0||n%47==0||n%44==0||n%77==0||n%74==0||n%447==0||n%477==0||n%444==0||n%474==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}