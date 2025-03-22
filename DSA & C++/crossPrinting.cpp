#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t = n/2+1;
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i==t||j==t){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}