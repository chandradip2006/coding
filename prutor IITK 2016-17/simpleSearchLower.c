#include<stdio.h>
int main(){
    int n;
    printf("input:\n");
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    int r;
    scanf("%d" , &r);
    int num[r];
    for(int i = 0 ; i < r ; i++){
        scanf("%d" , &num[i]);
    }
    printf("output:\n");
    for(int i = 0; i < r ; i++){
        if(num[i]<arr[0]){
            printf("%d" , -1);
        }
        else{
            int j = -1;
            for(int k = 0 ; k < n ; k++){
                if(num[i] == arr[k]){
                    j=k;
                    break;
                }
            }
            if(j!=-1){
                printf("%d\n" , j);
            }
            else{
                int l;
                for(int k=0;k<n;k++){
                    if(arr[k]<num[i]){
                        l=k;
                    }
                    else{
                        break;
                    }
                }
                printf("%d\n" , l);
            }
        }
    }
}