#include<stdio.h>
float term(float x, int n){
    if(n==0){
        return 1;
    }
    else{
        float p = 1;
        int i = 1;
        while(i<=n){
            p=p*(x/i);
            i++;
        }
        return p;
    }
}
int main(){
    float x;
    int n;
    scanf("%f %d" , &x , &n);
    float sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum+term(x,i);
    }
    printf("%.3f", sum);
}