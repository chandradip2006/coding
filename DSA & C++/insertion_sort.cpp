#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // vector<int>v;
    // v.push_back(arr[0]);
    // int z=1;
    // bool flag;
    // for(int i=1;i<n;i++){
    //     flag=false;
    //     for(int j=0;j<z;j++){
    //         if(arr[i]<=v[j]){
    //             v.insert(v.begin()+j,arr[i]);
    //             flag = true;
    //             z++;
    //             break;
    //         }
    //     }
    //     if(!flag){
    //         v.push_back(arr[i]);
    //         z++;
    //     }
    // }

    // int v[n];
    // v[0]=arr[0];
    // int z=1;
    // bool flag;
    // for(int i=1;i<n;i++){
    //     flag=false;
    //     for(int j=0;j<z;j++){
    //         if(arr[i]<=v[j]){
    //             flag=true;
    //             for(int k=z-1;k>=j;k--){
    //                 v[k+1]=v[k];
    //             }
    //             v[j]=arr[i];
    //             z++;
    //             break;
    //         }
    //     }
    //     if(!flag){
    //         v[z++]=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // without using additional space
    for(int i=0;i<n;i++){
        int z=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(z>arr[j]){
                z=arr[j];
                idx=j;
            }
        }
        for(int k=idx-1;k>=i;k--){
            arr[k+1]=arr[k];
        }
        arr[i]=z;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}