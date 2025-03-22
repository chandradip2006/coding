#include<iostream>
using namespace std;
void fun(int x , int y = 100, int z = 200 , int w = 300){
    cout<<x<<" "<<y<<" "<<z<<" "<<w<<endl;
}
int main(){
    fun(10);
    fun(10 , 20);
    fun(10 ,20 , 30); 
}