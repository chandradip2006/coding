#include<stdio.h>
int main(){
    int arr[3] , C , Q;
    scanf("%d %d %d %d %d" , &arr[0],&arr[1],&arr[2],&C,&Q);
    int a[C];
    for(int i = 0 ; i < C ; i++){
        scanf("%d" , &a[i]);
    }
    int t[Q];
    for(int i = 0 ; i < Q ; i++){
        scanf("%d" , &t[i]);
    }
    for(int i = 0 ; i < Q ; i++){
        if(t[i]==0){
            for(int i = 0 ; i < 3 ; i++){
                printf("%d " , arr[i]);
            }
            printf("\n");
        }
        else{
            switch(a[t[i]-1]){
                case 1:
                    arr[2]+=1;
                    break;
                case 2:
                    arr[2]-=1;
                    break;
                case 3:
                    arr[0]+=1;
                    break;
                case 4:
                    arr[0]-=1;
                    break;
                case 5:
                    arr[1]+=1;
                    break;
                case 6:
                    arr[1]-=1;
                    break;
        }
            for(int k = 0 ; k < 3 ; k++){
                printf("%d " , arr[k]);
            }
            printf("\n");
        }
    }
}