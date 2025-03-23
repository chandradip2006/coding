#include<stdio.h>
int main(){
    char ch[1001];
    scanf("%s" , ch);
    int count=0;
    while(ch[count]!='\0'){
        count++;
    }
    int arr[count];
    for(int i=0;i<count;i++){
        arr[i]=ch[i];
        char ch1[3];
        int count1=0;
        while(arr[i]>0){
            ch1[count1]=(char)('a'+arr[i]%10);
            arr[i]=arr[i]/10;
            count1++;
        }
        for(int j=count1-1;j>=0;j--){
            printf("%c" , ch1[j]);
        }
    }
}