#include<stdio.h>
int main(){
    int r1,w1,r2,w2;
    char c1,c2;
    scanf("%d" , &r1);
    scanf("%c" , &c1);
    scanf("%d" , &w1);
    scanf("%d" , &r2);
    scanf("%c" , &c2);
    scanf("%d" , &w2);
    if(r1>r2){
        printf("A wins");
    }
    else if(r1==r2){
        if(w1>w2){
            printf("B wins");
        }
        else if(w1==w2){
            printf("TIE");
        }
        else{
            printf("A wins");
        }
    }
    else{
        printf("B wins");
    }
}