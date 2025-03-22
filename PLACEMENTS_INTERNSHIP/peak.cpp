#include<bits/stdc++.h>
using namespace std;
// int peak(vector<int>&v){
//     int n = v.size();
//     if(n==0){
//         return -1;
//     }
//     else{
//         bool flag=false;
//         int z;
//         for(int i=0;i<n-1;i++){
//             if(v[i]>v[i+1]){
//                 flag=true;
//                 z=v[i];
//                 break;
//             }
//         }
//         if(!flag){
//             return v[n-1];
//         }
//         else return z;
//     }
// }

int peak(vector<int>&v , int s , int e){
    if(v.size()==0){
        return -1;
    }
    else {
        if(s==e){
            return v[s];
        }
        else {
            int mid=s+(e-s)/2;
            if(v[mid]>v[mid+1]){
                return peak(v,s,mid);
            }
            else if(v[mid]<v[mid+1]){
                return peak(v,mid+1,e);
            }
            else {
                return max(peak(v , s , mid) , peak(v , mid+1 , e));
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<peak(v , 0 , n-1)<<endl;
}