#include<stdio.h>
int main(){
    char ch1[100000],ch2[100000];
    scanf("%s %s" , ch1 , ch2);
    int count1=0 , count2=0 , i = 0 , j = 0;
    while(ch1[i]!='\0'){
        count1++;
        i++;
    }
    while(ch2[j]!='\0'){
        count2++;
        j++;
    }
    int flag = 1;
    if(count1!=count2){
        printf("FAIL");
        return 0;
    }
    else{
        int count3=0, count4=0;
        for(int l = 0 ; l <count1;l++){
            for(int r = 0 ; r < count1 ; r++){
                if(ch1[l]==ch1[r]){
                    count3++;
                }
            }
            for(int r = 0 ; r < count1 ; r++){
                if(ch1[l]==ch2[r]){
                    count4++;
                }
            }
            if(count3!=count4){
                flag =0;
                break;
            }
        }
    }
    if(flag == 0){
        printf("FAIL");
    }
    else{
        printf("PASS");
    }
}