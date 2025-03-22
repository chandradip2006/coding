#include<stdio.h>
int main(){
    int a , b;
    scanf("%d %d" , &a , &b);
    int arr[a][b];
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i = 0 ; i < a ; i++){
        int z=i , j=0;
        while(z>=0){
            printf("%d " , arr[z][j]);
            z--;j++;
            if(j>=b){
                break;
            }
        }
        printf("\n");
    }
    for(int i = 1 ; i < b ; i++){
        int z=i , j=a-1;
        while(j>=0){
            printf("%d " , arr[j][z]);
            z++;j--;
            if(z>=b){
                break;
            }
        }
        printf("\n");
    }
}