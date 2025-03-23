#include<stdio.h>
int fac(int);
int comb(int , int);
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n][2];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d\n" , comb(arr[n-i-1][0],arr[n-i-1][1]));
    }
}
int fac(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*fac(x-1);
    }
}
int comb(int n , int r){
    return fac(n)/(fac(r)*fac(n-r));
}