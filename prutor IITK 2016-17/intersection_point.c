#include<stdio.h>
int main(){
    int a1 , b1 , c1;
    scanf("%d %d %d" , &a1 , &b1 , &c1);
    int a2 , b2 , c2;
    scanf("%d %d %d" , &a2 , &b2 , &c2);
    float x, y;
    x = (float)(b1*c2-b2*c1)/(float)(a1*b2-a2*b1);
    y=(float)(c1*a2-a1*c2)/(float)(a1*b2-a2*b1);
    printf("%.2f , %.2f" , x , y);
}