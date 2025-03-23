#include<stdio.h>
float calculator(float a , char ch , float b){
    switch(ch){
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
    }
}
int main(){
    float z = 1;
    while(z!=-1.0){
        float x , p=1;
        scanf("%f" , &x);
        char ch1, ch2,ch3,ch4 , ch5;
        scanf("%c" , &ch1);
        while(ch1!='|'){
            scanf("%c %c %c",&ch2 , &ch3, &ch4);
            if(ch2=='x'){
                if(ch4=='x'){
                    p=p*calculator(x,ch3,x);
                }
                else{
                    p=p*calculator(x,ch3,(float)(ch4-'0'));
                }
            }
            else{
                if(ch4=='x'){
                    p=p*calculator((float)(ch2-'0'),ch3,x);
                }
                else{
                    p=p*calculator((float)(ch2-'0'),ch3,(float)(ch4-'0'));
                }
            }
            scanf("%c",&ch1);
        }
        z = z*p;
        printf("%f\n" , z);
    }
}
