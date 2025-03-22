#include<stdio.h>
void hanoi(int n , char ch1 , char ch2 , char ch3){
    if(n==0){
        return;
    }
    else{
        hanoi(n-1,ch1 , ch3 , ch2);
        printf("move from %c to %c\n" , ch1, ch3);
        hanoi(n-1,ch2,ch1,ch3);
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    hanoi(n, 'A','B','C');
}