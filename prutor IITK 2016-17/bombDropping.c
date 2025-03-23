#include<stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d" , &x1,&y1,&x2,&y2);
    int x3,y3;
    scanf("%d %d" , &x3,&y3);
    if((x3>x1 && x2>x3)&&(y3>y1 && y2>y3)){
        printf("yes");
    }
    else{
        printf("no");
    }
}