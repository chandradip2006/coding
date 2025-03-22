#include<stdio.h>
#define  N 100000
// long long int fibo(long long int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else return fibo(n-1)+fibo(n-2);
// }
int main(){
    int arr[N];
    long long int n;
    scanf("%lld" , &n);
    arr[0]=0;
    arr[1]=1;
    if(n==0||n==1){
        printf("%d\n" , arr[n]);
    }
    else{
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        printf("%d\n" , arr[n]);
    }
}