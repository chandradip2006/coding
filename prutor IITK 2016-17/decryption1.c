#include<stdio.h>
int main(){
    int n , r;
    scanf("%d %d" , &n , &r);
    char ch[n+1];
    scanf("%s" , ch);
    int arr[r];
    for(int i = 0 ; i < r ; i++){
        scanf("%d" , &arr[i]);
    }
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        ch[i]='A'+(ch[i]-'A'+arr[j])%26;
        j++;
        j = j % r;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%c" , ch[i]);
    }
}