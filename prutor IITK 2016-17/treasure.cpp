#include<iostream>
#include<vector>
using namespace std;
int max1(int x , int y){
    if(x>=y){
        return x;
    }
    else return y;
}
int max_sum(vector<vector<int>>&arr , int n , int m , int sum){
    if(n==0&&m==0){
        return sum+arr[0][0];
    }
    else if(n==0){
        if(arr[0][m-1]!=-1){
            return max_sum(arr , n , m-1 , sum+arr[0][m]);
        }
        else return -1;
    }
    else if(m==0){
        if(arr[n-1][0]!=-1){
            return max_sum(arr , n-1 , m , sum+arr[n][m]);
        }
        else return -1;
    }
    else {
        if(arr[n-1][m]!=-1&&arr[n][m-1]!=-1){
            return max1(max_sum(arr , n-1 , m , sum+arr[n][m]) , max_sum(arr , n , m-1 , sum+arr[n][m]));
        }
        else {
            if(arr[n-1][m]!=-1){
                return max_sum(arr , n-1 , m , sum+arr[n][m]);
            }
            else if(arr[m][n-1]!=-1){
                return max_sum(arr , n , m-1 , sum+arr[n][m]);
            }
            else return -1;
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n);
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            arr[i].push_back(x);
        }
    }
    if(arr[n-1][m-1]==-1){
        cout<<-1<<endl;
    }
    else{
        printf("%d" , max_sum(arr , n-1 , m-1 , 0));
    }
}