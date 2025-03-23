#include<iostream>
using namespace std;
// int pow1(int a , int b){
//     if(b==1){
//         return a;
//     }
//     else return a*pow1(a,b-1);
// }
int main(){
    int n;
    cin>>n;
    float arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int z=0;
    int count=0;
    int count2=0;
    while(z<n||count2<n){
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
            for(int i=count2;i<n;i++){
                float temp = arr[z][i];
                arr[z][i]=arr[idx][i];
                arr[idx][i]=temp;
            }
            count++;
        }
        for(int i=z+1;i<n;i++){
            if(arr[i][count2]!=0){
                float p=arr[i][count2]/arr[z][count2];
                for(int j=count2;j<n;j++){
                    arr[i][j]=arr[i][j]-p*arr[z][j];
                }
            }
        }
        z++;
        count2++;
    }
    printf("\n");
    float pdt=1;
    for(int i=0;i<n;i++){
        pdt=pdt*arr[i][i];
    }
    cout<<"Determinant is: ";
    if(count%2==0){
        cout<<pdt<<endl;
    }
    else cout<<(-1)*pdt<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}