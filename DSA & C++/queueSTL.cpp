#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    cout<<"front:"<<q.front()<<endl;
    q.push(20);
    cout<<"front:"<<q.front()<<endl;
    q.push(30);
    cout<<"front:"<<q.front()<<endl;
    int z = q.size();
    for(int i=0;i<z;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else cout<<"queue isnot empty"<<endl;
}