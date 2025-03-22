#include<stdio.h>
#include<string.h>
int main(){
    // int n;
    // scanf("%d" , &n);
    char ch[100001];
    scanf("%s" , ch);
    char ch1[100001];
    int n = strlen(ch);
    for(int i=0;i<n;i++){
        if(strlen(ch1)==0){
            ch1[strlen(ch1)]=ch[i];
        }
        else {
            if(ch[i]==ch1[strlen(ch1)-1]){
                ch1[strlen(ch1)-1]='\0';
            }
            else {
                ch1[strlen(ch1)] = ch[i];
            }
        }
    }
    if(strlen(ch1)==0){
        printf("\n");
    }
    else {
        printf("%s" , ch1);
    }
}