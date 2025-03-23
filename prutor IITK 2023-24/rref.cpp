#include<iostream>
using namespace std;
// int pow1(int a , int b){
//     if(b==1){
//         return a;
//     }
//     else return a*pow1(a,b-1);
// }
int main(){
    int n , m;
    cin>>n>>m;
    float arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int z=0;
    int count2=0;
    while(z<n||count2<m){
        int idx=z;
        bool flag=false;
        for(int j=z;j<n;j++){
           if(arr[j][count2]!=0){
                idx=j;
                flag=true;
                break;
            }
        }
        if(!flag) {
            count2++;
            continue;
        }
        if(idx!=z){
            for(int i=count2;i<m;i++){
                float temp = arr[z][i];
                arr[z][i]=arr[idx][i];
                arr[idx][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=z){
                if(arr[i][count2]!=0){
                    float p=arr[i][count2]/arr[z][count2];
                    for(int j=count2;j<m;j++){
                        arr[i][j]=arr[i][j]-p*arr[z][j];
                    }
                }
            }
            else{
                for(int j=count2;j<m;j++){
                    arr[z][j]=arr[z][j]/arr[z][count2];
                }
            }
        }
        z++;
        count2++;
    }
    printf("\n");
    cout<<"RREF : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}