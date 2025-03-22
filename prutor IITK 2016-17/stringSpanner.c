#include<stdio.h>
#include<string.h>
int main(){
    char ch1[1000] , ch2[100];
    scanf("%s" , ch1);
    scanf("%s" , ch2);
    int n1 = strlen(ch1);
    int n2 = strlen(ch2);
    int flag = 1 , count=0;
    for(int i = 0 ; i < n1 ;i++){
        for(int j = 0 ; j < n2 ; j++){
            flag = 0;
            if(ch1[i]==ch2[j]){
                flag = 1;
                count++;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("%d" , count);
}