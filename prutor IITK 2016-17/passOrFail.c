#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[3];
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d" , &arr[i]);
    }
    int sum = 0;
    float avg;
    for(int i = 0 ; i < 3 ; i++){
        sum = sum+arr[i];
    }
    avg=sum/3.0;
    bool flag = true;
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i]<40){
            flag = false;
            break;
        }
    }
    if(flag == false){
        printf("F");
    }
    else{
        for(int i = 0; i < 3 ; i++){
            if(arr[i]>100){
                flag =false;
                break;
            }
        }
        if(flag==true){
            if(avg<=40){
                printf("F");
            }
            else if(avg<=50){
                printf("E");
            }
            else if(avg<=60){
                printf("D");
            }
            else if(avg<=70){
                printf("C");
            }
            else if(avg<=80){
                printf("B");
            }
            else if(avg<=90){
                printf("A");
            }
            else{
                printf("A*");
            }
        }
        else{
            printf("nice handwriting");
        }
    }
}