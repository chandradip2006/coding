#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch1[10000],ch2[10000];
    scanf("%s %s" , ch1 , ch2);
    int count1=0,count2=0 , i = 0 , j = 0;
    while(ch1[i]!='\0'){
        count1++;
        i++;
    }
    while(ch2[j]!='\0'){
        count2++;
        j++;
    }
    bool flag1;
    for(int k = 0 ; k < count2 ; k++){
        flag1 = false;
        for(int l = 0 ; l < count1 ; l++){
            if(ch2[k]==ch1[l]){
                flag1 = true;
                break;
            }
        }
        if(flag1==false){
            break;
        }
    }
    bool flag2;
    for(int k = 0 ; k < count1 ; k++){
        flag2=false;
        for(int l = 0 ; l < count2 ; l++){
            if(ch1[k]==ch2[l]){
                flag2 = true;
                break;
            }
        }
        if(flag2==false){
            break;
        }
    }
    if(flag1&&flag2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}