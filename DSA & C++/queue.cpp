#include<iostream>
#include<vector>
using namespace std;
class queue{
    public:
        vector<int>v;
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        v.erase(v.begin());
    }
    int front(){
        return v[0];
    }
    bool isEmpty(){
        return v.size()==0;
    }
    int size(){
        return v.size();
    }
};
int main(){
    queue q;
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
    if(q.isEmpty()){
        cout<<"queue is empty"<<endl;
    }
    else cout<<"queue isnot empty"<<endl;
}