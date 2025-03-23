#include<stdio.h>
float mod(float x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int sign(int n){
    if(n%2==0){
        return 1;
    }
    else return -1;
}
float term(float x,int n){
    float p = 1;
    int i = 1;
    while(i<=2*n+1){
        p = p*(x/i);
        i++;
    }
    return sign(n)*p;
}
int main(){
    float x ;
    int n;
    scanf("%f %d" , &x , &n);
    float sum =0;
    float r = (3.142/180.0)*x;
    for(int i = 0 ; i < n ; i++){
        sum = sum+term(r,i);
    }
    printf("%.3f" , mod(sum));
}