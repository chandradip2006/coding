#include<stdio.h>
#include<stdbool.h>
int main(){
    float a[2][2];
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%f" , &a[i][j]);
        }
    }
    float p[2][2];
    // for(int i = 0 ; i < 2 ; i++){
    //     for(int j = 0 ; j < 2 ; j++){
    //         p[i][j]= a[i][0]*a[j][0]+a[i][1]*a[j][1];
    //     }
    // }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            p[i][j]=0;
            for(int z = 0 ; z < 2 ; z++){
                p[i][j]+=a[i][z]*a[j][z];
            }
        }
    }
    bool flag = true;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0; j < 2 ; j++){
            if(i==j){
                if(p[i][j]!=1){
                    flag = false;
                }
            }
            else{
                if(p[i][j]!=0){
                    flag = false;
                }
            }
        }
    }
    if(flag == true){
        printf("Yes");
    }
    else{
        printf("No");
    }
}