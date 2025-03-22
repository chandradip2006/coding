#include<stdio.h>
int main(){
    int n , z1 , z2=0 , z3=0;
    scanf("%d" , &n);
    int a;
    scanf("%d" , &a);
    z1=a;
    scanf("%d" , &a);
    if(z1<a){
        z2=z1;
        z1=a;
    }
    else{
        z2=a;
    }
    scanf("%d" , &a);
    if(a>=z1){
        int temp =z1;
        z1=a;
        if(z2>=temp){
            z3=temp;
        }
        else{
            z3=z2;
            z2=temp;
        }
    }
    else{
        if(z2>=a){
            z3=a;
        }
        else{
            int temp=z2;
            z2=a;
            z3=temp;
        }
    }
    while(n>3){
        scanf("%d" , &a);
        if(z1>=a){
            if(z2>=a){
                if(z3<=a){
                    z3=a;
                }
            }
            else{
                int temp=z2;
                z2=a;
                z3=temp;
            }
        }
        else{
            int temp =z1;
            z1=a;
            if(z2>=temp){
                if(z3<=temp){
                    z3=temp;
                }
            }
            else{
                int temp1=z2;
                z2=temp;
                z3=temp1;
            }
        }
        n--;
    }
    printf("\n");
    printf("%d %d %d" , z1 , z2 ,z3);
}