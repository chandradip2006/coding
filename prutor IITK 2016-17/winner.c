#include<stdio.h>
int change(char ch){
    int z;
    switch(ch){
        case '_':
            z=-1;
            break;
        case '*':
            z=-2;
            break;
        case '-':
            z=-1;
            break;
        case '+':
            z=1;
            break;
    }
    return z;
}
int main(){
    int a , count1=0;
    scanf("%d" , &a);
    char ch1;
    scanf("%c" , &ch1);
    while(ch1!='|'){
        a=a+change(ch1);
        if(a>0){
            count1++;
        }
        scanf("%c" , &ch1);
    }
    int b , count2=0;
    scanf("%d" , &b);
    char ch2;
    scanf("%c" , &ch2);
    while(ch2!='|'){
        b=b+change(ch2);
        if(b>0){
            count2++;
        }
        scanf("%c" , &ch2);
    }
    if(count1>count2){
        printf("HARPREET");
    }
    else if(count1<count2){
        printf("SHIVAM");
    }
    else{
        printf("HARPREET");
    }
}