#include<stdio.h>
int reverse(int x){
    int ld ,r = 0;
    while(x>0){
        ld = x%10;
        r = r*10+ld;
        x = x/10;
    }
    return r;
}
int main(){
    int n;
    scanf("%d" , &n);
    if(n<= 9 && n>0){
        printf("%d" , reverse(n)*1000);
    }
    else if(n<=99 && n>=10){
        printf("%d" , reverse(n)*100);
    }
    else if(n<=999 && n >=100){
        printf("%d" , reverse(n)*10);
    }
    else if(n<=9999 && n>=1000){
        printf("%d" , reverse(n));
    }
    else{
        printf("enter a number of no of digits between 1 to 4");
    }
}