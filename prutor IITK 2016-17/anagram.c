#include<stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d" , &n1, &n2);
    char ch1[n1+1],ch2[n2+1];
    scanf("%s" , ch1);
    scanf("%s" , ch2);
    // int flag = 1;
    if(n1!=n2){
        printf("no");
        // flag = 0;
        return 0;
    }
    else{
        for(int i = 0 ; i < n1 ; i++){
            int count1 = 0 , count2 = 0;
            for(int j = 0 ; j < n1 ; j++){
                if(ch1[i]==ch1[j]){
                    count1++;
                }
            }
            for(int k = 0 ; k < n2 ; k++){
                if(ch1[i]==ch2[k]){
                    count2++;
                }
            }
            if(count1!=count2){
                printf("no");
                // flag = 0;
                // break;
                return 0;
            }
        }
    }
    // if(flag == 1){
        printf("yes");
    // }
}