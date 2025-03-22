#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
// bool check(vector<int>&v , int s , int e , int tar){
//     if(s>e){
//         return false;
//     }
//     else {
//         int mid =s+(e-s)/2;
//         if(v[mid]==tar){
//             return true;
//         }
//         else if(v[mid]>tar){
//             return check(v , s , mid-1 , tar);
//         }
//         else return check(v , mid+1 , e , tar);
//     }
// }
int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int tar;
    cin>>tar;
    // bool flag=false;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]+v[j]==tar){
    //             flag=true;
    //             cout<<"true"<<endl;
    //             break;
    //         }
    //     }
    //     if(flag)break;
    // }
    // if(!flag){
    //     cout<<"false"<<endl;
    // }
    // bool flag= false;
    // for(int i=0;i<n-1;i++){
    //     int z=tar-v[i];
    //     if(check(v , i+1 , n-1,z)){
    //         cout<<"true"<<endl;
    //         flag=true;
    //         break;
    //     }
    // }
    // if(!flag){
    //     cout<<"false"<<endl;
    // }

    // bool flag=false;
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     if(v[i]+v[j]==tar){
    //         flag=true;
    //         cout<<"true"<<endl;
    //         break;
    //     }
    //     else if(v[i]+v[j]>tar){
    //         j--;
    //     }
    //     else i++;
    // }
    // if(!flag){
    //     cout<<"false"<<endl;
    // }

    bool flag=true;
    unordered_map<int , int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(tar-v[i]!=v[i]){
            if(m[tar-v[i]]){
                cout<<"true"<<endl;
                flag=true;
                break;
            }
        }
        else {
            if(m[tar-v[i]]>=2){
                cout<<"true"<<endl;
                flag=true;
                break;
            }
        }
    }
    if(!flag){
        cout<<"false"<<endl;
    }
}