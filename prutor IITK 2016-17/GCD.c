// euclidian GCD algorithm
#include<stdio.h>
int gcd(int x , int y){
    if(x>y){
        if(x%y==0){
            return y;
        }
        else{
            int t = x;
            x=y;
            y=t%y;
            return gcd(x,y);
        }
    }
    else{
        if(y%x==0){
            return x;
        }
        else{
            int t = y;
            y=x;
            x=t%x;
            return gcd(x,y);
        }
    }
}
int main(){
    int a ,b;
    scanf("%d %d" , &a , &b);
    printf("%d" , gcd(a , b));
}