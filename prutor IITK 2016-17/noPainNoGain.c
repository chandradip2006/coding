#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch1[1000000],ch2[1000000];
    scanf("%s %s" , ch1 , ch2);
    int count1=0,count2=0 , i = 0 , j = 0;
    while(ch1[i]!='\0'){
        count1++;
        i++;
    }
    while(ch2[j]!='\0'){
        count2++;
        j++;
    }
    bool flag = true;
    if(count1<count2){
        printf("NO");
        return 0;
    }
    else{
        for(int L = 0 ; L < count2 ;L++){
            int count3=0,count4=0;
            for(int M = 0 ; M < count2 ; M++){
                if(ch2[L]==ch2[M]){
                    count3++;
                }
            }
            for(int k = 0 ; k < count1;k++){
                if(ch2[L]==ch1[k]){
                    count4++;
                }
            }
            if(count3!=count4){
                flag = false;
                break;
            }
        }
    }
    if(flag == true){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
// ------------------here there is some error--------------------