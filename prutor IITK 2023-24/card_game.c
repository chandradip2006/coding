#include<stdio.h>
int winner(int arr[]){
    int sum = 0;
    for(int i = 0 ; i < 3;i++){
        sum = sum+arr[i];
    }
    if(sum%5==0){
        return 1;
    }
    else return 0;
}
int main(){
    char ch;
    int arr1[3],arr2[3];
    scanf("%c" , &ch);
    for(int i = 0 ; i < 3 ;i++){
        scanf("%d" , &arr1[i]);
    }
    for(int i = 0 ; i < 3 ;i++){
        scanf("%d" , &arr2[i]);
    }
    if(winner(arr1)==1&&(winner(arr2)==1||winner(arr2)==0)){
        if(ch=='J'){
            printf("Joey");
        }
        else{
            printf("Chandler");
        }
    }
    else if(winner(arr1)==0&&winner(arr2)==1){
        if(ch=='J'){
            printf("Chandler");
        }
        else{
            printf("Joey");
        }
    }
    else {
        printf("tie");
    }

}