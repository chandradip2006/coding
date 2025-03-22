#include<stdio.h>
int main(){
    char ch[5];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%c" , &ch[i]);
    }
    int r;
    scanf("%d" , &r);
    for(int i = 0 ; i < 5 ; i++){
        printf("%c" , 'a'+(ch[i]-'a'+r)%26);
    }
}