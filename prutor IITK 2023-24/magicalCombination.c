#include<stdio.h>
void swap1(char* ch1 , char* ch2){
    if(*ch1>*ch2){
        char temp = *ch1;
        *ch1 = *ch2;
        *ch2 = temp;
    }
}
void swap2(char* ch1 , char* ch2){
    if(*ch1<*ch2){
        char temp = *ch1;
        *ch1 = *ch2;
        *ch2 = temp;
    }
}
int main(){
    char ch1[5] , ch2[5];
    for(int i = 0 ; i < 5 ; i++){
        scanf("%c" , &ch1[i]);
    }
    int j = 0;
    for(int i = 0 ; i< 5 ; i++){
        if(ch1[i]>=65 && ch1[i]<=90){
            ch2[j] = ch1[i];
            j++;
        }
    }
    for(int i = 0 ; i< 5 ; i++){
        if(!((ch1[i]>=97 && ch1[i]<=122)||(ch1[i]>=65 && ch1[i]<=90))){
            ch2[j] = ch1[i];
            j++;
        }
    }
    for(int i = 0 ; i< 5 ; i++){
        if(ch1[i]>=97 && ch1[i]<=122){
            ch2[j] = ch1[i];
            j++;
        }
    }
    swap1(ch2,ch2+1);
    swap2(ch2+3, ch2+4);
    for(int i = 0 ; i < 5; i++){
        printf("%c" , ch2[i]);
    }
}