#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int x){
    int flag = 1;
    for(int i = 2 ; i <= sqrt(x) ; i++){
        if(x%i==0){
            flag =0;
            break;
        }
    }
    if(flag == 0 || x==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a , b;
    cin>>a>>b;
    for(int i = a ; i <= b ; i++){
        if(checkprime(i)==1){
            cout<<i<<" ";
        }
    }
}