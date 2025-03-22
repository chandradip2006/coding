#include<stdio.h>
#include<stdbool.h>
void swap(int* x , int* y){
    int temp=*x;
    *x = *y;
    *y=temp;
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    bool flag;
    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    int count[n];
    int count1=0;
    int count2=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count2++;
        }
        else{
            count[count1]=count2;
            count1++;
            count2=1;
        }
    }
    count[count1]=count2;
    count1++;
    bool flag1;
    for(int i=0;i<count1-1;i++){
        flag1=false;
        for(int j=0;j<count1-1-i;j++){
            if(count[j]>count[j+1]){
                swap(&count[j],&count[j+1]);
                flag1 = true;
            }
        }
        if(!flag1){
            break;
        }
    }
    int s_max=0;
    for(int i=count1-2;i>=0;i--){
        if(count[i]<count[count1-1]){
            s_max=count[i];
            break;
        }
    }
    // printf("%d" , s_max);
    int d[count1];
    int count3=0 , count4=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count4++;
        }
        else{
            if(count4==s_max){
                d[count3]=arr[i];
                count3++;
                count4=1;
            }
        }
    }
    // printf("%d" , s_max);
    if(count4==s_max){
        d[count3]=arr[n-1];
        count3++;
    }
    // printf("%d" , s_max);
    if(s_max==0){
        printf("0");
    }
    else {
        printf("%d\n" , count3);
        for(int i=0;i<count3;i++){
            printf("%d " , d[i]);
        }
    }
}