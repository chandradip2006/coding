#include<stdio.h>
int check(char ch[], int b){
    int z=1;
    for(int i=0;i<b;i++){
        if(ch[i]!=ch[b-1-i]){
            z=0;
            break;
        }
    }
    if(z){
        return 1;
    }
    else return 0;
}
int main(){
    char ch[2001];
    scanf("%s",ch);
    int count=0;
    while(ch[count]!='\0'){
        if(ch[count]>='A'&&ch[count]<='Z'){
            ch[count]=(char)(ch[count]+32);
        }
        count++;
    }
    int count1=0;
    while(count>1){
        if(check(ch,count)){
            count1++;
            if(count%2==0){
                count=count/2;
            }
            else count=count/2+1;
        }
        else break;
    }
    printf("%d" , count1);
}