#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    char ch[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%c " , &ch[i][j]);
        }
    }
    // for(int j=n-1;j>=0;j--){
    //     int i=0;
    //     int k=j;
    //     while(k<n){
    //         printf("%c" , ch[i][k]);
    //         i++;
    //         k++;
    //     }
    //     printf(" ");
    // }
    printf("%c" , ch[0][n-1]);
}