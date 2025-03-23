#include<stdio.h>
int main(){
    int a , b;
    scanf("%d %d" , &a,&b);
    int arr[a][b];
    for(int i = 0 ; i< a ; i++){
        for(int j = 0 ; j < b;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    int z = 0;
    int flag = 1;
    printf("%d\n", 0);
    for(int i = 0;i<a;i++){
        for(int j = z; j <b;j++){
            if(arr[i+1][j]==0){
                printf("%d\n",j);
                break;
            }
            else{
                if(arr[i][j+1]==0){
                    z++;
                }
                else{
                    if(j < b-1){
                        printf("RACHITA LOOSES");
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if(flag==0){
            break;
        }
    }
}