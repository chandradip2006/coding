#include<iostream>
using namespace std;
int main(){
    long long int l,r;
    cin>>l>>r;
    if((r-l)<2){
        cout<<-1<<endl;
    }
    else{
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
}