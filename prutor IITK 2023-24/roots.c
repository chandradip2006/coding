#include<stdio.h>
int main(){
    long long int a , b , c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int r = b*b -4*a*c;
    int flag = (r >= 0);
    switch(flag){
        case 1:
            printf("Real");
            break;
        case 0:
            printf("Imaginary");
            break;
    }
}