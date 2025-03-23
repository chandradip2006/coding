#include<stdio.h>
#include<math.h>
int main(){
    int a[3][3],*b,*c;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=pow((i+3),(j+1));
        }
    }
    b=*a;
    c=*(a+2);
    for(int i = 0; i<3;i++){
        printf("%d " , b[i]);
    }
    printf("\n");
    for(int i = 0; i<3;i++){
        printf("%d " , *(c+i));
    }
}