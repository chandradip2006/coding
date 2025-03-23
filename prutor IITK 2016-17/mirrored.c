#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d" , &n);
    char ch[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%c" , &ch[i]);
    }
    char ch1[n];
    for(int i = 0 ; i < n ; i++){
        ch1[i]=ch[n-i-1];
    }
    bool flag;
    for(int i = 0 ; i < n ; i++){
        if(ch1[i]==ch[i]){
            flag = true;
        }
        else{
            flag = false;
        }
    }
    if(flag == true){
        printf("Yes");
    }
    else{
        printf("No");
    }

}