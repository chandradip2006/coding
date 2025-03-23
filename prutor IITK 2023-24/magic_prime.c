#include<stdio.h>
long long int power(int a){
    long long int p = 1;
    for(int i = 1 ; i <=a ; i++){
        p = p*10;
    }
    return p;
}
int prime(int x){
    int flag;
    for(int i = 2; i < x ; i++){
        if(x % i == 0){
            flag= 0;
            break;
        }
        else{
            flag = 1;
        }
    }
    return flag ;
}
int main(){
    long long int n;
    scanf("%lld" , &n);
    int arr[9];
    int j = 0,i = 8;
    while(n>0){
        arr[j] = n / power(i);
        n = n % power(i);
        j++;
        i--;
    }
    int num = 10*arr[0]+arr[8];
    prime(num)==1?printf("PRIME\n"):printf("NOT PRIME\n");
    (((arr[1]+arr[3])*3+arr[5])%7==((arr[2]*arr[6])+arr[4])%7)?printf("MAGIC"):printf("NOT MAGIC");
}