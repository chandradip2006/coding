#include<iostream>
using namespace std;
int eligible(int age){
    if(age>=18){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int age;
    cin>>age;
    if(eligible(age)==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}