#include<stdio.h>
int main(){
    char ch[19] = " .:-~=+?|7S0K8ZNM#";
    int a , b;
    scanf("%d %d" , &a , &b);
    int arr[a][b];
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ;j < b ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            printf("%c" , ch[arr[i][j]]);
        }
        printf("\n");
    }
}