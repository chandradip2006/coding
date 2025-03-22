#include<stdio.h>
#include<math.h>
float mod(float x){
    if(x<0){
        return x*(-1);
    }
    else{
        return x;
    }
}
int main(){
    float a , b , c;
    scanf("%f %f %f" , &a , &b , &c);
    float D = b*b -4*a*c;
    if(D<0){
        printf("No Real Roots");
    }
    else{
        if(D==0){
            printf("%f" , mod((-1)*b/(2*a)));
        }
        else{
            float x1= (-b+sqrt(D))/(2*a);
            float x2= (-b-sqrt(D))/(2*a);
            printf("%f %f" , mod(x1) , mod(x2));
        }
    }
}