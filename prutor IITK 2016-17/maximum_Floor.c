#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int prime(long long int x){
    bool flag = true;
    for(int i = 2 ; i <= sqrt(x);i++){
        if(x%i!=0){
            flag = false;
            break;
        }
    }
    if(flag == false){
        return 0;
    }
    else{
        return 1;
    }
}
long long int min_prime(long long int x){
    for(long long int i = 2 ; i <= x ;i++){
        if(prime(i)==1 && x%i==0){
            return i;
        }
    }
}
int main(){
    long long int n , d , s;
    scanf("%lld %lld %lld" , &n , &d , &s);
    long long int r = n % s;
    long long int l = n - r;
    bool flag1 = true;
    for(long long int i = l ; i >= 2*s ; i = i -s){
        if(i%s==0){
            long long int z = i / s;
            if((i - i/min_prime(z))<=d){
                printf("%lld" , i);
                flag1 = false;
                break;
            }
        }
    }
    if(flag1==true){
        printf("%lld" , s);
    }
}