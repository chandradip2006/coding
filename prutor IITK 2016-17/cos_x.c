#include<stdio.h>
#define pie 3.142
int sign(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return -1;
    }
}
float term(float x, int n){
    if(n==0){
        return 1;
    }
    else{
        float i = 1 , p =1;
        while(i<=2*n){
            p=p*(x/i);
            i++;
        }
        return sign(n)*p;
    }
}
float mod(float x){
    if(x>=0){
        return x;
    }
    else{
        return (-1)*x;
    }
}
int main(){
    float x ;
    int n;
    scanf("%f %d" , &x , &n);
    float r = x*(pie/180.0);
    float sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum+term(r,i);
    }
    printf("%.3f" , mod(sum));
}