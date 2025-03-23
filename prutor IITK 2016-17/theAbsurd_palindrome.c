#include<stdio.h>
#include<stdbool.h>
int palindrome(char ch[], int a , int b){
    bool flag = true;
    if(a>=b){
        return 0;
    }
    else{
        for(int i = 0 ; i <=(b-a)/2;i++){
            if(ch[a+i]!=ch[b-i]){
                flag = false;
                break;
            }
        }
        if(flag==false){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    char ch[10001];
    scanf("%s" , ch);
    int count = 0 , i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    bool flag = false;
    for(int l = 0 ; l < count;l++){
        for(int j = 0 ; j<count ; j++){
            if(ch[l]==ch[count-1-j]){
                if(palindrome(ch,l,count-1-j)==1){
                    printf("%d\n" , count-1-j-l+1);
                    flag = true;
                    break;
                }
            }
        }
        if(flag==true){
            break;
        }
    }
    if(flag==false){
        printf("%d" , 1);
    }
}