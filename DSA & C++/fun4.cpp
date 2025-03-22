#include<iostream>
using namespace std;
float circumference(float r){
    float circumference = 2*3.14*r;
    return circumference;
}
float area(float x){
    float area = 3.14*x*x;
    return area;
}
int main(){
    float r;
    cin>>r;
    cout<<"area: "<<area(r)<<endl<<"circumference: "<<circumference(r)<<endl;
}