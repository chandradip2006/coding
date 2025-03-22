#include<iostream>
using namespace std;
void print(int x , int y){
    int i = x;
    while(i<=y){
        if(i%2==0){
            i++;
        }
        else{
            cout<<i<<endl;
            i=i+2;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    print(a,b);
}