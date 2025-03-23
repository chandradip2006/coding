#include<stdio.h>
int main(){
    int b , y;
    float ts;
    scanf("%d %d" , &b , &y);
    if(b<20000){
        ts =b +(8*b/100.0)+(17*(b+8*b/100.0)/100.0);
        printf("%0.2f" , ts);
    }
    else if(b>60000){
        ts =b +(14*b/100.0)+(25*(b+14*b/100.0)/100.0);
        printf("%0.2f" , ts);
    }
    else{
        float r = b + (2.5*b/100)*y;
        if(r>40000){
            ts = r+(5.5*r/100)*y;
            printf("%0.2f" , ts);
        }
        else{
            ts = r+(4.5*r/100)*y;
            printf("%0.2f" , ts);
        }
    }
}