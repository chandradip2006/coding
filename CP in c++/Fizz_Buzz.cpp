#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else cout<<"Fizz"<<endl;
    }
    else if(n%5==0){
        cout<<"Buzz"<<endl;
    }
}