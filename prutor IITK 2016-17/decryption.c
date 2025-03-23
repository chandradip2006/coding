#include<stdio.h>
int difference(char ch1 , char ch2){
    if(ch1>=ch2){
        return ch1-ch2;
    }
    else{
        return ch2-ch1;
    }
}
void upper(char ch){
    printf("%c" , 'A'+(ch-'a'));
}
int main(){
    char ch[2];
    scanf("%c %c" , &ch[0], &ch[1]);
    upper(ch[0]);
    printf("%d" ,difference(ch[0],ch[1]));
    upper(ch[1]);
}