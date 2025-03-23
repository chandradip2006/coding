#include<stdio.h>
#define root3 1.73205
int main(){
    float a;
    scanf("%f" , &a);
    float h = root3*a/2;
    float area = (root3/4)*a*a;
    printf("%.2f %.2f" , h , area);
}