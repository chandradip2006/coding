#include<stdio.h>
void swap(int* x , int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int mod(int x){
    if(x>=0){
        return x;
    }
    else return (-1)*x;
}
int min1(int a , int b){
    if(a>=b){
        return b;
    }
    else return a;
}
int main(){
    int n;
    scanf("%d" , &n);
    int z = n/2;
    int arr[n] , sum=0;
    for(int i=0;i<n;i++){
        scanf("%d" , arr+i);
        sum=sum+arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
            }
        }
    }
    int sum1=0;
    if(z%2==0){
        for(int i=0;i<z/2;i++){
            sum1=sum1+arr[i]+arr[n-1-i];
        }
    }
    else{
        int j=0;
        for(int i=0;i<z/2;i++){
            sum1=sum1+arr[i]+arr[n-1-i];
            j++;
        }
        int sum2 , sum3;
        sum2=sum1+arr[j];
        sum3=sum1+arr[n-1-j];
        sum1=min1(sum2,sum3);
    }
    printf("%d" , mod(sum-2*sum1));
}