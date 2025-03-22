#include <stdio.h>
// int fac(int n){
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//     }
//     return p;
// }

int getPermutation(int n , int num){
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    while(num>0){
        if(num%10<=n&&num%10>=1){
            if(arr[num%10-1]==0){
                arr[num%10-1]=1;
            }
            else {
                return 0;
            }
        }
        else{
            return 0;
        }
        num=num/10;
    }
    return 1;
}
// void input(char **ch , int idx , int arr[] , int n){
//     for(int i=1;i<=n;i++){
        
//     }
// }
// void getPermutation(int n , char **ch , int arr[] , int* idx1 , int* idx2){
//     if(*idx2==n){
//         *idx2=0;
//         *idx1=*idx1+1;
//         getPermutation(n , ch , arr , idx1 , idx2);
//     }
//     if(*idx1==fac(n)){
//         return ;
//     }
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n;k++){
//             if(arr[k-1]==0){
//                 ch[*idx1][*idx2]=k+'1';
//                 arr[k-1]=1;
//                 *idx2=*idx2+1;
//                 int arr1[n];
//                 for(int j=0;j<n;j++){
//                     arr1[j]=arr[j];
//                 }
//                 getPermutation(n , ch , arr1 , idx1 , idx2);
//             }
//         }
//     }
// }

int main(){
     int n,k;
    scanf("%d %d" , &n ,&k);
    // // int p=1;
    // // for(int i=1;i<=9;i++){
    // //     p=p*i;
    // // }
    // // printf("%d" , p);
    // // int n,k;
    // // scanf("%d %d" , &n , &k);
    int z1=0;
    for(int i=1;i<=n;i++){
        z1=z1*10+i;
    }
    int z2=0;
    for(int i=n;i>=1;i--){
        z2=z2*10+i;
    }
    int count=0;
    for(int i=z1;i<=z2;i=i+1){
        if(getPermutation(n , i)){
            count++;
            if(count==k){
                printf("%d" , i);
                break;
            }
        }
    }
    // int n , k;
    // scanf("%d %d" , &n , &k);
    // char ch[fac(n)][n];
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     arr[i]=0;
    // }
    // int z1=0;
    // int z2=0;
    // getPermutation(n , ch , arr , &z1 , &z2);
    // for(int i=0;i<n;i++){
    //     printf("%c" , ch[k-1][i]);
    // }
}
   
