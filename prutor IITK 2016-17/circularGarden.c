#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f %f %f %f %f" , &x1,&y1,&x2,&y2,&x3,&y3);
    float x0 = (x1+x2)/2;
    float y0=(y1+y2)/2;
    float r = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2;
    float d = sqrt((x3-x0)*(x3-x0)+(y3-y0)*(y3-y0));
    if(d>r){
        printf("outside");
    }
    if(d<r){
        printf("inside");
    }
    else{
        printf("on the boundary");
    }
}