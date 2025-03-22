#include<iostream>
using namespace std;
void swap(int &x , int &y){  // x and y are references , here exact same variable boxes are denoted in both swap and main functions
    int temp = x ; 
    x = y ; 
    y = temp;
}
int main(){
    int x = 9 ;
    int c = 1;
    swap(x , c);
    cout<<x<<" "<<c<<endl;
}