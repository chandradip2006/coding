#include<stdio.h>
int main(){
    char ch;
    scanf("%c" , &ch);
    int a;
    scanf("%d" , &a);
    printf("%d" , ch);
    printf("%c" , 'A'+(ch-'a'));
    printf("%d" , a*a);
}