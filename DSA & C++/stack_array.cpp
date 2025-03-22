#include<iostream>
using namespace std;
class stack{
    public:
        stack(int n){
            int arr[n];
            int count=0;
            void push(int x){
                arr[count]=x;
                count++;
            }
            void pop(){
                count--;
            }
        }
};
int main(){

}