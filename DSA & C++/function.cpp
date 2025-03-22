#include<iostream>
using namespace std;
string welcome(string name){
    return "welcome " + name;
}
int main(){
    string str = welcome("sanket");
    cout<<str;
}