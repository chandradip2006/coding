#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d" , &n);
    for(int i=2;i<= sqrt(n);i++){
        if(n%i==0){
            printf("%d\n" , i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        printf("%d\n" , n);
    }
}