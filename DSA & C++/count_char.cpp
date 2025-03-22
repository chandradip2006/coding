#include<stdio.h>
int main(){
    char ch[10000];
    int count=0;
    for(int i=0;i<10000;i++){
        scanf("%c" , &ch[i]);
        if(ch[i]!='\n'){
            count++;
        }
        else break;
    }
    printf("%d", count);
}