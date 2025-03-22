#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int prime(int);
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , arr+i);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d " , prime(arr[i]));
    }
}
int prime(int x){
    bool flag = true;
    if(x==1){
        return 0;
    }
    else{
        for(int i = 2 ; i <= sqrt(x);i++){
            if(x%i==0){
                flag = false;
                break;
            }
        }
        if(flag==false){
            return 0;
        }
        else{
            return 1;
        }
    }
}