#include<stdio.h>
#include<stdbool.h>
void sort(int arr[] , int n){
    bool flag;
    for(int i = 0 ; i < n-1 ; i++){
        flag=false;
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
}
int main(){
    char ch1[101],ch2[101];
    scanf("%s" , ch1);
    scanf("%s" , ch2);
    int count1=0,count2=0;
    while(ch1[count1]!='\0'){
        count1++;
    }
    while(ch2[count2]!='\0'){
        count2++;
    }
    bool flag = false;
    int idx2[count1] , idx3[count2];
    int count=0;
    for(int i=0;i<count1-3;i++){
        for(int j=0;j<count2-3;j++){
            if(ch1[i]==ch2[j]&&ch1[i+1]==ch2[j+1]&&ch1[i+2]==ch2[j+2]){
                flag=true;
                idx2[count]=i;
                idx3[count]=j;
                count++;
            }
        }
    }
    sort(idx2 , count);
    sort(idx3 , count);
    int idx1=idx2[count-1];
    if(!flag){
        printf("Impossible");
    }
    else{
        if(count==1){
            for(int i=0;i<idx3[0];i++){
                printf("%c" , ch2[i]);
            }
            for(int i=idx2[0];i<idx2[0]+3;i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx2[0]+3;i<count1;i++){
                printf("%c" , ch1[i]);
            }
            printf(" ");
            for(int i=0;i<idx2[0];i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx2[0];i<idx2[0]+3;i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx3[0]+3;i<count2;i++){
                printf("%c" , ch2[i]);
            }
        }
        else{
            for(int i=0;i<idx3[0];i++){
                printf("%c" , ch2[i]);
            }
            for(int i=idx3[0];i<idx3[0]+3;i++){
                printf("%c" , ch2[i]);
            }
            for(int i=idx1;i<idx1+3;i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx2[0]+3;i<count1;i++){
                printf("%c" , ch1[i]);
            }
            printf(" ");
            for(int i=0;i<idx2[0];i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx3[0];i<idx3[0]+3;i++){
                printf("%c" , ch2[i]);
            }
            for(int i=idx1;i<idx1+3;i++){
                printf("%c" , ch1[i]);
            }
            for(int i=idx3[0]+3;i<count2;i++){
                printf("%c" , ch2[i]);
            }
        }
    }
}