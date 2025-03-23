#include<stdio.h>
#include<stdbool.h>
int main(){
    int M, N;
    scanf("%d %d" , &M , &N);
    char ch[M][N];
    for(int i = 0 ; i < M ; i++){
        for(int j = 0 ; j < N ; j++){
            scanf("%c" , &ch[i][j]);
        }
    }
    bool flag = true;
    for(int i = 0 ; i < M ; i++){
        for(int j = 0 ; j < N-1;j++){
            if(ch[i][j]!=ch[i][j+1]){
                flag = false;
                break;
            }
        }
        if(flag==false){
            break;
        }
    }
    if(flag == false){
        printf("SHORT CIRCUIT");
    }
    else{
        printf("OKAY");
    }
}