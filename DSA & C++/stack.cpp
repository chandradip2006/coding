#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;
// class stack{
//     // vector<int>v;
//     // public:
//     //     void push(int x){
//     //         v.push_back(x);
//     //     }
//     //     void pop(){
//     //         v.pop_back();
//     //     }
//     //     int top(){
//     //         return v[v.size()-1];
//     //     }
//     //     bool empty(){
//     //         return v.size()==0;
//     //     }

//     list<int>ll;
//     public:
//         void push(int x){
//             ll.push_front(x);
//         }
//         void pop(){
//             ll.pop_front();
//         }
//         int top(){
//             return ll.front();
//         }
//         bool empty(){
//             return ll.size()==0;
//         }
// };
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}