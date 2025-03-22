#include<stdio.h>
#include<stdbool.h>
bool check(long long int s , long long int e , long long int tar){
    if(s>e){
        return false;
    }
    else {
        long long int mid = s+(e-s)/2;
        if(mid*mid==tar){
            return true;
        }
        else if(mid*mid>tar){
            return check(s,mid-1,tar);
        }
        else return check(mid+1,e,tar);
    }
}


int main(){
    // int n;
    // scanf("%d" , &n);
    // int z=0;
    // int x;
    // for(int i=0;i<n;i++){
    //     scanf("%d" , &x);
    //     z=z^x;
    // }
    // printf("%d" , z);

    // printf("%d" , 7^2^5);

    long long int n;
    scanf("%lld" , &n);
//  sqrt(n)->[1 , n]
    if(check(1 , n , n)){
        printf("true");
    }
    else printf("false");
    return 0;

    // int n;
    // scanf("%d" , &n);
    // char ch[n+1];
    // // fgets(ch , n+1 , stdin);
    // scanf("%[^\n]s" , ch);
    // printf("%s" , ch);

}