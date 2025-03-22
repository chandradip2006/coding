#include<stdio.h>
int main(){
    char ch1, ch2;
    float m;
    scanf("%c" , &ch1);
    float count1 = 0 , count2=0,count3=0 , count4=0,count5=0,count6=0;
    while(ch1!='|'){
        scanf("%c" , &ch2);
        scanf("%f" , &m);
        if(ch1=='R'){
            if(ch2=='r'){
                count2-=m;
                count1+=m;
            }
            else if(ch2=='N'){
                count3-=m;
                count1+=m;
            }
            else if(ch2=='H'){
                count4-=m;
                count1+=m;
            }
            else if(ch2=='B'){
                count5-=m;
                count1+=m;
            }
            else if(ch2=='S'){
                count6-=m;
                count1+=m;
            }
        }
        else if(ch1=='r'){
            if(ch2=='R'){
                count1-=m;
                count2+=m;
            }
            else if(ch2=='N'){
                count3-=m;
                count2+=m;
            }
            else if(ch2=='H'){
                count4-=m;
                count2+=m;
            }
            else if(ch2=='B'){
                count5-=m;
                count2+=m;
            }
            else if(ch2=='S'){
                count6-=m;
                count2+=m;
            }
        }
        else if(ch1=='N'){
            if(ch2=='r'){
                count2-=m;
                count3+=m;
            }
            else if(ch2=='R'){
                count1-=m;
                count3+=m;
            }
            else if(ch2=='H'){
                count4-=m;
                count3+=m;
            }
            else if(ch2=='B'){
                count5-=m;
                count3+=m;
            }
            else if(ch2=='S'){
                count6-=m;
                count3+=m;
            }
        }
        else if(ch1=='H'){
            if(ch2=='r'){
                count2-=m;
                count4+=m;
            }
            else if(ch2=='N'){
                count3-=m;
                count4+=m;
            }
            else if(ch2=='R'){
                count1-=m;
                count4+=m;
            }
            else if(ch2=='B'){
                count5-=m;
                count4+=m;
            }
            else if(ch2=='S'){
                count6-=m;
                count4+=m;
            }
        }
        else if(ch1=='B'){
            if(ch2=='r'){
                count2-=m;
                count5+=m;
            }
            else if(ch2=='N'){
                count3-=m;
                count5+=m;
            }
            else if(ch2=='H'){
                count4-=m;
                count5+=m;
            }
            else if(ch2=='R'){
                count1-=m;
                count5+=m;
            }
            else if(ch2=='S'){
                count6-=m;
                count5+=m;
            }
        }
        else if(ch1=='S'){
            if(ch2=='r'){
                count2-=m;
                count6+=m;
            }
            else if(ch2=='N'){
                count3-=m;
                count6+=m;
            }
            else if(ch2=='H'){
                count4-=m;
                count6+=m;
            }
            else if(ch2=='B'){
                count5-=m;
                count6+=m;
            }
            else if(ch2=='R'){
                count1-=m;
                count6+=m;
            }
        }
        scanf("%c" , &ch1);
    }
    printf("Rohan=%f\n" , count1);
    printf("Rachita=%f\n" , count2);
    printf("Nishant=%f\n" , count3);
    printf("Harpreet=%f\n" , count4);
    printf("Bhuvesh=%f\n" , count5);
    printf("Shivam=%f\n" , count6);
}