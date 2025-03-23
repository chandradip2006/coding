#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b;
    scanf("%d %d" , &a,&b);
    char ch[a][b];
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ;j++){
            scanf("%c" , &ch[i][j]);
        }
    }
    bool flag = false;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b; j++){
            if(ch[i][j]=='B'){
                flag = true;
                printf("%d %d" , i , j);
                break;
            }
        }
        if(flag == true){
            break;
        }
    }
}