// no of digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int count = 0;
    while(n != 0){
        n = n / 10;
        count++;
    }
    cout<<"the no of digits of the number is: "<<count;
}