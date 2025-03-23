#include<stdio.h>
#define pie 3.141593
int main(){
    char ch;
    scanf("%c" , &ch);
    if(ch=='R'){
        float l,w;
        scanf("%f %f" , &l , &w);
        float area = l*w;
        printf("%.3f" , area);
    }
    else if(ch=='C'){
        float r;
        scanf("%f" , &r);
        float area = pie*r*r;
        printf("%.3f" , area);
    }
    else{
        printf("Invalid Input");
    }
}