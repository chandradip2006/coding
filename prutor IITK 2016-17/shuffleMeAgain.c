#include<stdio.h>
int main(){
    int n , k;
    scanf("%d %d" , &n , &k);
    char ch[n+1];
    scanf("%s" , ch);
    int arr[k][n];
    for(int i = 0 ; i < k ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    char ch1[n];
    for(int i = 0 ; i < k ; i++){
        for(int j = 0 ; j < n ; j++){
            ch1[j]=ch[arr[i][j]-1];
        }
        for(int k = 0 ; k < n ; k++){
                ch[k]=ch1[k];
        }
    }
    for(int i = 0 ; i < n ;i++){
        printf("%c" , ch[i]);
    }
}
