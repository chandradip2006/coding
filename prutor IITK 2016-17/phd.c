#include<stdio.h>
int main(){
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
    char ch;
    scanf("%c" , &ch);
    while(ch!='O'){
        if(ch=='T'){
            count1++;
        }
        else if(ch=='S'){
            count2++;
        }
        else if(ch=='F'){
            count3++;
        }
        else if(ch=='D'){
            count4++;
        }
        else if(ch=='N'){
            count5++;
        }
        else if(ch=='I'){
            count6++;
        }
        scanf("%c" , &ch);
    }
    if(count1==3&&count2==1&&count3<=6&&count4<=30&&count5>=3&&count6>=3){
        printf("DOCTOR");
    }
    else{
        printf("NOT A DOCTOR");
    }

}