#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    float m;
    if(n<=50){
        m=n*0.50;
    }
    else{
        if(n<=150){
            m=50*0.50+(n-50)*0.75;
        }
        else{
            m=50*0.50+100*0.75+(n-150)*1.00;
        }
    }
    printf("%f" , m*120/100);
}