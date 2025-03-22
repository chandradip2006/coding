#include<stdio.h>
int main(){
    char ch;
    long long int n;
    scanf("%c", &ch);
    scanf("%lld", &n);

    if('A'<=ch && ch<='Z'){
        if(n>=0){
            printf("%c", 'A'+(ch-'A'+n)%26);
        }
        else{
            long long int r = n*(-1);
            printf("%c" , 'Z'-('Z'-ch+r)%26);
        }
    }
    else{
        if(n>=0){
            printf("%c", 'a'+(ch-'a'+n)%26);
        }
        else{
            long long int r = n*(-1);
            printf("%c" , 'z'-('z'-ch+r)%26);
        }
    }
}