#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(n>=k*k){
            if(k%2==0){
                if(n%2==0){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else {
                if(n%2==0){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}