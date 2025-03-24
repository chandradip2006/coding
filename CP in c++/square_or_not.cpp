#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        char arr[n+1] ;
        int count=0;
        cin>>arr;
        int z= sqrt(n);
        if((z*z)!=n){
            cout<<"No"<<endl;
        }
        else{
            for(int i = 0 ; i < n ; i++){
                if(arr[i]=='1'){
                    count++;
                }
            }
            if(count==(4*(z-1))){
                cout<<"Yes"<<endl<<count;
            }
            else {
                cout<<"No"<<endl<<count;
            }
        }
        t--;
    }
}